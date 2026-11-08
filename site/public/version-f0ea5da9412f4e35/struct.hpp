/*                       cesium dumper

/*                  https://roblox-dump.vercel.app

/*  Total Offsets   :  590

/*  Dumped At       : 04:36 08/11/2026 (GMT)

/*  Dumped In       : 0,0s

*/
#pragma once
#include <cstdint>

/* ClientVersion: "version-f0ea5da9412f4e35" */

struct AirProperties {
    uintptr_t AirDensity; // 0x18
    uintptr_t GlobalWind; // 0x3C
};

struct Alloc {
    uintptr_t Malloc; // 0x4ADD350
};

struct AnimationTrack {
    uintptr_t Animation; // 0xA0
    uintptr_t Speed; // 0xBC
    uintptr_t TimePosition; // 0xC0
    uintptr_t Looped; // 0xCD
    uintptr_t Animator; // 0xF8
    uintptr_t IsPlaying; // 0xA10
};

struct Animator {
    uintptr_t ActiveAnimations; // 0x900
};

struct Atmosphere {
    uintptr_t Color; // 0xA0
    uintptr_t Decay; // 0xAC
    uintptr_t Density; // 0xB8
    uintptr_t Glare; // 0xBC
    uintptr_t Haze; // 0xC0
    uintptr_t Offset; // 0xC4
};

struct Attachment {
    uintptr_t Position; // 0xAC
};

struct BasePart {
    uintptr_t Reflectance; // 0xF4
    uintptr_t Transparency; // 0x118
    uintptr_t Color3; // 0x11C
    uintptr_t CastShadow; // 0x120
    uintptr_t Locked; // 0x121
    uintptr_t Massless; // 0x122
    uintptr_t Primitive; // 0x178
    uintptr_t Shape; // 0x1A0
};

struct Beam {
    uintptr_t Texture; // 0x128
    uintptr_t Attachment0; // 0x148
    uintptr_t Attachment1; // 0x158
    uintptr_t Brightness; // 0x168
    uintptr_t CurveSize0; // 0x16C
    uintptr_t CurveSize1; // 0x170
    uintptr_t LightEmission; // 0x174
    uintptr_t LightInfluence; // 0x178
    uintptr_t TextureLength; // 0x184
    uintptr_t TextureSpeed; // 0x18C
    uintptr_t Width0; // 0x190
    uintptr_t Width1; // 0x194
    uintptr_t ZOffset; // 0x198
};

struct BloomEffect {
    uintptr_t Enabled; // 0x98
    uintptr_t Intensity; // 0xA0
    uintptr_t Size; // 0xA4
    uintptr_t Threshold; // 0xA8
};

struct BlurEffect {
    uintptr_t Enabled; // 0x98
    uintptr_t Size; // 0xA0
};

struct BoundFuncDescriptor {
    uintptr_t Name; // 0x8
    uintptr_t Function; // 0x90
};

struct ByteCode {
    uintptr_t Pointer; // 0x10
    uintptr_t Size; // 0x28
};

struct CachedItem {
    uintptr_t FileMeshData; // 0x28
};

struct Camera {
    uintptr_t CameraSubject; // 0xB0
    uintptr_t Rotation; // 0xC0
    uintptr_t Position; // 0xE4
    uintptr_t CameraType; // 0x120
    uintptr_t FieldOfView; // 0x128
    uintptr_t Viewport; // 0x284
    uintptr_t ViewportSize; // 0x2C4
    uintptr_t ImagePlaneDepth; // 0x2D4
};

struct CharacterMesh {
    uintptr_t BaseTextureId; // 0xB0
    uintptr_t MeshId; // 0xE0
    uintptr_t OverlayTextureId; // 0x110
    uintptr_t BodyPart; // 0x130
};

struct ClickDetector {
    uintptr_t MouseIcon; // 0xB0
    uintptr_t MaxActivationDistance; // 0xD0
};

struct Clothing {
    uintptr_t Template; // 0xE8
    uintptr_t Color3; // 0x108
};

struct ColorCorrectionEffect {
    uintptr_t Enabled; // 0x98
    uintptr_t TintColor; // 0xA0
    uintptr_t Brightness; // 0xAC
    uintptr_t Contrast; // 0xB0
};

struct ColorGradingEffect {
    uintptr_t Enabled; // 0x98
    uintptr_t TonemapperPreset; // 0xA0
};

