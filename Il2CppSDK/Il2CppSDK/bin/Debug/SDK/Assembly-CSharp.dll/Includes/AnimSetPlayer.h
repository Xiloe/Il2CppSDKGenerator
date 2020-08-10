#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimSetPlayer
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78D28);
	}
	// Fields
	template <typename T = void*> T& m_BlackBoard() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_PlayerAnims() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AnimSetPlayer*))(Il2CppBase() + 0x1AF4A8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AnimSetPlayer*))(Il2CppBase() + 0x1AF4B0))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AnimSetPlayer*))(Il2CppBase() + 0x1AF5A8))(this);
	}
	template <typename T = void> T OnWeaponChanged() {
		return ((T (*)(AnimSetPlayer*))(Il2CppBase() + 0x1AF5B4))(this);
	}
	template <typename T = Il2CppString*> T GetBlockAnim(void* state) {
		return ((T (*)(AnimSetPlayer*, void*))(Il2CppBase() + 0x1AF650))(this, state);
	}
	template <typename T = Il2CppString*> T GetIdleAnim() {
		return ((T (*)(AnimSetPlayer*))(Il2CppBase() + 0x1AF658))(this);
	}
	template <typename T = Il2CppString*> T GetIdleActionAnim() {
		return ((T (*)(AnimSetPlayer*))(Il2CppBase() + 0x1AF738))(this);
	}
	template <typename T = Il2CppString*> T GetMoveAnim(void* motionSide) {
		return ((T (*)(AnimSetPlayer*, void*))(Il2CppBase() + 0x1AF760))(this, motionSide);
	}
	template <typename T = Il2CppString*> T GetStrafeAnim(void* dir) {
		return ((T (*)(AnimSetPlayer*, void*))(Il2CppBase() + 0x1AF8F8))(this, dir);
	}
	template <typename T = Il2CppString*> T GetRotateAnim(void* rotationType, float angle) {
		return ((T (*)(AnimSetPlayer*, void*, float))(Il2CppBase() + 0x1AFA68))(this, rotationType, angle);
	}
	template <typename T = Il2CppString*> T GetDodgeAnim(void* dir) {
		return ((T (*)(AnimSetPlayer*, void*))(Il2CppBase() + 0x1AFA70))(this, dir);
	}
	template <typename T = Il2CppString*> T GetWeaponAnim(void* action) {
		return ((T (*)(AnimSetPlayer*, void*))(Il2CppBase() + 0x1AFB04))(this, action);
	}
	template <typename T = Il2CppString*> T GetInjuryAnim(void* bodyPart, bool bDestroy, void* direction) {
		return ((T (*)(AnimSetPlayer*, void*, bool, void*))(Il2CppBase() + 0x1AFD5C))(this, bodyPart, bDestroy, direction);
	}
	template <typename T = Il2CppString*> T GetGadgetAnim(void* item) {
		return ((T (*)(AnimSetPlayer*, void*))(Il2CppBase() + 0x1AFF4C))(this, item);
	}
	template <typename T = Il2CppString*> T GetStandToCrawlAnim(void* side) {
		return ((T (*)(AnimSetPlayer*, void*))(Il2CppBase() + 0x1AFFC4))(this, side);
	}
	template <typename T = Il2CppString*> T GetDeathAnim(void* bodyPart) {
		return ((T (*)(AnimSetPlayer*, void*))(Il2CppBase() + 0x1B0058))(this, bodyPart);
	}
	template <typename T = Il2CppString*> T GetKnockdowAnim(void* knockdownState) {
		return ((T (*)(AnimSetPlayer*, void*))(Il2CppBase() + 0x1B00C8))(this, knockdownState);
	}
	template <typename T = Il2CppString*> T GetContestAnim(void* state) {
		return ((T (*)(AnimSetPlayer*, void*))(Il2CppBase() + 0x1B015C))(this, state);
	}
	template <typename T = Il2CppString*> T GetTeleportAnim(void* type) {
		return ((T (*)(AnimSetPlayer*, void*))(Il2CppBase() + 0x1B039C))(this, type);
	}
	template <typename T = Il2CppString*> T GetInjuryCritAnim() {
		return ((T (*)(AnimSetPlayer*))(Il2CppBase() + 0x1B0430))(this);
	}
};
