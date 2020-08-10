#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimStateKnockdown
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& ActionDeath() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppQuaternion> T& FinalRotation() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppQuaternion> T& StartRotation() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& StartPosition() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& FinalPosition() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& CurrentRotationTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& RotationTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& CurrentMoveTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& MoveTime() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& EndOfStateTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& KnockdownEndTime() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& RotationOk() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& PositionOK() {
		return *(T*)((uintptr_t)this + 0x71);
	}
	template <typename T = void*> T& State() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	// Methods
	template <typename T = void> T _ctor(void* anims, void* owner) {
		return ((T (*)(AnimStateKnockdown*, void*, void*))(Il2CppBase() + 0x1CA0A4))(this, anims, owner);
	}
	template <typename T = void> T OnActivate(void* action) {
		return ((T (*)(AnimStateKnockdown*, void*))(Il2CppBase() + 0x1CA0AC))(this, action);
	}
	template <typename T = void> T OnDeactivate() {
		return ((T (*)(AnimStateKnockdown*))(Il2CppBase() + 0x1CA148))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AnimStateKnockdown*))(Il2CppBase() + 0x1CA1DC))(this);
	}
	template <typename T = bool> T HandleNewAction(void* action) {
		return ((T (*)(AnimStateKnockdown*, void*))(Il2CppBase() + 0x1CA238))(this, action);
	}
	template <typename T = void> T Release() {
		return ((T (*)(AnimStateKnockdown*))(Il2CppBase() + 0x1CA4D4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AnimStateKnockdown*))(Il2CppBase() + 0x1CA51C))(this);
	}
	template <typename T = void> T Initialize(void* action) {
		return ((T (*)(AnimStateKnockdown*, void*))(Il2CppBase() + 0x1CAA58))(this, action);
	}
	template <typename T = void> T InitializeKnockdownLoop() {
		return ((T (*)(AnimStateKnockdown*))(Il2CppBase() + 0x1CA864))(this);
	}
	template <typename T = void> T InitializeDeath() {
		return ((T (*)(AnimStateKnockdown*))(Il2CppBase() + 0x1CA3A8))(this);
	}
	template <typename T = void> T InitializeKnockdownUp() {
		return ((T (*)(AnimStateKnockdown*))(Il2CppBase() + 0x1CA924))(this);
	}
	template <typename T = void> T UpdateFinalRotation() {
		return ((T (*)(AnimStateKnockdown*))(Il2CppBase() + 0x1CAE94))(this);
	}
};