struct Coroutine {
    uintptr_t status; // 0x5A5EB20
    uintptr_t create; // 0x5A60FE0
    uintptr_t wrap; // 0x5A61580
    uintptr_t yield; // 0x5A61850
    uintptr_t running; // 0x5A618B0
    uintptr_t isyieldable; // 0x5A61920
    uintptr_t finally; // 0x5A640F0
};

struct DataModel {
    uintptr_t ToRenderView2; // 0x8
    uintptr_t ToRenderView3; // 0x28
    uintptr_t JobId; // 0x108
    uintptr_t Workspace; // 0x148
    uintptr_t CreatorId; // 0x170
    uintptr_t GameId; // 0x178
    uintptr_t PlaceId; // 0x180
    uintptr_t PlaceVersion; // 0x19C
    uintptr_t ToRenderView1; // 0x1B8
    uintptr_t PrimitiveCount; // 0x410
    uintptr_t ScriptContext; // 0x440
    uintptr_t ServerIP; // 0x570
    uintptr_t GameLoaded; // 0x588
};

struct DepthOfFieldEffect {
    uintptr_t Enabled; // 0x98
    uintptr_t FarIntensity; // 0xA0
    uintptr_t FocusDistance; // 0xA4
    uintptr_t InFocusRadius; // 0xA8
    uintptr_t NearIntensity; // 0xAC
};

struct Descriptor {
    uintptr_t Name; // 0x8
};

struct DeviceD3D11Gfx {
    uintptr_t VTableRva; // 0x70E79A0
    uintptr_t ContextObjVTableRva; // 0x70E7B98
};

struct DragDetector {
    uintptr_t CursorIcon; // 0xB0
    uintptr_t MaxActivationDistance; // 0xD0
    uintptr_t ActivatedCursorIcon; // 0x188
    uintptr_t ReferenceInstance; // 0x1B8
    uintptr_t MaxDragTranslation; // 0x234
    uintptr_t MinDragTranslation; // 0x240
    uintptr_t MaxDragAngle; // 0x270
    uintptr_t MaxForce; // 0x274
    uintptr_t MaxTorque; // 0x278
    uintptr_t MinDragAngle; // 0x27C
    uintptr_t Responsiveness; // 0x288
};

struct FakeDataModel {
    uintptr_t RealDataModel; // 0x1F8
    uintptr_t Pointer; // 0x8EB6960
};

struct FastCluster {
    uintptr_t ClusterNode; // 0x188
    uintptr_t VTableRvaSub; // 0x714B840
    uintptr_t VTableRva; // 0x714B860
    uintptr_t VTableRvaSubAlt; // 0x714C1B8
    uintptr_t MeshEntityVTableRva; // 0x714CB38
};

struct FastClusterBinding {
    uintptr_t VTableRva; // 0x714CA18
};

struct FastClusterEntity {
    uintptr_t ContextPtr; // 0x8
    uintptr_t RenderQueueId; // 0x10
    uintptr_t AlphaByte; // 0x14
    uintptr_t MaterialPtr; // 0x20
    uintptr_t DecalMaterialPtr; // 0x48
    uintptr_t TechniqueArrayPtr; // 0x70
    uintptr_t PrimitiveIndexArrayPtr; // 0x80
    uintptr_t BBoxMinX; // 0x98
    uintptr_t BBoxMinY; // 0x9C
    uintptr_t BBoxMinZ; // 0xA0
    uintptr_t BBoxMaxX; // 0xA4
    uintptr_t BBoxMaxY; // 0xA8
    uintptr_t BBoxMaxZ; // 0xAC
    uintptr_t VTableRva; // 0x714CAF0
};

struct FileMeshData {
    uintptr_t Vertices; // 0x0
    uintptr_t VerticesEnd; // 0x8
    uintptr_t Faces; // 0x30
    uintptr_t FacesEnd; // 0x38
    uintptr_t AABBMin; // 0x180
    uintptr_t AABBMax; // 0x18C
};

struct FunctionDescriptor {
    uintptr_t Function; // 0x80
};

