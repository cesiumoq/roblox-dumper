import { useEffect, useMemo, useState } from "react";

const FILE_ICON = "M56 20h96l56 56v140a20 20 0 0 1-20 20H56a20 20 0 0 1-20-20V40a20 20 0 0 1 20-20Zm92 24v40h40";

const NAV = [
  ["overview", "Overview"],
  ["offsets", "Offsets"],
  ["fflags", "FFlags"],
  ["functions", "Functions"],
  ["downloads", "Downloads"],
  ["api", "API"],
  ["favorites", "Favorites"],
];

const SOURCES = {
  offsets: "api/offsets_all.json",
  fflags: "api/fflags_all.json",
  functions: "api/functions_all.json",
};

const FILE_LINKS = {
  offsets: ["offsets.hpp", "offsets.cs", "offsets.json", "OffsetsHex.json", "offsets.txt", "offsets_all.json", "struct.hpp", "types.json"],
  fflags: ["fflags.hpp", "fflags.cs", "fflags.json", "FFlagsHex.json", "fflags.txt", "fflags_all.json"],
  functions: ["functions.hpp", "functions.cs", "functions.json", "functions_all.json"],
};

function flattenModules(data) {
  const rows = [];
  for (const [module, entries] of Object.entries(data.modules || {})) {
    for (const entry of entries) rows.push({ module, ...entry });
  }
  return rows;
}

function rowsFor(view, data) {
  if (!data) return [];
  switch (view) {
    case "offsets":
      return flattenModules(data);
    case "fflags":
      return (data.flags || []).map((f) => ({ name: f.name, rva: f.rva }));
    case "functions":
      return (data.functions || []).map((f) => ({ name: f.name, rva: f.rva }));
    default:
      return [];
  }
}

const COLUMNS = {
  offsets: [["name", "Name"], ["module", "Class"], ["rva", "RVA"]],
  fflags: [["name", "Flag"], ["rva", "RVA"]],
  functions: [["name", "Function"], ["rva", "RVA"]],
};

function Icon() {
  return (
    <svg viewBox="0 0 256 256" width="16" height="16" fill="none" stroke="currentColor" strokeWidth="14" strokeLinecap="round" strokeLinejoin="round">
      <path d={FILE_ICON} />
    </svg>
  );
}

function Highlight({ text, query }) {
  const value = String(text ?? "");
  if (!query) return value;
  const i = value.toLowerCase().indexOf(query.toLowerCase());
  if (i < 0) return value;
  return <>{value.slice(0, i)}<mark>{value.slice(i, i + query.length)}</mark>{value.slice(i + query.length)}</>;
}

function formatDate(value) {
  if (!value) return "unknown";
  const d = new Date(value);
  if (Number.isNaN(d.getTime())) return value;
  return d.toLocaleString("en-GB", { day: "2-digit", month: "short", year: "numeric", hour: "2-digit", minute: "2-digit" });
}

function CopyButton({ text, label = "copy" }) {
  const [copied, setCopied] = useState(false);
  return (
    <button
      onClick={() => {
        navigator.clipboard.writeText(text).then(() => {
          setCopied(true);
          setTimeout(() => setCopied(false), 900);
        });
      }}
    >
      {copied ? "copied" : label}
    </button>
  );
}

function Star({ active, onClick }) {
  return (
    <button className={active ? "star active" : "star"} onClick={onClick} title="favorite">
      {active ? "\u2605" : "\u2606"}
    </button>
  );
}

function RowCopy({ row }) {
  const parts = [];
  for (const key of ["name", "rva"]) {
    if (row[key] != null && row[key] !== "") parts.push(String(row[key]));
  }
  const text = parts.join(" ");
  return <CopyButton text={text} label="" />;
}

