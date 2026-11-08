/* fast-port of the IDA dumper (no IDA) - 2026-11-08 03:41
Roblox Version:   0.0.0.0
Total Offsets:    14 */

namespace Task {
    // TaskDefer: only 0 xrefs
    // TaskSpawn: only 0 xrefs
    // TaskDelay: only 0 xrefs
    TaskWait = REBASE(0x435D1E0);
    // TaskDesynchronize: NO STRING
    // TaskCancel: NO STRING
    // TaskSynchronize: NO STRING
}

namespace Instance {
    // InstanceNew: NO STRING
    // InstanceFindFirstAncestor: only 0 xrefs
    // InstanceGetAttribute: NO STRING
    // InstanceFindFirstChild: only 0 xrefs
    // InstanceFindFirstChildOfClass: only 0 xrefs
    // InstanceGetChildren: only 0 xrefs
    InstanceIndex = REBASE(0x41F78A0);
    FireTouchInterest = REBASE(0x9F5920);
    // FireProximityPrompt: only 0 xrefs
}

namespace EngineMisc {
    // ScriptContextResume: NO STRING
}

namespace Raycast {
    // ShapeCast: NO STRING
    // SphereCast: NO STRING
    // _7FastClusterEntity: NO VTBL
}

namespace RbxTransport {
    // _7RbxTransportConnection: NO VTBL
    // _7RtcAppConnection: NO VTBL
    ClientSend = REBASE(0x3B02970);
    // AppReceive: NO STRING
    // AppReceiveMaxBytes: NO STRING
    // FailureFallbackToRbxTransport: NO GLOBAL
    // UseRbxTransportClient: NO GLOBAL
    GetConnectionErrorName = REBASE(0x53E9070);
    // _7RtcAppConnection: NO VTBL
}

namespace RemoteEvent {
    // FireServer: only 0 xrefs
    // FireClient: only 0 xrefs
    // FireAllClients: only 0 xrefs
    // InvokeServer: only 0 xrefs
    // InvokeClient: only 0 xrefs
}

namespace Sky {
    DrawCubeCall = REBASE(0x38F58E0);
    DrawSkyPixel = REBASE(0x38F58E0);
    DrawSkyEnv = REBASE(0x38F58E0);
    DrawSun = REBASE(0x38F58E0);
    DrawStars = REBASE(0x38F7A20);
    // SkyThread: only 0 xrefs
    // CubeTextures: only 0 xrefs
    // SkyGroup: NO STRING
}

namespace RakNet {
    // Receive: NO STRING
    // ReportNetworkError: only 0 xrefs
    // HandleConnectionState: NO STRING
    // ProcessNetworkPacket: only 0 xrefs
    // SendPacketsToSelf: NO STRING
    // RakPeerReceive: NO STRING
    // _7RakPeer: NO VTBL
    ConvertItemEnumToString = REBASE(0x491E620);
    // UpdateNetworkLoop: NO STRING
    // UpdateNetworkLoop: NO STRING
}

namespace Misc {
    // _7RbxTransportConnection: NO VTBL
    EnableLoadModule = REBASE(0x855CF68);
    UnregisteredValueGetSet = REBASE(0x71DE240);
    // LockViolationInstanceCrash: NO GLOBAL
    LockViolationScriptCrash = REBASE(0x74C1410);
}