struct Functions {
    uintptr_t Clone; // 0x56BC00
    uintptr_t Destroy; // 0x56BDA0
    uintptr_t Shapecast; // 0xE13EC0
    uintptr_t GlobalCollectGarbage; // 0x4320A80
    uintptr_t GlobalDelay; // 0x4321300
    uintptr_t GlobalElapsedTime; // 0x4321A80
    uintptr_t GlobalLoadstring; // 0x4321B00
    uintptr_t GlobalPluginManager; // 0x43221A0
    uintptr_t GlobalPrint; // 0x4322670
    uintptr_t Print; // 0x4322670
    uintptr_t PrintIdentity; // 0x4322690
    uintptr_t GlobalRequire; // 0x4322790
    uintptr_t GlobalSettings; // 0x4322D60
    uintptr_t GlobalSpawn; // 0x43231F0
    uintptr_t GlobalStats; // 0x4323960
    uintptr_t GlobalTick; // 0x4323E80
    uintptr_t GlobalTime; // 0x4323F00
    uintptr_t GlobalUserSettings; // 0x4324100
    uintptr_t GlobalVersion; // 0x4324510
    uintptr_t GlobalWait; // 0x4324600
    uintptr_t GlobalWarn; // 0x4324800
    uintptr_t GlobalGetFenv; // 0x4325010
    uintptr_t GlobalSetFenv; // 0x4325150
};

struct GeometryD3D11 {
    uintptr_t VTableRva; // 0x70E7EC0
};

struct GuiBase2D {
    uintptr_t AbsoluteSize; // 0x0
    uintptr_t AbsoluteRotation; // 0xD0
    uintptr_t AbsolutePosition; // 0xF4
};

struct GuiObject {
    uintptr_t Rotation; // 0xD0
    uintptr_t ScreenGui_Enabled; // 0x490
    uintptr_t Position; // 0x4D8
    uintptr_t Size; // 0x4F8
    uintptr_t BackgroundColor3; // 0x508
    uintptr_t BackgroundTransparency; // 0x514
    uintptr_t BorderColor3; // 0x514
    uintptr_t LayoutOrder; // 0x544
    uintptr_t ZIndex; // 0x56C
    uintptr_t Visible; // 0x575
    uintptr_t Image; // 0x9A8
    uintptr_t RichText; // 0xBA0
    uintptr_t Text; // 0xE08
    uintptr_t TextColor3; // 0xEB8
};

struct Humanoid {
    uintptr_t WalkTimer; // 0x0
    uintptr_t HumanoidStateID; // 0x20
    uintptr_t DisplayName; // 0xA0
    uintptr_t SeatPart; // 0xF0
    uintptr_t MoveToPart; // 0x100
    uintptr_t CameraOffset; // 0x110
    uintptr_t MoveDirection; // 0x134
    uintptr_t TargetPoint; // 0x140
    uintptr_t MoveToPoint; // 0x158
    uintptr_t DisplayDistanceType; // 0x174
    uintptr_t FloorMaterial; // 0x178
    uintptr_t HealthDisplayDistance; // 0x17C
    uintptr_t HealthDisplayType; // 0x180
    uintptr_t Health; // 0x184
    uintptr_t HipHeight; // 0x188
    uintptr_t JumpHeight; // 0x194
    uintptr_t JumpPower; // 0x198
    uintptr_t MaxHealth; // 0x19C
    uintptr_t MaxSlopeAngle; // 0x1A0
    uintptr_t NameDisplayDistance; // 0x1A4
    uintptr_t NameOcclusion; // 0x1A8
    uintptr_t RigType; // 0x1B4
    uintptr_t Walkspeed; // 0x1C4
    uintptr_t AutoJumpEnabled; // 0x1C8
    uintptr_t AutoRotate; // 0x1C9
    uintptr_t AutomaticScalingEnabled; // 0x1CA
    uintptr_t BreakJointsOnDeath; // 0x1CC
    uintptr_t EvaluateStateMachine; // 0x1CD
    uintptr_t Jump; // 0x1D0
    uintptr_t PlatformStand; // 0x1D2
    uintptr_t RequiresNeck; // 0x1D3
    uintptr_t Sit; // 0x1D3
    uintptr_t UseJumpPower; // 0x1D6
    uintptr_t WalkspeedCheck; // 0x39C
    uintptr_t HumanoidRootPart; // 0x460
    uintptr_t HumanoidState; // 0x8A8
    uintptr_t IsWalking; // 0xA2E
    uintptr_t PlatformStatePointer; // 0xB97E6C1F
};