export default function App() {
  const [build, setBuild] = useState("");
  const [meta, setMeta] = useState(null);
  const [view, setView] = useState("overview");
  const [cache, setCache] = useState({});
  const [loading, setLoading] = useState(false);
  const [query, setQuery] = useState("");
  const [globalRows, setGlobalRows] = useState([]);
  const [globalLoaded, setGlobalLoaded] = useState(false);
  const [favorites, setFavorites] = useState(() => {
    try { return JSON.parse(localStorage.getItem("rbx-favorites") || "[]"); }
    catch { return []; }
  });

  const toggleFavorite = (view, label) => {
    const key = `${view}:${label}`;
    setFavorites((current) => {
      const next = current.includes(key) ? current.filter((x) => x !== key) : [...current, key];
      localStorage.setItem("rbx-favorites", JSON.stringify(next));
      return next;
    });
  };

  useEffect(() => {
    fetch("./data/latest/build.json", { cache: "no-store" })
      .then((r) => r.json())
      .then((data) => { setBuild(String(data.build_number ?? "")); setMeta(data); })
      .catch(() => {});
  }, []);

  useEffect(() => {
    if (!SOURCES[view] || cache[view]) return;
    setLoading(true);
    fetch(SOURCES[view], { cache: "no-store" })
      .then((r) => r.json())
      .then((data) => setCache((c) => ({ ...c, [view]: data })))
      .catch(() => setCache((c) => ({ ...c, [view]: null })))
      .finally(() => setLoading(false));
  }, [view, cache]);

  useEffect(() => {
    if (!query.trim() || globalLoaded) return;
    setGlobalLoaded(true);
    Promise.all([
      fetch("./api/offsets_all.json").then((r) => r.json()),
      fetch("./api/fflags_all.json").then((r) => r.json()),
      fetch("./api/functions_all.json").then((r) => r.json()),
    ]).then(([offsets, fflags, functions]) => {
      const rows = [];
      for (const [module, entries] of Object.entries(offsets.modules || {})) {
        for (const entry of entries) rows.push({ view: "offsets", label: entry.name, meta: `${module} / ${entry.rva}` });
      }
      for (const f of fflags.flags || []) rows.push({ view: "fflags", label: f.name, meta: f.rva });
      for (const f of functions.functions || []) rows.push({ view: "functions", label: f.name, meta: f.rva });
      setGlobalRows(rows);
    }).catch(() => {});
  }, [query, globalLoaded]);

  const viewer = (file) => `./view.html?file=${file.split("/").map(encodeURIComponent).join("/")}`;
  const rows = useMemo(() => rowsFor(view, cache[view]), [view, cache]);
  const cols = COLUMNS[view] || [];
  const q = query.trim().toLowerCase();

  const fileHits = useMemo(() => {
    if (!q) return [];
    const hits = [];
    for (const [group, files] of Object.entries(FILE_LINKS)) {
      for (const file of files) if (file.toLowerCase().includes(q)) hits.push({ group, file });
    }
    return hits.slice(0, 8);
  }, [q]);

  const rowHits = useMemo(() => {
    if (!q) return [];
    return globalRows
      .filter((r) => `${r.label} ${r.meta}`.toLowerCase().includes(q))
      .slice(0, 12);
  }, [q, globalRows]);

  const selectView = (next) => {
    setView(next);
    setQuery("");
  };

  return (
    <div className="shell">
      <aside className="sidebar">
        <div className="brand">
          <div className="brand-title">Roblox <span>Dump</span></div>
          <div className="brand-sub">offsets / fflags</div>
        </div>
        <nav>
          {NAV.map(([id, label, count]) => (
            <button key={id} className={view === id ? "active" : ""} onClick={() => selectView(id)}>
              <span>{label}</span>
              {count && <em>{count}</em>}
            </button>
          ))}
        </nav>
      </aside>

      <main className="content">
        <header className="topbar">
          <div className="crumbs"><span>roblox-dumper</span><i>/</i><b>{NAV.find(([id]) => id === view)?.[1]}</b></div>
          <div className="search-wrap">
            <span className="search-icon">Ctrl</span>
            <input value={query} onChange={(e) => setQuery(e.target.value)} placeholder="Search dump..." />
            {q && (
              <div className="search-dropdown">
                {fileHits.map(({ group, file }) => (
                  <button key={`${group}-${file}`} onClick={() => selectView(group)}>
                    <span className="res-name"><Highlight text={file} query={query} /></span>
                    <span className="res-meta">{group}</span>
                  </button>
                ))}
                {rowHits.map((row, i) => (
                  <button key={`row-${i}`} onClick={() => { selectView(row.view); }}>
                    <span className="res-name"><Highlight text={row.label} query={query} /></span>
                    <span className="res-meta">{row.view} / <Highlight text={row.meta} query={query} /></span>
                  </button>
                ))}
                {!fileHits.length && !rowHits.length && <div className="empty-search">No results</div>}
              </div>
            )}
          </div>
          <div className="build-badge" title={`Dump generated ${formatDate(meta?.generated_at)}`}>
            <span className="dot" />
            <span className="badge-label">version</span>
            <span className="badge-value">{build}</span>
            <span className="badge-sep" />
            <span className="badge-label">dumped</span>
            <span className="badge-value">{formatDate(meta?.generated_at)}</span>
            {meta?.dump_seconds != null && <span className="badge-muted">({Number(meta.dump_seconds).toFixed(1)}s)</span>}
          </div>
          <a className="github-btn" href="https://github.com/cesiumoq/roblox-dumper" target="_blank" rel="noreferrer" title="Source Code" aria-label="Source Code">
            <svg viewBox="0 0 24 24" width="17" height="17" fill="currentColor" aria-hidden="true">
              <path d="M12 .5C5.65.5.5 5.65.5 12c0 5.08 3.29 9.39 7.86 10.91.58.11.79-.25.79-.56v-2.17c-3.2.7-3.88-1.36-3.88-1.36-.52-1.33-1.28-1.68-1.28-1.68-1.05-.72.08-.7.08-.7 1.16.08 1.77 1.19 1.77 1.19 1.03 1.76 2.7 1.25 3.36.96.1-.75.4-1.25.73-1.54-2.55-.29-5.23-1.28-5.23-5.69 0-1.26.45-2.29 1.19-3.1-.12-.29-.52-1.46.11-3.05 0 0 .97-.31 3.18 1.18a11.1 11.1 0 0 1 5.79 0c2.21-1.49 3.18-1.18 3.18-1.18.63 1.59.23 2.76.11 3.05.74.81 1.19 1.84 1.19 3.1 0 4.42-2.69 5.39-5.25 5.68.41.35.78 1.05.78 2.12v3.15c0 .31.21.68.8.56A11.51 11.51 0 0 0 23.5 12C23.5 5.65 18.35.5 12 .5Z"/>
            </svg>
          </a>
        </header>

        {view === "overview" && <Overview build={build} meta={meta} go={selectView} viewer={viewer} />}
        {view === "status" && <Status build={build} meta={meta} viewer={viewer} />}
        {view === "api" && <Api build={build} />}
        {view === "downloads" && <Downloads viewer={viewer} />}
        {view === "favorites" && <FavoritesView favorites={favorites} go={selectView} />}

        {COLUMNS[view] && view !== "favorites" && (
          <section className="panel table-panel">
            <div className="panel-head">
              <h2>{NAV.find(([id]) => id === view)?.[1]}</h2>
              <span className="muted">{loading ? "loading..." : `${rows.length} rows`}</span>
            </div>
            {q ? (
              <div className="muted">Showing matches for "{query}".</div>
            ) : null}
            <DataTable cols={cols} rows={q ? rowHits : rows} view={view} favorites={favorites} toggleFavorite={toggleFavorite} />
          </section>
        )}
      </main>
    </div>
  );
}

