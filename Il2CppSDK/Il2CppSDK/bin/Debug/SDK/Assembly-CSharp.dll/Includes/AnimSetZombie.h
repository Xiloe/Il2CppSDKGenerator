#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimSetZombie
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78874);
	}
	// Fields
	template <typename T = void*> T& BlackBoard() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& WorldState() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> static T& InjuryCrawl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& DeathBody() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& DeathHead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& DeathLArm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& DeathRArm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& DeathLLeg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = void*> static T& DeathRLeg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& DeathCrawl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = void*> static T& Walk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& Run() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AnimSetZombie*))(Il2CppBase() + 0x1B04C4))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B04CC))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AnimSetZombie*))(Il2CppBase() + 0x1B1364))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AnimSetZombie*))(Il2CppBase() + 0x1B141C))(this);
	}
	template <typename T = Il2CppString*> T GetBlockAnim(void* state) {
		return ((T (*)(AnimSetZombie*, void*))(Il2CppBase() + 0x1B1420))(this, state);
	}
	template <typename T = Il2CppString*> T GetIdleAnim() {
		return ((T (*)(AnimSetZombie*))(Il2CppBase() + 0x1B1428))(this);
	}
	template <typename T = Il2CppString*> T GetIdleActionAnim() {
		return ((T (*)(AnimSetZombie*))(Il2CppBase() + 0x1B1588))(this);
	}
	template <typename T = Il2CppString*> T GetWalkAnim() {
		return ((T (*)(AnimSetZombie*))(Il2CppBase() + 0x1B161C))(this);
	}
	template <typename T = Il2CppString*> T GetRunAnim() {
		return ((T (*)(AnimSetZombie*))(Il2CppBase() + 0x1B1738))(this);
	}
	template <typename T = Il2CppString*> T GetMoveAnim(void* motionSide) {
		return ((T (*)(AnimSetZombie*, void*))(Il2CppBase() + 0x1B1854))(this, motionSide);
	}
	template <typename T = Il2CppString*> T GetStrafeAnim(void* dir) {
		return ((T (*)(AnimSetZombie*, void*))(Il2CppBase() + 0x1B19A8))(this, dir);
	}
	template <typename T = Il2CppString*> T GetRotateAnim(void* rotationType, float angle) {
		return ((T (*)(AnimSetZombie*, void*, float))(Il2CppBase() + 0x1B1A3C))(this, rotationType, angle);
	}
	template <typename T = Il2CppString*> T GetBaitAnim(void* baitAnim) {
		return ((T (*)(AnimSetZombie*, void*))(Il2CppBase() + 0x1B1BC4))(this, baitAnim);
	}
	template <typename T = Il2CppString*> T GetDodgeAnim(void* dir) {
		return ((T (*)(AnimSetZombie*, void*))(Il2CppBase() + 0x1B1C84))(this, dir);
	}
	template <typename T = Il2CppString*> T GetWeaponAnim(void* action) {
		return ((T (*)(AnimSetZombie*, void*))(Il2CppBase() + 0x1B1D18))(this, action);
	}
	template <typename T = Il2CppString*> T GetInjuryAnim(void* bodyPart, bool bDestroy, void* direction) {
		return ((T (*)(AnimSetZombie*, void*, bool, void*))(Il2CppBase() + 0x1B2180))(this, bodyPart, bDestroy, direction);
	}
	template <typename T = Il2CppString*> T GetStandToCrawlAnim(void* side) {
		return ((T (*)(AnimSetZombie*, void*))(Il2CppBase() + 0x1B26AC))(this, side);
	}
	template <typename T = Il2CppString*> T GetDeathAnim(void* bodyPart) {
		return ((T (*)(AnimSetZombie*, void*))(Il2CppBase() + 0x1B278C))(this, bodyPart);
	}
	template <typename T = Il2CppString*> T GetKnockdowAnim(void* knockdownState) {
		return ((T (*)(AnimSetZombie*, void*))(Il2CppBase() + 0x1B2B78))(this, knockdownState);
	}
	template <typename T = Il2CppString*> T GetContestAnim(void* state) {
		return ((T (*)(AnimSetZombie*, void*))(Il2CppBase() + 0x1B2C0C))(this, state);
	}
	template <typename T = Il2CppString*> T GetTeleportAnim(void* type) {
		return ((T (*)(AnimSetZombie*, void*))(Il2CppBase() + 0x1B2E4C))(this, type);
	}
	template <typename T = Il2CppString*> T GetInjuryCritAnim() {
		return ((T (*)(AnimSetZombie*))(Il2CppBase() + 0x1B2EE0))(this);
	}
	template <typename T = Il2CppString*> T GetGadgetAnim(void* item) {
		return ((T (*)(AnimSetZombie*, void*))(Il2CppBase() + 0x1B2F74))(this, item);
	}
};