struct Instance {
    uintptr_t Name; // 0x0
    uintptr_t ChildrenEnd; // 0x8
    uintptr_t ClassName; // 0x8
    uintptr_t This; // 0x8
    uintptr_t ChildrenStride; // 0x10
    uintptr_t ClassDescriptor; // 0x18
    uintptr_t Parent; // 0x60
    uintptr_t NameContainer; // 0x68
    uintptr_t ChildrenStart; // 0x70
    uintptr_t ClassBase; // 0x1B0
    uintptr_t FindFirstAncestorWhichIsA; // 0x56C540
    uintptr_t FindFirstChildOfClass; // 0x56C880
    uintptr_t GetAttribute; // 0x56D1A0
    uintptr_t GetChildren; // 0x56DAA0
    uintptr_t FindFirstChild; // 0x5700F0
    uintptr_t FindFirstChildWhichIsA; // 0x570320
    uintptr_t FireTouchInterest; // 0x9F5920
    uintptr_t SetParent; // 0x1F14530
    uintptr_t InstanceIndex; // 0x41F78A0
};

struct LRUHolder {
    uintptr_t MemEnforcedLRUCache; // 0x20
};

struct LRUNode {
    uintptr_t Next; // 0x0
    uintptr_t AssetID; // 0x10
    uintptr_t CachedItem; // 0x38
};

struct Lighting {
    uintptr_t ClockTime; // 0xB0
    uintptr_t Ambient; // 0xB8
    uintptr_t ColorShift_Top; // 0xC4
    uintptr_t ColorShift_Bottom; // 0xD0
    uintptr_t FogColor; // 0xDC
    uintptr_t OutdoorAmbient; // 0xE8
    uintptr_t Brightness; // 0x100
    uintptr_t EnvironmentDiffuseScale; // 0x104
    uintptr_t EnvironmentSpecularScale; // 0x108
    uintptr_t ExposureCompensation; // 0x10C
    uintptr_t FogEnd; // 0x114
    uintptr_t FogStart; // 0x118
    uintptr_t GeographicLatitude; // 0x11C
    uintptr_t GlobalShadows; // 0x12C
    uintptr_t GradientTop; // 0x138
    uintptr_t LightColor; // 0x144
    uintptr_t LightDirection; // 0x150
    uintptr_t Source; // 0x15C
    uintptr_t SunPosition; // 0x160
    uintptr_t MoonPosition; // 0x16C
    uintptr_t GradientBottom; // 0x178
    uintptr_t Sky; // 0x1B0
};

struct LocalScript {
    uintptr_t GUID; // 0xB8
    uintptr_t Hash; // 0x188
    uintptr_t ByteCode; // 0x2E0
};

struct LuaB {
    uintptr_t LuaBPrint; // 0x2693620
    uintptr_t LuaBTonumber; // 0x26936E0
    uintptr_t LuaBError; // 0x2693A70
    uintptr_t LuaBGetmetatable; // 0x2694980
    uintptr_t LuaBSetmetatable; // 0x2694B00
    uintptr_t LuaBGetfenv; // 0x26954C0
    uintptr_t LuaBSetfenv; // 0x2695580
    uintptr_t LuaBRawequal; // 0x26957A0
    uintptr_t LuaBRawget; // 0x26958B0
    uintptr_t LuaBRawset; // 0x2696340
    uintptr_t LuaBRawlen; // 0x2697000
    uintptr_t LuaBGcinfo; // 0x26970A0
    uintptr_t LuaBType; // 0x26970C0
    uintptr_t LuaBTypeof; // 0x2697C20
    uintptr_t LuaBNext; // 0x2698770
    uintptr_t LuaBAssert; // 0x2699220
    uintptr_t LuaBSelect; // 0x26992D0
    uintptr_t LuaBTostring; // 0x2699DA0
    uintptr_t LuaBNewproxy; // 0x2699E00
};

struct LuaCoroutine {
    uintptr_t Status; // 0x5A5EB20
    uintptr_t Create; // 0x5A60FE0
    uintptr_t Wrap; // 0x5A61580
    uintptr_t Yield; // 0x5A61850
    uintptr_t Running; // 0x5A618B0
    uintptr_t Isyieldable; // 0x5A61920
    uintptr_t Finally; // 0x5A640F0
};

struct LuaState {
    uintptr_t Global; // 0x50
};

