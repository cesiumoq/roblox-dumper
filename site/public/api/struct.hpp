/*                       cesium dumper

/*                  https://roblox-dump.vercel.app

/*  Total Offsets   :  395

/*  Dumped At       : 12:05 11/11/2026 (GMT)

/*  Dumped In       : 58,8s

*/
#pragma once
#include <cstdint>

/* ClientVersion: "version-4ea8e85481e34f46" */

struct AirProperties {
    uintptr_t AirDensity; // 0x18
    uintptr_t GlobalWind; // 0x3C
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
    uintptr_t ActiveAnimations; // 0x920
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

struct ByteCode {
    uintptr_t Pointer; // 0x18
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

struct DataModel {
    uintptr_t ToRenderView2; // 0x8
    uintptr_t ToRenderView3; // 0x28
    uintptr_t JobId; // 0x108
    uintptr_t Workspace; // 0x168
    uintptr_t CreatorId; // 0x190
    uintptr_t GameId; // 0x198
    uintptr_t PlaceId; // 0x1A0
    uintptr_t PlaceVersion; // 0x1BC
    uintptr_t ToRenderView1; // 0x1D8
    uintptr_t PrimitiveCount; // 0x430
    uintptr_t ScriptContext; // 0x440
    uintptr_t ServerIP; // 0x5A0
    uintptr_t GameLoaded; // 0x5B8
};

struct DepthOfFieldEffect {
    uintptr_t Enabled; // 0x98
    uintptr_t FarIntensity; // 0xA0
    uintptr_t FocusDistance; // 0xA4
    uintptr_t InFocusRadius; // 0xA8
    uintptr_t NearIntensity; // 0xAC
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
    uintptr_t Pointer; // 0x8F8E968
};

struct FileMeshData {
    uintptr_t Vertices; // 0x0
    uintptr_t VerticesEnd; // 0x8
    uintptr_t Faces; // 0x30
    uintptr_t FacesEnd; // 0x38
    uintptr_t AABBMin; // 0x180
    uintptr_t AABBMax; // 0x18C
};

struct GuiBase2D {
    uintptr_t AbsoluteSize; // 0x0
    uintptr_t AbsoluteRotation; // 0xD0
    uintptr_t AbsolutePosition; // 0xF4
};

struct GuiObject {
    uintptr_t Rotation; // 0xD0
    uintptr_t Position; // 0x2A8
    uintptr_t Size; // 0x2C8
    uintptr_t BackgroundColor3; // 0x2D8
    uintptr_t BackgroundTransparency; // 0x2E4
    uintptr_t BorderColor3; // 0x2E4
    uintptr_t LayoutOrder; // 0x314
    uintptr_t ZIndex; // 0x33C
    uintptr_t ScreenGui_Enabled; // 0x40D
    uintptr_t Image; // 0x670
    uintptr_t Visible; // 0x72D
    uintptr_t RichText; // 0x7C8
    uintptr_t Text; // 0xA30
    uintptr_t TextColor3; // 0xAE0
};

struct HandleAdornment {
    uintptr_t CFrame; // 0x100
};

struct Humanoid {
    uintptr_t PlatformStatePointer; // 0x0
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
    uintptr_t JumpHeight; // 0x198
    uintptr_t JumpPower; // 0x19C
    uintptr_t MaxHealth; // 0x1A0
    uintptr_t MaxSlopeAngle; // 0x1A4
    uintptr_t NameDisplayDistance; // 0x1A8
    uintptr_t NameOcclusion; // 0x1AC
    uintptr_t RigType; // 0x1B8
    uintptr_t Walkspeed; // 0x1C8
    uintptr_t AutoJumpEnabled; // 0x1CC
    uintptr_t AutoRotate; // 0x1CD
    uintptr_t AutomaticScalingEnabled; // 0x1CE
    uintptr_t BreakJointsOnDeath; // 0x1D0
    uintptr_t EvaluateStateMachine; // 0x1D1
    uintptr_t Jump; // 0x1D4
    uintptr_t PlatformStand; // 0x1D6
    uintptr_t RequiresNeck; // 0x1D7
    uintptr_t Sit; // 0x1D7
    uintptr_t UseJumpPower; // 0x1DA
    uintptr_t WalkspeedCheck; // 0x3A4
    uintptr_t WalkTimer; // 0x3F0
    uintptr_t HumanoidRootPart; // 0x468
    uintptr_t HumanoidState; // 0x8B0
    uintptr_t IsWalking; // 0xA46
};

struct Instance {
    uintptr_t Name; // 0x0
    uintptr_t ChildrenEnd; // 0x8
    uintptr_t ClassName; // 0x8
    uintptr_t This; // 0x8
    uintptr_t ClassDescriptor; // 0x18
    uintptr_t Parent; // 0x60
    uintptr_t NameContainer; // 0x68
    uintptr_t ChildrenStart; // 0x70
    uintptr_t ClassBase; // 0x1B0
};

struct JointInstance {
    uintptr_t Part0; // 0x100
    uintptr_t Part1; // 0x110
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
    uintptr_t ColorShift_Bottom; // 0xC4
    uintptr_t ColorShift_Top; // 0xD0
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
    uintptr_t ByteCode; // 0x178
    uintptr_t Hash; // 0x188
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
};

struct Model {
    uintptr_t Scale; // 0x12C
    uintptr_t PrimaryPart; // 0x240
};

struct ModuleScript {
    uintptr_t IsCoreScript; // 0x0
    uintptr_t GUID; // 0xB8
    uintptr_t ByteCode; // 0x120
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
    uintptr_t HeartbeatFPS; // 0xC8
    uintptr_t HeartbeatTask; // 0x27C8
};

struct Script {
    uintptr_t GUID; // 0xB8
    uintptr_t ByteCode; // 0x178
    uintptr_t Hash; // 0x188
};

struct ScriptContext {
    uintptr_t RequireBypass; // 0x0
};

struct Seat {
    uintptr_t Occupant; // 0x200
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
    uintptr_t Value; // 0xE758
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

struct TaskScheduler {
    uintptr_t JobName; // 0x18
    uintptr_t MaxFPS; // 0xB0
    uintptr_t JobStart; // 0xC8
    uintptr_t JobEnd; // 0xD0
    uintptr_t Pointer; // 0x8F1E408
};

struct Team {
    uintptr_t BrickColor; // 0xA0
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
    uintptr_t WindowInputState; // 0x288
};

struct VehicleSeat {
    uintptr_t MaxSpeed; // 0x210
    uintptr_t SteerFloat; // 0x214
    uintptr_t ThrottleFloat; // 0x218
    uintptr_t Torque; // 0x21C
    uintptr_t TurnSpeed; // 0x220
};

struct VisualEngine {
    uintptr_t ViewMatrix; // 0x1B0
    uintptr_t FakeDataModel; // 0xAF0
    uintptr_t Dimensions; // 0xB10
    uintptr_t RenderView; // 0xC50
    uintptr_t Pointer; // 0x8A11808
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
    uintptr_t ReadOnlyGravity; // 0x9C8
};

struct World {
    uintptr_t FallenPartsDestroyHeight; // 0x20C
    uintptr_t Gravity; // 0x218
    uintptr_t AirProperties; // 0x230
    uintptr_t Primitives; // 0x2A0
    uintptr_t worldStepsPerSec; // 0x868
};