function Overview({ build, meta, go, viewer }) {
  const counts = [
    ["offsets", String(meta?.offsets?.count ?? "-"), "offsets"],
    ["fflags", String(meta?.fflags?.count ?? "-"), "fflags"],
    ["functions", String(meta?.functions?.count ?? "-"), "functions"],
    ["classes", String(meta?.classes?.count ?? "-"), "classes"],
  ];
  return (
    <>
      <section className="hero">
        <div className="eyebrow">Roblox</div>
        <h1>Offsets and FFlags.</h1>
        <p>Latest dump for {build}. Static API, no auth, no build id required.</p>
        <div className="meta"><span className="pill">{build}</span>{meta?.dump_seconds != null && <span className="muted">dumped in {Number(meta.dump_seconds).toFixed(1)}s</span>}</div>
      </section>
      <div className="overview-grid">
        {counts.map(([id, value, label]) => (
          <button key={id} className="stat-card" onClick={() => go(id)}>
            <b>{value}</b><span>{label}</span>
          </button>
        ))}
      </div>
      <section className="panel">
        <div className="panel-head"><h2>Downloads</h2><code>/api/</code></div>
        <div className="file-grid">
          {["offsets.hpp", "offsets.cs", "offsets.json", "fflags.json", "functions.json", "struct.hpp"].map((file) => (
            <a key={file} className="file-card" href={viewer(`api/${file}`)} target="_blank" rel="noreferrer"><span className="file-icon"><Icon /></span>{file}</a>
          ))}
        </div>
      </section>
    </>
  );
}