struct Luau {
    uintptr_t Free; // 0x265D2F0
    uintptr_t Step; // 0x265D9F0
    uintptr_t luaB_print; // 0x2693620
    uintptr_t luaB_tonumber; // 0x26936E0
    uintptr_t luaB_error; // 0x2693A70
    uintptr_t luaB_getmetatable; // 0x2694980
    uintptr_t luaB_setmetatable; // 0x2694B00
    uintptr_t luaB_getfenv; // 0x26954C0
    uintptr_t luaB_setfenv; // 0x2695580
    uintptr_t luaB_rawequal; // 0x26957A0
    uintptr_t luaB_rawget; // 0x26958B0
    uintptr_t luaB_rawset; // 0x2696340
    uintptr_t luaB_rawlen; // 0x2697000
    uintptr_t luaB_gcinfo; // 0x26970A0
    uintptr_t luaB_type; // 0x26970C0
    uintptr_t luaB_typeof; // 0x2697C20
    uintptr_t luaB_next; // 0x2698770
    uintptr_t luaB_assert; // 0x2699220
    uintptr_t luaB_select; // 0x26992D0
    uintptr_t luaB_tostring; // 0x2699DA0
    uintptr_t luaB_newproxy; // 0x2699E00
    uintptr_t tclone; // 0x26AF1B0
};

struct LuauGlobal {
    uintptr_t gcstate; // 0x2
    uintptr_t GCthreshold; // 0x38
    uintptr_t totalbytes; // 0x68
    uintptr_t grayagain; // 0x70
    uintptr_t gray; // 0xA8
    uintptr_t dummynode; // 0x6B22620
};

struct MaterialColors {
    uintptr_t Grass; // 0x6
    uintptr_t Slate; // 0x9
    uintptr_t Concrete; // 0xC
    uintptr_t Brick; // 0xF
    uintptr_t Sand; // 0x12
    uintptr_t WoodPlanks; // 0x15
    uintptr_t Rock; // 0x18
    uintptr_t Glacier; // 0x1B
    uintptr_t Snow; // 0x1E
    uintptr_t Sandstone; // 0x21
    uintptr_t Mud; // 0x24
    uintptr_t Basalt; // 0x27
    uintptr_t Ground; // 0x2A
    uintptr_t CrackedLava; // 0x2D
    uintptr_t Asphalt; // 0x30
    uintptr_t Cobblestone; // 0x33
    uintptr_t Ice; // 0x36
    uintptr_t LeafyGrass; // 0x39
    uintptr_t Salt; // 0x3C
    uintptr_t Limestone; // 0x3F
    uintptr_t Pavement; // 0x42
};

struct MaterialLayer {
    uintptr_t CullMode; // 0x10
    uintptr_t FillModeByte; // 0x11
    uintptr_t MatFlags; // 0x18
    uintptr_t Param; // 0x1C
    uintptr_t Flags2; // 0x20
    uintptr_t ColorData; // 0x26
    uintptr_t Stride; // 0x88
};

struct MemEnforcedLRUCache {
    uintptr_t Head; // 0x8
};

struct MeshContentProvider {
    uintptr_t LRUHolder; // 0xC0
};

struct MeshPart {
    uintptr_t MeshSize; // 0x210
    uintptr_t MeshId; // 0x2F8
    uintptr_t Texture; // 0x328
};

struct Misc {
    uintptr_t StringLength; // 0x10
    uintptr_t Value; // 0xA0
    uintptr_t AnimationId; // 0xA8
    uintptr_t Adornee; // 0xD8
    uintptr_t PrintIdentity; // 0x4322690
    uintptr_t UnregisteredValueGetSet; // 0x71DE240
    uintptr_t LockViolationScriptCrash; // 0x74C1410
    uintptr_t EnableLoadModule; // 0x855CF68
};

struct Model {
    uintptr_t Scale; // 0x12C
    uintptr_t PrimaryPart; // 0x240
};

struct ModuleScript {
    uintptr_t IsCoreScript; // 0x0
    uintptr_t GUID; // 0xB8
    uintptr_t ByteCode; // 0x2E0
    uintptr_t Hash; // 0x348
};

struct MouseService {
    uintptr_t SensitivityPointer; // 0x0
    uintptr_t MousePosition; // 0xBC
    uintptr_t InputObject; // 0xE8
    uintptr_t InputObject2; // 0xF8
};

