/*                       cesium dumper

/*                  https://roblox-dump.vercel.app

/*  Total Offsets   :  590

/*  Dumped At       : 03:54 08/11/2026 (GMT)

/*  Dumped In       : 3,2s

*/
using System;
namespace Offsets
{
    public static class Info
    {
        public const string ClientVersion = "version-f0ea5da9412f4e35";
    }
    public static class AirProperties
    {
        public const long AirDensity = 0x18;
        public const long GlobalWind = 0x3c;
    }
    public static class Alloc
    {
        public const long Malloc = 0x4add350;
    }
    public static class AnimationTrack
    {
        public const long Animation = 0xa0;
        public const long Animator = 0xf8;
        public const long IsPlaying = 0xa10;
        public const long Looped = 0xcd;
        public const long Speed = 0xbc;
        public const long TimePosition = 0xc0;
    }
    public static class Animator
    {
        public const long ActiveAnimations = 0x900;
    }
    public static class Atmosphere
    {
        public const long Color = 0xa0;
        public const long Decay = 0xac;
        public const long Density = 0xb8;
        public const long Glare = 0xbc;
        public const long Haze = 0xc0;
        public const long Offset = 0xc4;
    }
    public static class Attachment
    {
        public const long Position = 0xac;
    }
    public static class BasePart
    {
        public const long CastShadow = 0x120;
        public const long Color3 = 0x11c;
        public const long Locked = 0x121;
        public const long Massless = 0x122;
        public const long Primitive = 0x178;
        public const long Reflectance = 0xf4;
        public const long Shape = 0x1a0;
        public const long Transparency = 0x118;
    }
    public static class Beam
    {
        public const long Attachment0 = 0x148;
        public const long Attachment1 = 0x158;
        public const long Brightness = 0x168;
        public const long CurveSize0 = 0x16c;
        public const long CurveSize1 = 0x170;
        public const long LightEmission = 0x174;
        public const long LightInfluence = 0x178;
        public const long Texture = 0x128;
        public const long TextureLength = 0x184;
        public const long TextureSpeed = 0x18c;
        public const long Width0 = 0x190;
        public const long Width1 = 0x194;
        public const long ZOffset = 0x198;
    }
    public static class BloomEffect
    {
        public const long Enabled = 0x98;
        public const long Intensity = 0xa0;
        public const long Size = 0xa4;
        public const long Threshold = 0xa8;
    }
    public static class BlurEffect
    {
        public const long Enabled = 0x98;
        public const long Size = 0xa0;
    }
    public static class BoundFuncDescriptor
    {
        public const long Function = 0x90;
        public const long Name = 0x8;
    }
    public static class ByteCode
    {
        public const long Pointer = 0x10;
        public const long Size = 0x28;
    }
    public static class CachedItem
    {
        public const long FileMeshData = 0x28;
    }
    public static class Camera
    {
        public const long CameraSubject = 0xb0;
        public const long CameraType = 0x120;
        public const long FieldOfView = 0x128;
        public const long ImagePlaneDepth = 0x2d4;
        public const long Position = 0xe4;
        public const long Rotation = 0xc0;
        public const long Viewport = 0x284;
        public const long ViewportSize = 0x2c4;
    }
    public static class CharacterMesh
    {
        public const long BaseTextureId = 0xb0;
        public const long BodyPart = 0x130;
        public const long MeshId = 0xe0;
        public const long OverlayTextureId = 0x110;
    }
    public static class ClickDetector
    {
        public const long MaxActivationDistance = 0xd0;
        public const long MouseIcon = 0xb0;
    }
    public static class Clothing
    {
        public const long Color3 = 0x108;
        public const long Template = 0xe8;
    }
    public static class ColorCorrectionEffect
    {
        public const long Brightness = 0xac;
        public const long Contrast = 0xb0;
        public const long Enabled = 0x98;
        public const long TintColor = 0xa0;
    }
    public static class ColorGradingEffect
    {
        public const long Enabled = 0x98;
        public const long TonemapperPreset = 0xa0;
    }
    public static class Coroutine
    {
        public const long create = 0x5a60fe0;
        public const long finally = 0x5a640f0;
        public const long isyieldable = 0x5a61920;
        public const long running = 0x5a618b0;
        public const long status = 0x5a5eb20;
        public const long wrap = 0x5a61580;
        public const long yield = 0x5a61850;
    }
    public static class DataModel
    {
        public const long CreatorId = 0x170;
        public const long GameId = 0x178;
        public const long GameLoaded = 0x588;
        public const long JobId = 0x108;
        public const long PlaceId = 0x180;
        public const long PlaceVersion = 0x19c;
        public const long PrimitiveCount = 0x410;
        public const long ScriptContext = 0x440;
        public const long ServerIP = 0x570;
        public const long ToRenderView1 = 0x1b8;
        public const long ToRenderView2 = 0x8;
        public const long ToRenderView3 = 0x28;
        public const long Workspace = 0x148;
    }
    public static class DepthOfFieldEffect
    {
        public const long Enabled = 0x98;
        public const long FarIntensity = 0xa0;
        public const long FocusDistance = 0xa4;
        public const long InFocusRadius = 0xa8;
        public const long NearIntensity = 0xac;
    }
    public static class Descriptor
    {
        public const long Name = 0x8;
    }
    public static class DeviceD3D11Gfx
    {
        public const long ContextObjVTableRva = 0x70e7b98;
        public const long VTableRva = 0x70e79a0;
    }
    public static class DragDetector
    {
        public const long ActivatedCursorIcon = 0x188;
        public const long CursorIcon = 0xb0;
        public const long MaxActivationDistance = 0xd0;
        public const long MaxDragAngle = 0x270;
        public const long MaxDragTranslation = 0x234;
        public const long MaxForce = 0x274;
        public const long MaxTorque = 0x278;
        public const long MinDragAngle = 0x27c;
        public const long MinDragTranslation = 0x240;
        public const long ReferenceInstance = 0x1b8;
        public const long Responsiveness = 0x288;
    }
    public static class FakeDataModel
    {
        public const long Pointer = 0x8eb6960;
        public const long RealDataModel = 0x1f8;
    }
    public static class FastCluster
    {
        public const long ClusterNode = 0x188;
        public const long MeshEntityVTableRva = 0x714cb38;
        public const long VTableRva = 0x714b860;
        public const long VTableRvaSub = 0x714b840;
        public const long VTableRvaSubAlt = 0x714c1b8;
    }
    public static class FastClusterBinding
    {
        public const long VTableRva = 0x714ca18;
    }
    public static class FastClusterEntity
    {
        public const long AlphaByte = 0x14;
        public const long BBoxMaxX = 0xa4;
        public const long BBoxMaxY = 0xa8;
        public const long BBoxMaxZ = 0xac;
        public const long BBoxMinX = 0x98;
        public const long BBoxMinY = 0x9c;
        public const long BBoxMinZ = 0xa0;
        public const long ContextPtr = 0x8;
        public const long DecalMaterialPtr = 0x48;
        public const long MaterialPtr = 0x20;
        public const long PrimitiveIndexArrayPtr = 0x80;
        public const long RenderQueueId = 0x10;
        public const long TechniqueArrayPtr = 0x70;
        public const long VTableRva = 0x714caf0;
    }
    public static class FileMeshData
    {
        public const long AABBMax = 0x18c;
        public const long AABBMin = 0x180;
        public const long Faces = 0x30;
        public const long FacesEnd = 0x38;
        public const long Vertices = 0x0;
        public const long VerticesEnd = 0x8;
    }
    public static class FunctionDescriptor
    {
        public const long Function = 0x80;
    }
    public static class Functions
    {
        public const long Clone = 0x56bc00;
        public const long Destroy = 0x56bda0;
        public const long GlobalCollectGarbage = 0x4320a80;
        public const long GlobalDelay = 0x4321300;
        public const long GlobalElapsedTime = 0x4321a80;
        public const long GlobalGetFenv = 0x4325010;
        public const long GlobalLoadstring = 0x4321b00;
        public const long GlobalPluginManager = 0x43221a0;
        public const long GlobalPrint = 0x4322670;
        public const long GlobalRequire = 0x4322790;
        public const long GlobalSetFenv = 0x4325150;
        public const long GlobalSettings = 0x4322d60;
        public const long GlobalSpawn = 0x43231f0;
        public const long GlobalStats = 0x4323960;
        public const long GlobalTick = 0x4323e80;
        public const long GlobalTime = 0x4323f00;
        public const long GlobalUserSettings = 0x4324100;
        public const long GlobalVersion = 0x4324510;
        public const long GlobalWait = 0x4324600;
        public const long GlobalWarn = 0x4324800;
        public const long Print = 0x4322670;
        public const long PrintIdentity = 0x4322690;
        public const long Shapecast = 0xe13ec0;
    }
    public static class GeometryD3D11
    {
        public const long VTableRva = 0x70e7ec0;
    }
    public static class GuiBase2D
    {
        public const long AbsolutePosition = 0xf4;
        public const long AbsoluteRotation = 0xd0;
        public const long AbsoluteSize = 0x0;
    }
    public static class GuiObject
    {
        public const long BackgroundColor3 = 0x508;
        public const long BackgroundTransparency = 0x514;
        public const long BorderColor3 = 0x514;
        public const long Image = 0x9a8;
        public const long LayoutOrder = 0x544;
        public const long Position = 0x4d8;
        public const long RichText = 0xba0;
        public const long Rotation = 0xd0;
        public const long ScreenGui_Enabled = 0x490;
        public const long Size = 0x4f8;
        public const long Text = 0xe08;
        public const long TextColor3 = 0xeb8;
        public const long Visible = 0x575;
        public const long ZIndex = 0x56c;
    }
    public static class Humanoid
    {
        public const long AutoJumpEnabled = 0x1c8;
        public const long AutoRotate = 0x1c9;
        public const long AutomaticScalingEnabled = 0x1ca;
        public const long BreakJointsOnDeath = 0x1cc;
        public const long CameraOffset = 0x110;
        public const long DisplayDistanceType = 0x174;
        public const long DisplayName = 0xa0;
        public const long EvaluateStateMachine = 0x1cd;
        public const long FloorMaterial = 0x178;
        public const long Health = 0x184;
        public const long HealthDisplayDistance = 0x17c;
        public const long HealthDisplayType = 0x180;
        public const long HipHeight = 0x188;
        public const long HumanoidRootPart = 0x460;
        public const long HumanoidState = 0x8a8;
        public const long HumanoidStateID = 0x20;
        public const long IsWalking = 0xa2e;
        public const long Jump = 0x1d0;
        public const long JumpHeight = 0x194;
        public const long JumpPower = 0x198;
        public const long MaxHealth = 0x19c;
        public const long MaxSlopeAngle = 0x1a0;
        public const long MoveDirection = 0x134;
        public const long MoveToPart = 0x100;
        public const long MoveToPoint = 0x158;
        public const long NameDisplayDistance = 0x1a4;
        public const long NameOcclusion = 0x1a8;
        public const long PlatformStand = 0x1d2;
        public const long PlatformStatePointer = 0xb97e6c1f;
        public const long RequiresNeck = 0x1d3;
        public const long RigType = 0x1b4;
        public const long SeatPart = 0xf0;
        public const long Sit = 0x1d3;
        public const long TargetPoint = 0x140;
        public const long UseJumpPower = 0x1d6;
        public const long WalkTimer = 0x0;
        public const long Walkspeed = 0x1c4;
        public const long WalkspeedCheck = 0x39c;
    }
    public static class Instance
    {
        public const long ChildrenEnd = 0x8;
        public const long ChildrenStart = 0x70;
        public const long ChildrenStride = 0x10;
        public const long ClassBase = 0x1b0;
        public const long ClassDescriptor = 0x18;
        public const long ClassName = 0x8;
        public const long FindFirstAncestorWhichIsA = 0x56c540;
        public const long FindFirstChild = 0x5700f0;
        public const long FindFirstChildOfClass = 0x56c880;
        public const long FindFirstChildWhichIsA = 0x570320;
        public const long FireTouchInterest = 0x9f5920;
        public const long GetAttribute = 0x56d1a0;
        public const long GetChildren = 0x56daa0;
        public const long InstanceIndex = 0x41f78a0;
        public const long Name = 0x0;
        public const long NameContainer = 0x68;
        public const long Parent = 0x60;
        public const long SetParent = 0x1f14530;
        public const long This = 0x8;
    }
    public static class LRUHolder
    {
        public const long MemEnforcedLRUCache = 0x20;
    }
    public static class LRUNode
    {
        public const long AssetID = 0x10;
        public const long CachedItem = 0x38;
        public const long Next = 0x0;
    }
    public static class Lighting
    {
        public const long Ambient = 0xb8;
        public const long Brightness = 0x100;
        public const long ClockTime = 0xb0;
        public const long ColorShift_Bottom = 0xd0;
        public const long ColorShift_Top = 0xc4;
        public const long EnvironmentDiffuseScale = 0x104;
        public const long EnvironmentSpecularScale = 0x108;
        public const long ExposureCompensation = 0x10c;
        public const long FogColor = 0xdc;
        public const long FogEnd = 0x114;
        public const long FogStart = 0x118;
        public const long GeographicLatitude = 0x11c;
        public const long GlobalShadows = 0x12c;
        public const long GradientBottom = 0x178;
        public const long GradientTop = 0x138;
        public const long LightColor = 0x144;
        public const long LightDirection = 0x150;
        public const long MoonPosition = 0x16c;
        public const long OutdoorAmbient = 0xe8;
        public const long Sky = 0x1b0;
        public const long Source = 0x15c;
        public const long SunPosition = 0x160;
    }
    public static class LocalScript
    {
        public const long ByteCode = 0x0;
        public const long GUID = 0xb8;
        public const long Hash = 0x188;
    }
    public static class LuaB
    {
        public const long LuaBAssert = 0x2699220;
        public const long LuaBError = 0x2693a70;
        public const long LuaBGcinfo = 0x26970a0;
        public const long LuaBGetfenv = 0x26954c0;
        public const long LuaBGetmetatable = 0x2694980;
        public const long LuaBNewproxy = 0x2699e00;
        public const long LuaBNext = 0x2698770;
        public const long LuaBPrint = 0x2693620;
        public const long LuaBRawequal = 0x26957a0;
        public const long LuaBRawget = 0x26958b0;
        public const long LuaBRawlen = 0x2697000;
        public const long LuaBRawset = 0x2696340;
        public const long LuaBSelect = 0x26992d0;
        public const long LuaBSetfenv = 0x2695580;
        public const long LuaBSetmetatable = 0x2694b00;
        public const long LuaBTonumber = 0x26936e0;
        public const long LuaBTostring = 0x2699da0;
        public const long LuaBType = 0x26970c0;
        public const long LuaBTypeof = 0x2697c20;
    }
    public static class LuaCoroutine
    {
        public const long Create = 0x5a60fe0;
        public const long Finally = 0x5a640f0;
        public const long Isyieldable = 0x5a61920;
        public const long Running = 0x5a618b0;
        public const long Status = 0x5a5eb20;
        public const long Wrap = 0x5a61580;
        public const long Yield = 0x5a61850;
    }
    public static class LuaState
    {
        public const long Global = 0x50;
    }
    public static class Luau
    {
        public const long Free = 0x265d2f0;
        public const long Step = 0x265d9f0;
        public const long luaB_assert = 0x2699220;
        public const long luaB_error = 0x2693a70;
        public const long luaB_gcinfo = 0x26970a0;
        public const long luaB_getfenv = 0x26954c0;
        public const long luaB_getmetatable = 0x2694980;
        public const long luaB_newproxy = 0x2699e00;
        public const long luaB_next = 0x2698770;
        public const long luaB_print = 0x2693620;
        public const long luaB_rawequal = 0x26957a0;
        public const long luaB_rawget = 0x26958b0;
        public const long luaB_rawlen = 0x2697000;
        public const long luaB_rawset = 0x2696340;
        public const long luaB_select = 0x26992d0;
        public const long luaB_setfenv = 0x2695580;
        public const long luaB_setmetatable = 0x2694b00;
        public const long luaB_tonumber = 0x26936e0;
        public const long luaB_tostring = 0x2699da0;
        public const long luaB_type = 0x26970c0;
        public const long luaB_typeof = 0x2697c20;
        public const long tclone = 0x26af1b0;
    }
    public static class LuauGlobal
    {
        public const long GCthreshold = 0x38;
        public const long dummynode = 0x6b22620;
        public const long gcstate = 0x2;
        public const long gray = 0xa8;
        public const long grayagain = 0x70;
        public const long totalbytes = 0x68;
    }
    public static class MaterialColors
    {
        public const long Asphalt = 0x30;
        public const long Basalt = 0x27;
        public const long Brick = 0xf;
        public const long Cobblestone = 0x33;
        public const long Concrete = 0xc;
        public const long CrackedLava = 0x2d;
        public const long Glacier = 0x1b;
        public const long Grass = 0x6;
        public const long Ground = 0x2a;
        public const long Ice = 0x36;
        public const long LeafyGrass = 0x39;
        public const long Limestone = 0x3f;
        public const long Mud = 0x24;
        public const long Pavement = 0x42;
        public const long Rock = 0x18;
        public const long Salt = 0x3c;
        public const long Sand = 0x12;
        public const long Sandstone = 0x21;
        public const long Slate = 0x9;
        public const long Snow = 0x1e;
        public const long WoodPlanks = 0x15;
    }
    public static class MaterialLayer
    {
        public const long ColorData = 0x26;
        public const long CullMode = 0x10;
        public const long FillModeByte = 0x11;
        public const long Flags2 = 0x20;
        public const long MatFlags = 0x18;
        public const long Param = 0x1c;
        public const long Stride = 0x88;
    }
    public static class MemEnforcedLRUCache
    {
        public const long Head = 0x8;
    }
    public static class MeshContentProvider
    {
        public const long LRUHolder = 0xc0;
    }
    public static class MeshPart
    {
        public const long MeshId = 0x2f8;
        public const long MeshSize = 0x210;
        public const long Texture = 0x328;
    }
    public static class Misc
    {
        public const long Adornee = 0xd8;
        public const long AnimationId = 0xa8;
        public const long EnableLoadModule = 0x855cf68;
        public const long LockViolationScriptCrash = 0x74c1410;
        public const long PrintIdentity = 0x4322690;
        public const long StringLength = 0x10;
        public const long UnregisteredValueGetSet = 0x71de240;
        public const long Value = 0xa0;
    }
    public static class Model
    {
        public const long PrimaryPart = 0x240;
        public const long Scale = 0x12c;
    }
    public static class ModuleScript
    {
        public const long ByteCode = 0x0;
        public const long GUID = 0xb8;
        public const long Hash = 0x348;
        public const long IsCoreScript = 0x0;
    }
    public static class MouseService
    {
        public const long InputObject = 0xe8;
        public const long InputObject2 = 0xf8;
        public const long MousePosition = 0xbc;
        public const long SensitivityPointer = 0x0;
    }
    public static class ParticleEmitter
    {
        public const long Acceleration = 0x1c8;
        public const long Brightness = 0x204;
        public const long Drag = 0x208;
        public const long Lifetime = 0x1dc;
        public const long LightEmission = 0x220;
        public const long LightInfluence = 0x224;
        public const long Rate = 0x230;
        public const long RotSpeed = 0x1e4;
        public const long Rotation = 0x1ec;
        public const long Speed = 0x1f4;
        public const long SpreadAngle = 0x1fc;
        public const long Texture = 0x1a8;
        public const long TimeScale = 0x244;
        public const long VelocityInheritance = 0x248;
        public const long ZOffset = 0x24c;
    }
    public static class Player
    {
        public const long AccountAge = 0x364;
        public const long CameraMode = 0x378;
        public const long DisplayName = 0x120;
        public const long HealthDisplayDistance = 0x3a0;
        public const long LocalPlayer = 0x118;
        public const long LocaleId = 0x100;
        public const long MaxZoomDistance = 0x370;
        public const long MinZoomDistance = 0x374;
        public const long ModelInstance = 0x2a0;
        public const long Mouse = 0x11f0;
        public const long NameDisplayDistance = 0x3b0;
        public const long Team = 0x2e0;
        public const long TeamColor = 0x3b8;
        public const long UserId = 0xb8;
    }
    public static class PlayerConfigurer
    {
        public const long Pointer = 0x0;
    }
    public static class PlayerMouse
    {
        public const long Icon = 0xb0;
        public const long Workspace = 0x138;
    }
    public static class Primitive
    {
        public const long AssemblyAngularVelocity = 0xec;
        public const long AssemblyLinearVelocity = 0xe0;
        public const long Flags = 0x1be;
        public const long Material = 0x24e;
        public const long Owner = 0x218;
        public const long Position = 0xd4;
        public const long Rotation = 0xb0;
        public const long Size = 0x1c4;
        public const long Validate = 0x6;
    }
    public static class PrimitiveFlags
    {
        public const long Anchored = 0x2;
        public const long CanCollide = 0x8;
        public const long CanQuery = 0x20;
        public const long CanTouch = 0x10;
    }
    public static class ProximityPrompt
    {
        public const long ActionText = 0x98;
        public const long Enabled = 0x11e;
        public const long GamepadKeyCode = 0x104;
        public const long HoldDuration = 0x108;
        public const long KeyCode = 0x10c;
        public const long MaxActivationDistance = 0x110;
        public const long ObjectText = 0xb8;
        public const long RequiresLineOfSight = 0x11f;
    }
    public static class RakNet
    {
        public const long ConvertItemEnumToString = 0x491e620;
        public const long RakPeerVirtualTable = 0x70e84b8;
        public const long ReportNetworkError = 0x49b6820;
    }
    public static class Raycast
    {
        public const long RaycastBoundFn = 0x90;
    }
    public static class RbxTransport
    {
        public const long AppRTTI = 0x8413aa0;
        public const long AppVTable = 0x70db908;
        public const long ClientRTTI = 0x8455898;
        public const long ClientSend = 0x3b02970;
        public const long ClientVTable = 0x714d5b0;
        public const long GetConnectionErrorName = 0x53e9070;
    }
    public static class RemoteEvent
    {
        public const long BaseVTableRva = 0x713f188;
        public const long DescBaseVTableRva = 0x713ef20;
        public const long FireServerRva = 0x710c10;
        public const long HookSlot7RemoteEventFn = 0x3587220;
        public const long InstanceVTableRva = 0x70d0b68;
        public const long InvokeClient = 0x3583760;
        public const long InvokeServer = 0x35833e0;
        public const long RemoteFuncVTableRva = 0x71436f0;
        public const long VTableRva = 0x7143958;
    }
    public static class RenderJob
    {
        public const long FakeDataModel = 0x38;
        public const long RealDataModel = 0x1f0;
        public const long RenderView = 0x1e0;
    }
    public static class RenderView
    {
        public const long DeviceD3D11 = 0x0;
        public const long LightingValid = 0x0;
        public const long SkyValid = 0x0;
        public const long VisualEngine = 0x0;
    }
    public static class RunService
    {
        public const long HeartbeatFPS = 0xf2;
        public const long HeartbeatTask = 0x1001;
    }
    public static class Script
    {
        public const long ByteCode = 0x0;
        public const long GUID = 0xb8;
        public const long Hash = 0x188;
    }
    public static class ScriptContext
    {
        public const long GetGlobalState = 0x42b3c80;
        public const long LuaState = 0x200;
        public const long LuaStateAlt = 0x208;
        public const long RequireBypass = 0x0;
        public const long Resume = 0x431b1f0;
        public const long VTable = 0x71b12c8;
        public const long VmWrapper = 0xa8;
        public const long VmWrapper2 = 0x6c8;
        public const long VmWrapperBig = 0x3b8;
        public const long VmWrapperFn = 0x1cf86e0;
    }
    public static class Seat
    {
        public const long Occupant = 0x200;
    }
    public static class ShaderManager
    {
        public const long VTableRva = 0x7148ba0;
    }
    public static class Sky
    {
        public const long DrawCubeCall = 0x38f58e0;
        public const long DrawSkyEnv = 0x38f58e0;
        public const long DrawSkyPixel = 0x38f58e0;
        public const long DrawStars = 0x38f58e0;
        public const long DrawSun = 0x38f58e0;
        public const long MoonAngularSize = 0x22c;
        public const long MoonTextureId = 0xb0;
        public const long SkyboxBk = 0xe0;
        public const long SkyboxDn = 0x110;
        public const long SkyboxFt = 0x140;
        public const long SkyboxLf = 0x170;
        public const long SkyboxOrientation = 0x220;
        public const long SkyboxRt = 0x1a0;
        public const long SkyboxUp = 0x1d0;
        public const long StarCount = 0x230;
        public const long SunAngularSize = 0x224;
        public const long SunTextureId = 0x200;
    }
    public static class Sound
    {
        public const long IsPlaying = 0x130;
        public const long Looped = 0x12d;
        public const long PlaybackSpeed = 0x10c;
        public const long RollOffMaxDistance = 0x110;
        public const long RollOffMinDistance = 0x114;
        public const long SoundGroup = 0xd0;
        public const long SoundId = 0xb0;
        public const long Volume = 0x120;
    }
    public static class SpawnLocation
    {
        public const long AllowTeamChangeOnTouch = 0x3d;
        public const long Enabled = 0x1d9;
        public const long ForcefieldDuration = 0x1d0;
        public const long Neutral = 0x1da;
        public const long TeamColor = 0x1d4;
    }
    public static class SpecialMesh
    {
        public const long MeshId = 0xe0;
        public const long Scale = 0xac;
    }
    public static class StatsItem
    {
        public const long Value = 0x20;
    }
    public static class SunRaysEffect
    {
        public const long Enabled = 0x98;
        public const long Intensity = 0xa0;
        public const long Spread = 0xa4;
    }
    public static class SurfaceAppearance
    {
        public const long AlphaMode = 0x1d8;
        public const long Color = 0x1c0;
        public const long ColorMap = 0xb0;
        public const long EmissiveMaskContent = 0xe0;
        public const long EmissiveStrength = 0x1dc;
        public const long EmissiveTint = 0x1cc;
        public const long MetalnessMap = 0x110;
        public const long NormalMap = 0x140;
        public const long RoughnessMap = 0x170;
    }
    public static class Task
    {
        public const long TaskCancel = 0x435d290;
        public const long TaskDefer = 0x435c440;
        public const long TaskDelay = 0x435ccb0;
        public const long TaskDesynchronize = 0x435b700;
        public const long TaskSpawn = 0x435c920;
        public const long TaskSynchronize = 0x435b180;
        public const long TaskWait = 0x435d1e0;
    }
    public static class TaskScheduler
    {
        public const long JobEnd = 0xa8;
        public const long JobName = 0x10;
        public const long JobStart = 0x1a8;
        public const long MaxFPS = 0xb0;
        public const long Pointer = 0x858f8e8;
        public const long StepFunction = 0x2a3e640;
    }
    public static class Team
    {
        public const long BrickColor = 0xa0;
    }
    public static class TechniqueArray
    {
        public const long BeginOffset = 0x0;
        public const long EndOffset = 0x8;
        public const long EntryStride = 0x88;
    }
    public static class Terrain
    {
        public const long GrassLength = 0x1d8;
        public const long MaterialColors = 0x4a0;
        public const long WaterColor = 0x1c8;
        public const long WaterReflectance = 0x1e0;
        public const long WaterTransparency = 0x1e4;
        public const long WaterWaveSize = 0x1e8;
        public const long WaterWaveSpeed = 0x1ec;
    }
    public static class Textures
    {
        public const long Decal_Texture = 0x1c8;
        public const long Texture_Texture = 0x1c8;
    }
    public static class Tool
    {
        public const long CanBeDropped = 0x4a0;
        public const long Enabled = 0x4a1;
        public const long Grip = 0x494;
        public const long ManualActivationOnly = 0x4a2;
        public const long RequiresHandle = 0x4a3;
        public const long TextureId = 0x348;
        public const long Tooltip = 0x450;
    }
    public static class UnionOperation
    {
        public const long AssetId = 0x2f8;
    }
    public static class UserInputService
    {
        public const long WindowInputState = 0x2b0;
    }
    public static class VehicleSeat
    {
        public const long MaxSpeed = 0x210;
        public const long SteerFloat = 0x214;
        public const long ThrottleFloat = 0x218;
        public const long Torque = 0x21c;
        public const long TurnSpeed = 0x220;
    }
    public static class ViewBase
    {
        public const long VTableRva = 0x7149ad8;
    }
    public static class VisualEngine
    {
        public const long Dimensions = 0xb10;
        public const long FakeDataModel = 0xaf0;
        public const long Pointer = 0x8942e38;
        public const long RenderView = 0xc50;
        public const long ViewMatrix = 0x1b0;
    }
    public static class Weld
    {
        public const long Part0 = 0x100;
        public const long Part1 = 0x110;
    }
    public static class WeldConstraint
    {
        public const long Part0 = 0xa0;
        public const long Part1 = 0xb0;
    }
    public static class WindowInputState
    {
        public const long CapsLock = 0x40;
        public const long CurrentTextBox = 0x48;
    }
    public static class Workspace
    {
        public const long CurrentCamera = 0x4a0;
        public const long DistributedGameTime = 0x4c0;
        public const long ReadOnlyGravity = 0x9d0;
        public const long World = 0x3f8;
    }
    public static class World
    {
        public const long AirProperties = 0x230;
        public const long FallenPartsDestroyHeight = 0x20c;
        public const long Gravity = 0x218;
        public const long Primitives = 0x2a0;
        public const long worldStepsPerSec = 0x868;
    }
    public static class WorldRoot
    {
        public const long FindPartOnRayBoundFnRva = 0x3d5690;
        public const long FindPartOnRayWithIgnoreListBoundFnRva = 0x3d5840;
        public const long FindPartOnRayWithWhitelistBoundFnRva = 0x3d59e0;
        public const long RaycastBoundFn = 0x90;
        public const long RaycastBoundFnRva = 0x3d30b0;
        public const long RaycastDescriptorVtableRva = 0x7041420;
    }
    public static class highlight_manager
    {
        public const long context_active = 0x420;
        public const long context_depth = 0x20;
        public const long context_fill = 0x520;
        public const long context_outline = 0x1520;
        public const long contexts = 0x100;
        public const long fallback_active = 0x538;
        public const long fallback_depth = 0x138;
        public const long fallback_fill = 0x638;
        public const long fallback_outline = 0x1638;
        public const long manager = 0xc18;
    }
}