function Status({ build, meta, viewer }) {
  const rows = [
    ["version", build],
    ["dumped", formatDate(meta?.generated_at)],
    ["dump time", meta?.dump_seconds != null ? `${Number(meta.dump_seconds).toFixed(1)}s` : "unknown"],
    ["offsets", meta?.offsets?.count ?? "unknown"],
    ["fflags", meta?.fflags?.count ?? "unknown"],
    ["functions", meta?.functions?.count ?? "unknown"],
  ];
  return (
    <section className="panel">
      <div className="panel-head"><h2>Status</h2><span className="muted">dump metadata</span></div>
      <div className="kv">{rows.map(([k, v]) => <div key={k}><span>{k}</span><b>{v}</b></div>)}</div>
    </section>
  );
}

function Api({ build }) {
  const [tab, setTab] = useState("curl");
  const base = "https://roblox-dump.vercel.app";
  const endpoints = [
    ["/api/build.json", "version, counts, dump time", "meta"],
    ["/api/offsets.json", "all offsets by class", "offsets"],
    ["/api/offsets_all.json", "flat offsets list", "offsets"],
    ["/api/offsets.hpp", "C++ constants", "C++"],
    ["/api/offsets.cs", "C# constants", "C#"],
    ["/api/fflags_all.json", "all fflags with address", "fflags"],
    ["/api/functions_all.json", "callable function RVAs", "functions"],
    ["/api/version", "plain version string", "text"],
  ];
  const samples = {
    curl: `curl -s ${base}/api/build.json
curl -s ${base}/api/offsets.json | jq '."Humanoid"'
curl -s ${base}/api/version`,
    powershell: `$base = "${base}"
Invoke-RestMethod "$base/api/build.json" | Select-Object build_number
(Invoke-RestMethod "$base/api/offsets.json")."Humanoid"`,
    javascript: `const base = "${base}";
const build = await (await fetch(\`\${base}/api/build.json\`)).json();
const offsets = await (await fetch(\`\${base}/api/offsets.json\`)).json();

console.log(build.build_number, offsets."Humanoid".Health);`,
    cpp: `std::string live = HttpGet(L"roblox-dump.vercel.app", L"/api/version");
std::string cached = ReadFile("offsets.version");
if (live != cached) {
    WriteFile("offsets.json", HttpGet(L"roblox-dump.vercel.app", L"/api/offsets.json"));
    WriteFile("offsets.version", live);
}`,
  };
  return (
    <section className="panel api-page">
      <div className="panel-head"><h2>API</h2><span className="muted">GET / CORS / no auth</span></div>
      <p className="muted">Latest dump automatically. No build id in the URL.</p>
      <div className="api-base"><code>{base}</code><CopyButton text={base} label="copy host" /></div>
      <div className="endpoint-list">
        {endpoints.map(([path, label, type]) => (
          <div className="endpoint" key={path}>
            <span className="method">GET</span>
            <code>{path}</code>
            <span className="endpoint-label">{label}</span>
            <span className="chip">{type}</span>
          </div>
        ))}
      </div>
      <h3>Examples</h3>
      <div className="segmented api-tabs">
        {["curl", "powershell", "javascript", "cpp"].map((id) => (
          <button key={id} className={tab === id ? "active" : ""} onClick={() => setTab(id)}>{id}</button>
        ))}
      </div>
      <CodeBlock>{samples[tab]}</CodeBlock>
      <h3>Pinned version</h3>
      <CodeBlock>{`${base}/version-${build}/offsets.hpp
${base}/version-${build}/offsets.cs
${base}/version-${build}/fflags.json`}</CodeBlock>
    </section>
  );
}