struct ParticleEmitter {
    uintptr_t Texture; // 0x1A8
    uintptr_t Acceleration; // 0x1C8
    uintptr_t Lifetime; // 0x1DC
    uintptr_t RotSpeed; // 0x1E4
    uintptr_t Rotation; // 0x1EC
    uintptr_t Speed; // 0x1F4
    uintptr_t SpreadAngle; // 0x1FC
    uintptr_t Brightness; // 0x204
    uintptr_t Drag; // 0x208
    uintptr_t LightEmission; // 0x220
    uintptr_t LightInfluence; // 0x224
    uintptr_t Rate; // 0x230
    uintptr_t TimeScale; // 0x244
    uintptr_t VelocityInheritance; // 0x248
    uintptr_t ZOffset; // 0x24C
};

struct Player {
    uintptr_t UserId; // 0xB8
    uintptr_t LocaleId; // 0x100
    uintptr_t LocalPlayer; // 0x118
    uintptr_t DisplayName; // 0x120
    uintptr_t ModelInstance; // 0x2A0
    uintptr_t Team; // 0x2E0
    uintptr_t AccountAge; // 0x364
    uintptr_t MaxZoomDistance; // 0x370
    uintptr_t MinZoomDistance; // 0x374
    uintptr_t CameraMode; // 0x378
    uintptr_t HealthDisplayDistance; // 0x3A0
    uintptr_t NameDisplayDistance; // 0x3B0
    uintptr_t TeamColor; // 0x3B8
    uintptr_t Mouse; // 0x11F0
};

struct PlayerConfigurer {
    uintptr_t Pointer; // 0x0
};

struct PlayerMouse {
    uintptr_t Icon; // 0xB0
    uintptr_t Workspace; // 0x138
};

struct Primitive {
    uintptr_t Validate; // 0x6
    uintptr_t Rotation; // 0xB0
    uintptr_t Position; // 0xD4
    uintptr_t AssemblyLinearVelocity; // 0xE0
    uintptr_t AssemblyAngularVelocity; // 0xEC
    uintptr_t Flags; // 0x1BE
    uintptr_t Size; // 0x1C4
    uintptr_t Owner; // 0x218
    uintptr_t Material; // 0x24E
};

struct PrimitiveFlags {
    uintptr_t Anchored; // 0x2
    uintptr_t CanCollide; // 0x8
    uintptr_t CanTouch; // 0x10
    uintptr_t CanQuery; // 0x20
};

struct ProximityPrompt {
    uintptr_t ActionText; // 0x98
    uintptr_t ObjectText; // 0xB8
    uintptr_t GamepadKeyCode; // 0x104
    uintptr_t HoldDuration; // 0x108
    uintptr_t KeyCode; // 0x10C
    uintptr_t MaxActivationDistance; // 0x110
    uintptr_t Enabled; // 0x11E
    uintptr_t RequiresLineOfSight; // 0x11F
};

struct RakNet {
    uintptr_t ConvertItemEnumToString; // 0x491E620
    uintptr_t ReportNetworkError; // 0x49B6820
    uintptr_t RakPeerVirtualTable; // 0x70E84B8
};

struct Raycast {
    uintptr_t RaycastBoundFn; // 0x90
};

struct RbxTransport {
    uintptr_t ClientSend; // 0x3B02970
    uintptr_t GetConnectionErrorName; // 0x53E9070
    uintptr_t AppVTable; // 0x70DB908
    uintptr_t ClientVTable; // 0x714D5B0
    uintptr_t AppRTTI; // 0x8413AA0
    uintptr_t ClientRTTI; // 0x8455898
};

struct RemoteEvent {
    uintptr_t FireServerRva; // 0x710C10
    uintptr_t InvokeServer; // 0x35833E0
    uintptr_t InvokeClient; // 0x3583760
    uintptr_t HookSlot7RemoteEventFn; // 0x3587220
    uintptr_t InstanceVTableRva; // 0x70D0B68
    uintptr_t DescBaseVTableRva; // 0x713EF20
    uintptr_t BaseVTableRva; // 0x713F188
    uintptr_t RemoteFuncVTableRva; // 0x71436F0
    uintptr_t VTableRva; // 0x7143958
};

struct RenderJob {
    uintptr_t FakeDataModel; // 0x38
    uintptr_t RenderView; // 0x1E0
    uintptr_t RealDataModel; // 0x1F0
};

