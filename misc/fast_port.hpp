/* fast-port of the IDA dumper (no IDA) - 2026-11-11 15:00
Roblox Version:   0.0.0.0
Total Offsets:    28 */

namespace Task {
    // TaskDefer: only 0 xrefs
    // TaskSpawn: only 0 xrefs
    // TaskDelay: only 0 xrefs
    TaskWait = REBASE(0x435CFB0);
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
    InstanceIndex = REBASE(0x41F7AA0);
    FireTouchInterest = REBASE(0x9F5990);
    // FireProximityPrompt: only 0 xrefs
}

namespace ScriptContext {
    VTable = REBASE(0x71B0FE8);
}

namespace EngineMisc {
    // ScriptContextResume: NO STRING
}

namespace Raycast {
    // ShapeCast: NO STRING
    // SphereCast: NO STRING
    FastClusterEntity = REBASE(0x714CAF0);
}

namespace RbxTransport {
    RbxTransportConnection = REBASE(0x714D5B0);
    RtcAppConnection = REBASE(0x70DB908);
    ClientSend = REBASE(0x3B02970);
    // AppReceive: NO STRING
    // AppReceiveMaxBytes: NO STRING
    // FailureFallbackToRbxTransport: NO GLOBAL
    // UseRbxTransportClient: NO GLOBAL
    GetConnectionErrorName = REBASE(0x53E9670);
    RtcAppConnection = REBASE(0x70DB908);
}

namespace RemoteEvent {
    FireServer = REBASE(0x34AB170);
    FireClient = REBASE(0x34AB310);
    FireAllClients = REBASE(0x34AB510);
    InvokeServer = REBASE(0x35831C0);
    InvokeClient = REBASE(0x35834C0);
}

namespace Sky {
    DrawCubeCall = REBASE(0x38F5EE0);
    DrawSkyPixel = REBASE(0x38F5EE0);
    DrawSkyEnv = REBASE(0x38F5EE0);
    DrawSun = REBASE(0x38F5EE0);
    DrawStars = REBASE(0x38F5EE0);
    SkyThread = REBASE(0x38F26A0);
    CubeTextures = REBASE(0x38F2400);
    // SkyGroup: NO STRING
}

namespace RakNet {
    // Receive: NO STRING
    ReportNetworkError = REBASE(0x49B6700);
    // HandleConnectionState: NO STRING
    // ProcessNetworkPacket: only 0 xrefs
    // SendPacketsToSelf: NO STRING
    // RakPeerReceive: NO STRING
    RakPeer = REBASE(0x70E84B8);
    ConvertItemEnumToString = REBASE(0x491EC20);
    // UpdateNetworkLoop: NO STRING
    // UpdateNetworkLoop: NO STRING
}

namespace Misc {
    RbxTransportConnection = REBASE(0x714D5B0);
    // EnableLoadModule: NO GLOBAL
    UnregisteredValueGetSet = REBASE(0x71DE240);
    // LockViolationInstanceCrash: NO GLOBAL
    // LockViolationScriptCrash: NO GLOBAL
    PrintIdentity = REBASE(0x4322690);
}