function Downloads({ viewer }) {
  return (
    <section className="panel">
      <div className="panel-head"><h2>Downloads</h2><span className="muted">dump files</span></div>
      {Object.entries(FILE_LINKS).map(([group, files]) => (
        <div className="group" key={group}>
          <h3>{group}</h3>
          <div className="file-grid">
            {files.map((file) => (
              <a key={file} className="file-card" href={viewer(`api/${file}`)} target="_blank" rel="noreferrer"><span className="file-icon"><Icon /></span>{file}</a>
            ))}
          </div>
        </div>
      ))}
    </section>
  );
}

function FavoritesView({ favorites, go }) {
  const meta = {};
  for (const key of favorites) {
    const [view, label] = key.split(":");
    (meta[view] = meta[view] || []).push(label);
  }
  const views = Object.keys(meta);
  return (
    <section className="panel">
      <div className="panel-head"><h2>Favorites</h2><span className="muted">{favorites.length} starred</span></div>
      {!views.length && <div className="muted" style={{ padding: 20 }}>Star rows to pin them here.</div>}
      {views.map((view) => (
        <div className="group" key={view}>
          <h3>{view}</h3>
          <div className="file-grid">
            {meta[view].map((label) => (
              <button key={label} className="file-card" onClick={() => go(view)}><span className="file-icon"><Icon /></span>{label}</button>
            ))}
          </div>
        </div>
      ))}
    </section>
  );
}

function CodeBlock({ children, label = "copy" }) {
  return (
    <div className="code-wrap">
      <CopyButton text={children} label={label} />
      <pre className="code">{children}</pre>
    </div>
  );
}

function DataTable({ cols, rows, view, favorites, toggleFavorite }) {
  return (
    <div className="table-wrap">
      <table>
        <thead><tr>{cols.map(([key, label]) => <th key={key}>{label}</th>)}<th /></tr></thead>
        <tbody>
          {rows.slice(0, 500).map((row, i) => {
            const label = row.name || row.classname || row.index;
            const key = `${view}:${label}`;
            return (
              <tr key={i}>
                {cols.map(([key]) => <td key={key} className={key === "name" ? "mono" : ""}>{String(row[key] ?? "")}</td>)}
                <td className="row-actions">
                  <Star active={favorites?.includes(key)} onClick={() => toggleFavorite?.(view, label)} />
                  <RowCopy row={row} />
                </td>
              </tr>
            );
          })}
          {!rows.length && <tr><td colSpan={cols.length + 1} className="empty">No data.</td></tr>}
        </tbody>
      </table>
      {rows.length > 500 && <div className="muted">Showing first 500 of {rows.length} rows.</div>}
    </div>
  );
}
