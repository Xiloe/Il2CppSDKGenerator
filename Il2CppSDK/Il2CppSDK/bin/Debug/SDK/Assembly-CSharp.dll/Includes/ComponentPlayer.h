#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ComponentPlayer
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78CEC);
	}
	// Fields
	template <typename T = void*> T& SoundSetup() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& HeightStand() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& HeightCover() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Experience() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& LastInjuryTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& NextUpdateTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& SendStepEventTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& UseMode() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& PickedUpMoney() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& Controls() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& ActivePowerup() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& KillsToDeactivatePowerup() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& StatWpnController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& Owner() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> static T& f__am$cacheE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cacheF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2DD1EC))(this);
	}
	template <typename T = void*> T get_Owner() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2DD2CC))(this);
	}
	template <typename T = void> T set_Owner(void* value) {
		return ((T (*)(ComponentPlayer*, void*))(Il2CppBase() + 0x2DD2D4))(this, value);
	}
	template <typename T = bool> T get_InUseMode() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2DD2DC))(this);
	}
	template <typename T = void*> T get_HitSound() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2DD2E4))(this);
	}
	template <typename T = void*> T get_WipeGobSound() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2DD350))(this);
	}
	template <typename T = void*> T get_CommentPickupSound() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2DD3BC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2DD428))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2DD4EC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2DD500))(this);
	}
	template <typename T = void> T Activate(void* spawn) {
		return ((T (*)(ComponentPlayer*, void*))(Il2CppBase() + 0x2DDB14))(this, spawn);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2DE2E0))(this);
	}
	template <typename T = void> T AddPowerup(void* powerup, int32_t KillsToDeactivate) {
		return ((T (*)(ComponentPlayer*, void*, int32_t))(Il2CppBase() + 0x2DE5D4))(this, powerup, KillsToDeactivate);
	}
	template <typename T = void*> T GetActivePowerup() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2DE6D4))(this);
	}
	template <typename T = bool> T IsActivePowerupExpiring() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2DE6DC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2DE7C4))(this);
	}
	template <typename T = void> T SlowUpdate() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2DEDCC))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2DF298))(this);
	}
	template <typename T = void> T LoadAllWeapon() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2DF510))(this);
	}
	template <typename T = void> T UpdateUseModeHACK() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2DF514))(this);
	}
	template <typename T = void> T OnTriggerEnter(void* other) {
		return ((T (*)(ComponentPlayer*, void*))(Il2CppBase() + 0x2DF55C))(this, other);
	}
	template <typename T = void> T HandleAction(void* a) {
		return ((T (*)(ComponentPlayer*, void*))(Il2CppBase() + 0x2DF560))(this, a);
	}
	template <typename T = void> T CreateOrderUse() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2DF054))(this);
	}
	template <typename T = void> T HandleBadUse() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2DFD38))(this);
	}
	template <typename T = void> T StopMove(bool stop) {
		return ((T (*)(ComponentPlayer*, bool))(Il2CppBase() + 0x2DFD3C))(this, stop);
	}
	template <typename T = void> T StopView(bool stop) {
		return ((T (*)(ComponentPlayer*, bool))(Il2CppBase() + 0x2DFDF0))(this, stop);
	}
	template <typename T = void> T ActionIronSight() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2DFE4C))(this);
	}
	template <typename T = void> T ActionBeginFire() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2DFEBC))(this);
	}
	template <typename T = void> T ActionEndFire() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2DFF54))(this);
	}
	template <typename T = void> T ActionUse() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2DFFA4))(this);
	}
	template <typename T = void> T ActionUseObject(void* obj) {
		return ((T (*)(ComponentPlayer*, void*))(Il2CppBase() + 0x2E0020))(this, obj);
	}
	template <typename T = void> T ActionReload() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2E011C))(this);
	}
	template <typename T = void> T ActionUseGadget(void* id) {
		return ((T (*)(ComponentPlayer*, void*))(Il2CppBase() + 0x2E01E0))(this, id);
	}
	template <typename T = bool> T CanChangeWeapon() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2E03F8))(this);
	}
	template <typename T = void> T ActionChangeWeapon(void* weapon) {
		return ((T (*)(ComponentPlayer*, void*))(Il2CppBase() + 0x2E04A4))(this, weapon);
	}
	template <typename T = void> T ClipRotation() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2DF0D4))(this);
	}
	template <typename T = void> T UpdateIdealFireDir() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2DF1C0))(this);
	}
	template <typename T = void> T PickUp(void* P) {
		return ((T (*)(ComponentPlayer*, void*))(Il2CppBase() + 0x2E051C))(this, P);
	}
	template <typename T = void> T ProcessAccumulatedPickedUpMoney() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2E08F0))(this);
	}
	template <typename T = void> T MoneyPickedUp(int32_t Units, int32_t MsgTextID) {
		return ((T (*)(ComponentPlayer*, int32_t, int32_t))(Il2CppBase() + 0x2E0918))(this, Units, MsgTextID);
	}
	template <typename T = void> T CommentPickup() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2E0C00))(this);
	}
	template <typename T = void> T SetIronSight(bool on) {
		return ((T (*)(ComponentPlayer*, bool))(Il2CppBase() + 0x2DFAEC))(this, on);
	}
	template <typename T = void> T AimToBestEnemy() {
		return ((T (*)(ComponentPlayer*))(Il2CppBase() + 0x2E0CF8))(this);
	}
	template <typename T = bool> static T Activatem__7(void* ps) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x2E13F8))(0, ps);
	}
	template <typename T = bool> static T Activatem__8(void* ps) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x2E1428))(0, ps);
	}
};
