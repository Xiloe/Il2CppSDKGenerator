#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimSet
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AnimSet*))(Il2CppBase() + 0x1AE938))(this);
	}
	template <typename T = Il2CppString*> T GetIdleAnim() {
		return ((T (*)(AnimSet*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetIdleActionAnim() {
		return ((T (*)(AnimSet*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetMoveAnim(void* motionSide) {
		return ((T (*)(AnimSet*, void*))(Il2CppBase() + 0x0))(this, motionSide);
	}
	template <typename T = Il2CppString*> T GetStrafeAnim(void* dir) {
		return ((T (*)(AnimSet*, void*))(Il2CppBase() + 0x0))(this, dir);
	}
	template <typename T = Il2CppString*> T GetRotateAnim(void* rotationType, float angle) {
		return ((T (*)(AnimSet*, void*, float))(Il2CppBase() + 0x0))(this, rotationType, angle);
	}
	template <typename T = Il2CppString*> T GetDodgeAnim(void* dir) {
		return ((T (*)(AnimSet*, void*))(Il2CppBase() + 0x0))(this, dir);
	}
	template <typename T = Il2CppString*> T GetBlockAnim(void* block) {
		return ((T (*)(AnimSet*, void*))(Il2CppBase() + 0x0))(this, block);
	}
	template <typename T = Il2CppString*> T GetKnockdowAnim(void* knockdownState) {
		return ((T (*)(AnimSet*, void*))(Il2CppBase() + 0x0))(this, knockdownState);
	}
	template <typename T = Il2CppString*> T GetContestAnim(void* state) {
		return ((T (*)(AnimSet*, void*))(Il2CppBase() + 0x0))(this, state);
	}
	template <typename T = Il2CppString*> T GetWeaponAnim(void* action) {
		return ((T (*)(AnimSet*, void*))(Il2CppBase() + 0x0))(this, action);
	}
	template <typename T = Il2CppString*> T GetInjuryAnim(void* bodyPart, bool bDestroy, void* direction) {
		return ((T (*)(AnimSet*, void*, bool, void*))(Il2CppBase() + 0x0))(this, bodyPart, bDestroy, direction);
	}
	template <typename T = Il2CppString*> T GetInjuryCritAnim() {
		return ((T (*)(AnimSet*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetStandToCrawlAnim(void* side) {
		return ((T (*)(AnimSet*, void*))(Il2CppBase() + 0x0))(this, side);
	}
	template <typename T = Il2CppString*> T GetDeathAnim(void* bodyPart) {
		return ((T (*)(AnimSet*, void*))(Il2CppBase() + 0x0))(this, bodyPart);
	}
	template <typename T = Il2CppString*> T GetTeleportAnim(void* type) {
		return ((T (*)(AnimSet*, void*))(Il2CppBase() + 0x0))(this, type);
	}
	template <typename T = Il2CppString*> T GetGadgetAnim(void* item) {
		return ((T (*)(AnimSet*, void*))(Il2CppBase() + 0x0))(this, item);
	}
};