struct RenderView {
    uintptr_t DeviceD3D11; // 0x0
    uintptr_t LightingValid; // 0x0
    uintptr_t SkyValid; // 0x0
    uintptr_t VisualEngine; // 0x0
};

struct RunService {
    uintptr_t HeartbeatFPS; // 0xF2
    uintptr_t HeartbeatTask; // 0x1001
};

struct Script {
    uintptr_t ByteCode; // 0x0
    uintptr_t GUID; // 0xB8
    uintptr_t Hash; // 0x188
};

struct ScriptContext {
    uintptr_t RequireBypass; // 0x0
    uintptr_t VmWrapper; // 0xA8
    uintptr_t LuaState; // 0x200
    uintptr_t LuaStateAlt; // 0x208
    uintptr_t VmWrapperBig; // 0x3B8
    uintptr_t VmWrapper2; // 0x6C8
    uintptr_t VmWrapperFn; // 0x1CF86E0
    uintptr_t GetGlobalState; // 0x42B3C80
    uintptr_t Resume; // 0x431B1F0
    uintptr_t VTable; // 0x71B12C8
};

struct Seat {
    uintptr_t Occupant; // 0x200
};

struct ShaderManager {
    uintptr_t VTableRva; // 0x7148BA0
};

struct Sky {
    uintptr_t MoonTextureId; // 0xB0
    uintptr_t SkyboxBk; // 0xE0
    uintptr_t SkyboxDn; // 0x110
    uintptr_t SkyboxFt; // 0x140
    uintptr_t SkyboxLf; // 0x170
    uintptr_t SkyboxRt; // 0x1A0
    uintptr_t SkyboxUp; // 0x1D0
    uintptr_t SunTextureId; // 0x200
    uintptr_t SkyboxOrientation; // 0x220
    uintptr_t SunAngularSize; // 0x224
    uintptr_t MoonAngularSize; // 0x22C
    uintptr_t StarCount; // 0x230
    uintptr_t DrawCubeCall; // 0x38F58E0
    uintptr_t DrawSkyEnv; // 0x38F58E0
    uintptr_t DrawSkyPixel; // 0x38F58E0
    uintptr_t DrawStars; // 0x38F58E0
    uintptr_t DrawSun; // 0x38F58E0
};

struct Sound {
    uintptr_t SoundId; // 0xB0
    uintptr_t SoundGroup; // 0xD0
    uintptr_t PlaybackSpeed; // 0x10C
    uintptr_t RollOffMaxDistance; // 0x110
    uintptr_t RollOffMinDistance; // 0x114
    uintptr_t Volume; // 0x120
    uintptr_t Looped; // 0x12D
    uintptr_t IsPlaying; // 0x130
};

struct SpawnLocation {
    uintptr_t AllowTeamChangeOnTouch; // 0x3D
    uintptr_t ForcefieldDuration; // 0x1D0
    uintptr_t TeamColor; // 0x1D4
    uintptr_t Enabled; // 0x1D9
    uintptr_t Neutral; // 0x1DA
};

struct SpecialMesh {
    uintptr_t Scale; // 0xAC
    uintptr_t MeshId; // 0xE0
};

struct StatsItem {
    uintptr_t Value; // 0x20
};

struct SunRaysEffect {
    uintptr_t Enabled; // 0x98
    uintptr_t Intensity; // 0xA0
    uintptr_t Spread; // 0xA4
};

struct SurfaceAppearance {
    uintptr_t ColorMap; // 0xB0
    uintptr_t EmissiveMaskContent; // 0xE0
    uintptr_t MetalnessMap; // 0x110
    uintptr_t NormalMap; // 0x140
    uintptr_t RoughnessMap; // 0x170
    uintptr_t Color; // 0x1C0
    uintptr_t EmissiveTint; // 0x1CC
    uintptr_t AlphaMode; // 0x1D8
    uintptr_t EmissiveStrength; // 0x1DC
};

struct Task {
    uintptr_t TaskSynchronize; // 0x435B180
    uintptr_t TaskDesynchronize; // 0x435B700
    uintptr_t TaskDefer; // 0x435C440
    uintptr_t TaskSpawn; // 0x435C920
    uintptr_t TaskDelay; // 0x435CCB0
    uintptr_t TaskWait; // 0x435D1E0
    uintptr_t TaskCancel; // 0x435D290
};

