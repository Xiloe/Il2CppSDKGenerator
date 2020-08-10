#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentHuman
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD787A0);
	}
	// Fields
	template <typename T = void*> T& FadeoutOverride() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& BlackBoard() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& SoundSetup() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& SoundLocks() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& FadeoutMaterial() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> T& DiffuseMaterial() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& TransformEye() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = void*> T& TransformTarget() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& Mask() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = void*> T& TransformEyeOriginal() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = void*> T& RagdollRoot() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = void*> T& RigidBodyForce() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& RigidBodyPushingForce() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppArray<void*>*> T& RigidBodies() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& PrevHealth() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = void*> T& CollBox() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = void*> T& CollCapsule() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& CollCapsuleHeight() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& CollCapsuleShrinked() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<void*>*> T& Colliders() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& TeleportTimer() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = void*> T& ContestEnemy() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& debugGOAP() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& debugAnims() {
		return *(T*)((uintptr_t)this + 0x9D);
	}
	template <typename T = bool> T& debugMemory() {
		return *(T*)((uintptr_t)this + 0x9E);
	}
	template <typename T = bool> T& debugAI() {
		return *(T*)((uintptr_t)this + 0x9F);
	}
	template <typename T = void*> T& AnimationSet() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = void*> T& Shadow() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = void*> T& GoalManager() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = void*> T& Actions() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& FadeoutFXDuration() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& TimeToUpdateAgent() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& StepTime() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& KillExperience() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = void*> T& OnHealthChanged() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = void*> T& CharacterController() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = void*> T& WeaponComponent() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = void*> T& GadgetsComponent() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = void*> T& SensorsComponent() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = void*> T& EnemyComponent() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = void*> T& AnimComponent() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = void*> T& NavMeshAgent() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = void*> T& Renderer() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppArray<void*>*> T& LodRenderers() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = void*> T& WorldState() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = void*> T& Memory() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19E87C))(this);
	}
	template <typename T = void> T add_OnHealthChanged(void* value) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x19EB78))(this, value);
	}
	template <typename T = void> T remove_OnHealthChanged(void* value) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x19ED04))(this, value);
	}
	template <typename T = bool> T get_IsPlayer() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19EE90))(this);
	}
	template <typename T = bool> T get_IsBoss() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19EEA4))(this);
	}
	template <typename T = bool> T get_IsAlive() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19EEC8))(this);
	}
	template <typename T = bool> T get_IsVisible() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19EF1C))(this);
	}
	template <typename T = bool> T get_IsInvulnerable() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19EF50))(this);
	}
	template <typename T = bool> T get_IsActionPointOn() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19EF98))(this);
	}
	template <typename T = bool> T get_IsFullyHealed() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19EFBC))(this);
	}
	template <typename T = Il2CppVector3> T get_ChestPosition() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19F00C))(this);
	}
	template <typename T = void*> T get_AnimSet() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19F0B8))(this);
	}
	template <typename T = void> T set_AnimSet(void* value) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x19F160))(this, value);
	}
	template <typename T = void*> T get_CharacterController() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19F168))(this);
	}
	template <typename T = void> T set_CharacterController(void* value) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x19F170))(this, value);
	}
	template <typename T = void*> T get_WeaponComponent() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19F178))(this);
	}
	template <typename T = void> T set_WeaponComponent(void* value) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x19F180))(this, value);
	}
	template <typename T = void*> T get_GadgetsComponent() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19F188))(this);
	}
	template <typename T = void> T set_GadgetsComponent(void* value) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x19F190))(this, value);
	}
	template <typename T = void*> T get_SensorsComponent() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19F198))(this);
	}
	template <typename T = void> T set_SensorsComponent(void* value) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x19F1A0))(this, value);
	}
	template <typename T = void*> T get_EnemyComponent() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19F1A8))(this);
	}
	template <typename T = void> T set_EnemyComponent(void* value) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x19F1B0))(this, value);
	}
	template <typename T = void*> T get_AnimComponent() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19F1B8))(this);
	}
	template <typename T = void> T set_AnimComponent(void* value) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x19F1C0))(this, value);
	}
	template <typename T = void*> T get_NavMeshAgent() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19F1C8))(this);
	}
	template <typename T = void> T set_NavMeshAgent(void* value) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x19F1D0))(this, value);
	}
	template <typename T = void*> T get_Renderer() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19EF48))(this);
	}
	template <typename T = void> T set_Renderer(void* value) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x19F1D8))(this, value);
	}
	template <typename T = Il2CppArray<void*>*> T get_LodRenderers() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19F1E0))(this);
	}
	template <typename T = void> T set_LodRenderers(Il2CppArray<void*>* value) {
		return ((T (*)(AgentHuman*, Il2CppArray<void*>*))(Il2CppBase() + 0x19F1E8))(this, value);
	}
	template <typename T = Il2CppVector3> T get_EyePosition() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19F1F0))(this);
	}
	template <typename T = void*> T GetAction(void* type) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x19F21C))(this, type);
	}
	template <typename T = int32_t> T GetNumberOfActions() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19F31C))(this);
	}
	template <typename T = void> T ClearActions() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19F374))(this);
	}
	template <typename T = void*> T get_WorldState() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19F3CC))(this);
	}
	template <typename T = void> T set_WorldState(void* value) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x19F3D4))(this, value);
	}
	template <typename T = void*> T get_Memory() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19F3DC))(this);
	}
	template <typename T = void> T set_Memory(void* value) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x19F3E4))(this, value);
	}
	template <typename T = void*> T get_StepSound() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19F3EC))(this);
	}
	template <typename T = void*> T get_StepMetalSound() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19F458))(this);
	}
	template <typename T = void*> T get_InjurySound() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19F4C4))(this);
	}
	template <typename T = void*> T get_InjuryCriticalSound() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19F530))(this);
	}
	template <typename T = void*> T get_DeathSound() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19F59C))(this);
	}
	template <typename T = void*> T get_DeathAlienSound() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19F608))(this);
	}
	template <typename T = void*> T get_ThrowSound() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19F674))(this);
	}
	template <typename T = void*> T get_PlaceSound() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19F6E0))(this);
	}
	template <typename T = float> T get_MaxRunSpeed() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19F74C))(this);
	}
	template <typename T = float> T get_MaxWalkSpeed() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19F7AC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19F80C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x1A033C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x1A0378))(this);
	}
	template <typename T = bool> T DestroyEnemyConfig() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x1A05A4))(this);
	}
	template <typename T = bool> T CreateEnemyConfig(void* agentType) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x1A06F4))(this, agentType);
	}
	template <typename T = void> T ApplyModifications(void* Data) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x1A0BE8))(this, Data);
	}
	template <typename T = void> T SetEyes(bool show) {
		return ((T (*)(AgentHuman*, bool))(Il2CppBase() + 0x1A0DB0))(this, show);
	}
	template <typename T = void> T Activate(void* spawn) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x1A109C))(this, spawn);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x1A1FB8))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x1A203C))(this);
	}
	template <typename T = void> T UpdateAgent() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x1A2998))(this);
	}
	template <typename T = void> T HandleAction(void* a) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x1A2CA8))(this, a);
	}
	template <typename T = void> T PrepareForStart() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x1A2CAC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x1A1FD8))(this);
	}
	template <typename T = void> T Stop(bool stop) {
		return ((T (*)(AgentHuman*, bool))(Il2CppBase() + 0x1A2EEC))(this, stop);
	}
	template <typename T = void> T ResetAgent() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x19FF30))(this);
	}
	template <typename T = void> T ResetHitZones() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x1A2F20))(this);
	}
	template <typename T = void*> T GetGOAPPlan() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x1A307C))(this);
	}
	template <typename T = void> T AddGOAPAction(void* action) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x1A30A8))(this, action);
	}
	template <typename T = void> T AddGOAPGoal(void* goal) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x1A31A4))(this, goal);
	}
	template <typename T = void*> T GetGOAPGoal(void* goal) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x1A31D0))(this, goal);
	}
	template <typename T = void> T InitializeGOAP() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x1A31E8))(this);
	}
	template <typename T = bool> T IsFriend(void* friend_) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x1A3214))(this, friend_);
	}
	template <typename T = void> T OnProjectileHit(void* projectile) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x1A332C))(this, projectile);
	}
	template <typename T = void> T OnProjectileHit_1(void* projectile, void* hitZone, void* bodyPart, bool bodyPartDestroyed) {
		return ((T (*)(AgentHuman*, void*, void*, void*, bool))(Il2CppBase() + 0x1A3354))(this, projectile, hitZone, bodyPart, bodyPartDestroyed);
	}
	template <typename T = void> T OnMeleeHit(void* zone, void* Data, void* bodyPart, bool bodyPartDestroyed) {
		return ((T (*)(AgentHuman*, void*, void*, void*, bool))(Il2CppBase() + 0x1A42F4))(this, zone, Data, bodyPart, bodyPartDestroyed);
	}
	template <typename T = void> T OnReceiveRangeDamage(void* attacker, float damage, Il2CppVector3 impuls, void* weaponID, void* weaponType) {
		return ((T (*)(AgentHuman*, void*, float, Il2CppVector3, void*, void*))(Il2CppBase() + 0x1A4500))(this, attacker, damage, impuls, weaponID, weaponType);
	}
	template <typename T = void> T OnReceiveEnviromentDamage(float damage, Il2CppVector3 impuls) {
		return ((T (*)(AgentHuman*, float, Il2CppVector3))(Il2CppBase() + 0x1A471C))(this, damage, impuls);
	}
	template <typename T = void*> T GetAttackDir(void* transform) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x1A48C0))(this, transform);
	}
	template <typename T = float> T GetNewHealth(float damage) {
		return ((T (*)(AgentHuman*, float))(Il2CppBase() + 0x1A4A3C))(this, damage);
	}
	template <typename T = void> T Heal(float hp) {
		return ((T (*)(AgentHuman*, float))(Il2CppBase() + 0x1A4B58))(this, hp);
	}
	template <typename T = void> T TakeDamage(void* inAttacker, float inDamage, void* inHitTransform, Il2CppVector3 inImpuls, void* inWeaponID, void* type, void* bodyPart, bool bodyPartDestroyed) {
		return ((T (*)(AgentHuman*, void*, float, void*, Il2CppVector3, void*, void*, void*, bool))(Il2CppBase() + 0x1A37DC))(this, inAttacker, inDamage, inHitTransform, inImpuls, inWeaponID, type, bodyPart, bodyPartDestroyed);
	}
	template <typename T = void> T KillEnemy() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x1A58C4))(this);
	}
	template <typename T = void> T CriticalHit(void* bodyPart, bool death) {
		return ((T (*)(AgentHuman*, void*, bool))(Il2CppBase() + 0x1A52CC))(this, bodyPart, death);
	}
	template <typename T = bool> T StartContest(void* starter) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x1A5A68))(this, starter);
	}
	template <typename T = bool> T StopContest(void* starter) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x1A5AA4))(this, starter);
	}
	template <typename T = bool> T CanDoContest(void* enemy, bool checkMyself) {
		return ((T (*)(AgentHuman*, void*, bool))(Il2CppBase() + 0x1A5AE4))(this, enemy, checkMyself);
	}
	template <typename T = bool> T IsInContest() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x1A5E0C))(this);
	}
	template <typename T = float> T PlayAnim(Il2CppString* animName, void* invulnerable) {
		return ((T (*)(AgentHuman*, Il2CppString*, void*))(Il2CppBase() + 0x1A5E78))(this, animName, invulnerable);
	}
	template <typename T = void> T Teleport(Il2CppVector3 position, Il2CppQuaternion rotation) {
		return ((T (*)(AgentHuman*, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x1A2A6C))(this, position, rotation);
	}
	template <typename T = void> T Teleport_1(void* destination) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x1A5F9C))(this, destination);
	}
	template <typename T = void> T Dissolve(float delay) {
		return ((T (*)(AgentHuman*, float))(Il2CppBase() + 0x1A6248))(this, delay);
	}
	template <typename T = void*> T Fadeout(float delay) {
		return ((T (*)(AgentHuman*, float))(Il2CppBase() + 0x1A62AC))(this, delay);
	}
	template <typename T = void> T TeleportFadeOut() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x1A6368))(this);
	}
	template <typename T = void> T TeleportFadeIn() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x1A66E8))(this);
	}
	template <typename T = void> T ShowModel(bool show) {
		return ((T (*)(AgentHuman*, bool))(Il2CppBase() + 0x1A67B0))(this, show);
	}
	template <typename T = void> T SetMaterial(void* mtl) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x1A6850))(this, mtl);
	}
	template <typename T = void> T SetFadeoutMaterial(float timeOfs, float invert, float duration) {
		return ((T (*)(AgentHuman*, float, float, float))(Il2CppBase() + 0x1A63A0))(this, timeOfs, invert, duration);
	}
	template <typename T = void*> T FadeIn() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x1A670C))(this);
	}
	template <typename T = void> T ResetMaterial() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x1A2F18))(this);
	}
	template <typename T = bool> T SoundIsPlaying() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x1A68FC))(this);
	}
	template <typename T = void> T SoundStop() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x1A6928))(this);
	}
	template <typename T = float> T SoundPlay(void* clip) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x1A2930))(this, clip);
	}
	template <typename T = float> T SoundUniquePlay(void* clip) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x1A6974))(this, clip);
	}
	template <typename T = float> T SoundUniquePlay_1(void* clip, float lockDuration) {
		return ((T (*)(AgentHuman*, void*, float))(Il2CppBase() + 0x1A69D4))(this, clip, lockDuration);
	}
	template <typename T = float> T SoundUniquePlay_2(void* clip, float lockDuration, Il2CppString* lockName) {
		return ((T (*)(AgentHuman*, void*, float, Il2CppString*))(Il2CppBase() + 0x1A5168))(this, clip, lockDuration, lockName);
	}
	template <typename T = void*> T _SoundUniquePlay(void* clip, float lockDuration, Il2CppString* lockName) {
		return ((T (*)(AgentHuman*, void*, float, Il2CppString*))(Il2CppBase() + 0x1A6A28))(this, clip, lockDuration, lockName);
	}
	template <typename T = void> T PlayLoopedSound(void* clip, float delay, float time, float fadeInTime, float fadeOutTime) {
		return ((T (*)(AgentHuman*, void*, float, float, float, float))(Il2CppBase() + 0x1A6AFC))(this, clip, delay, time, fadeInTime, fadeOutTime);
	}
	template <typename T = void*> T _PlayLoopedSound(void* clip, float delay, float time, float fadeInTime, float fadeOutTime) {
		return ((T (*)(AgentHuman*, void*, float, float, float, float))(Il2CppBase() + 0x1A6B38))(this, clip, delay, time, fadeInTime, fadeOutTime);
	}
	template <typename T = void> T StopLoopedSound() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x1A59FC))(this);
	}
	template <typename T = bool> T IsSoundPlaying(void* clip) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x1A6C28))(this, clip);
	}
	template <typename T = void> T ToggleCollisions(bool BlockPlayer, bool BlockRaycasts) {
		return ((T (*)(AgentHuman*, bool, bool))(Il2CppBase() + 0x1A2CB0))(this, BlockPlayer, BlockRaycasts);
	}
	template <typename T = void> T ShrinkBlockingCapsule() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x1A4ECC))(this);
	}
	template <typename T = void> T RestoreBlockingCapsule() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x1A0F70))(this);
	}
	template <typename T = void> T SetFPVLayer(bool fpvOn) {
		return ((T (*)(AgentHuman*, bool))(Il2CppBase() + 0x1A1950))(this, fpvOn);
	}
	template <typename T = void> T ResetAnimations() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x1A1BD4))(this);
	}
	template <typename T = void> T EnableRagdoll(bool enable) {
		return ((T (*)(AgentHuman*, bool))(Il2CppBase() + 0x1A169C))(this, enable);
	}
	template <typename T = void*> static T GetParentRBody(void* tr) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1A6C6C))(0, tr);
	}
	template <typename T = void> T AddFactToMemory(void* eventType, void* agent, float lifetime, float delay) {
		return ((T (*)(AgentHuman*, void*, void*, float, float))(Il2CppBase() + 0x1A4FF8))(this, eventType, agent, lifetime, delay);
	}
	template <typename T = void> T AddFactToMemory_1(void* fact) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x1A6D60))(this, fact);
	}
	template <typename T = bool> T CanFire() {
		return ((T (*)(AgentHuman*))(Il2CppBase() + 0x1A6DE4))(this);
	}
	template <typename T = bool> T CanUseGadget(void* gadget) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x1A6EE4))(this, gadget);
	}
	template <typename T = void> T OnControllerColliderHit(void* hit) {
		return ((T (*)(AgentHuman*, void*))(Il2CppBase() + 0x1A7014))(this, hit);
	}
	template <typename T = void> T DropPickups(void* DropEvent, bool Ammo, bool Money) {
		return ((T (*)(AgentHuman*, void*, bool, bool))(Il2CppBase() + 0x1A4C44))(this, DropEvent, Ammo, Money);
	}
};