struct TaskScheduler {
    uintptr_t JobName; // 0x10
    uintptr_t JobEnd; // 0xA8
    uintptr_t MaxFPS; // 0xB0
    uintptr_t JobStart; // 0x1A8
    uintptr_t StepFunction; // 0x2A3E640
    uintptr_t Pointer; // 0x858F8E8
};

struct Team {
    uintptr_t BrickColor; // 0xA0
};

struct TechniqueArray {
    uintptr_t BeginOffset; // 0x0
    uintptr_t EndOffset; // 0x8
    uintptr_t EntryStride; // 0x88
};

struct Terrain {
    uintptr_t WaterColor; // 0x1C8
    uintptr_t GrassLength; // 0x1D8
    uintptr_t WaterReflectance; // 0x1E0
    uintptr_t WaterTransparency; // 0x1E4
    uintptr_t WaterWaveSize; // 0x1E8
    uintptr_t WaterWaveSpeed; // 0x1EC
    uintptr_t MaterialColors; // 0x4A0
};

struct Textures {
    uintptr_t Decal_Texture; // 0x1C8
    uintptr_t Texture_Texture; // 0x1C8
};

struct Tool {
    uintptr_t TextureId; // 0x348
    uintptr_t Tooltip; // 0x450
    uintptr_t Grip; // 0x494
    uintptr_t CanBeDropped; // 0x4A0
    uintptr_t Enabled; // 0x4A1
    uintptr_t ManualActivationOnly; // 0x4A2
    uintptr_t RequiresHandle; // 0x4A3
};

struct UnionOperation {
    uintptr_t AssetId; // 0x2F8
};

struct UserInputService {
    uintptr_t WindowInputState; // 0x2B0
};

struct VehicleSeat {
    uintptr_t MaxSpeed; // 0x210
    uintptr_t SteerFloat; // 0x214
    uintptr_t ThrottleFloat; // 0x218
    uintptr_t Torque; // 0x21C
    uintptr_t TurnSpeed; // 0x220
};

struct ViewBase {
    uintptr_t VTableRva; // 0x7149AD8
};

struct VisualEngine {
    uintptr_t ViewMatrix; // 0x1B0
    uintptr_t FakeDataModel; // 0xAF0
    uintptr_t Dimensions; // 0xB10
    uintptr_t RenderView; // 0xC50
    uintptr_t Pointer; // 0x8942E38
};

struct Weld {
    uintptr_t Part0; // 0x100
    uintptr_t Part1; // 0x110
};

struct WeldConstraint {
    uintptr_t Part0; // 0xA0
    uintptr_t Part1; // 0xB0
};

struct WindowInputState {
    uintptr_t CapsLock; // 0x40
    uintptr_t CurrentTextBox; // 0x48
};

struct Workspace {
    uintptr_t World; // 0x3F8
    uintptr_t CurrentCamera; // 0x4A0
    uintptr_t DistributedGameTime; // 0x4C0
    uintptr_t ReadOnlyGravity; // 0x9D0
};

struct World {
    uintptr_t FallenPartsDestroyHeight; // 0x20C
    uintptr_t Gravity; // 0x218
    uintptr_t AirProperties; // 0x230
    uintptr_t Primitives; // 0x2A0
    uintptr_t worldStepsPerSec; // 0x868
};

struct WorldRoot {
    uintptr_t RaycastBoundFn; // 0x90
    uintptr_t RaycastBoundFnRva; // 0x3D30B0
    uintptr_t FindPartOnRayBoundFnRva; // 0x3D5690
    uintptr_t FindPartOnRayWithIgnoreListBoundFnRva; // 0x3D5840
    uintptr_t FindPartOnRayWithWhitelistBoundFnRva; // 0x3D59E0
    uintptr_t RaycastDescriptorVtableRva; // 0x7041420
};

struct highlight_manager {
    uintptr_t context_depth; // 0x20
    uintptr_t contexts; // 0x100
    uintptr_t fallback_depth; // 0x138
    uintptr_t context_active; // 0x420
    uintptr_t context_fill; // 0x520
    uintptr_t fallback_active; // 0x538
    uintptr_t fallback_fill; // 0x638
    uintptr_t manager; // 0xC18
    uintptr_t context_outline; // 0x1520
    uintptr_t fallback_outline; // 0x1638
};

