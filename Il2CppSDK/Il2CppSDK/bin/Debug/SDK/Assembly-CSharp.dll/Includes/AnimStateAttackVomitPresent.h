#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimStateAttackVomitPresent
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78854);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& EnemyComponent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& BodyComponent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& StartPosition() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& FinalPosition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& CurrentMoveTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& PositionOK() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& State() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& timeOfAttack() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& damageCaused() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& EndOfStateTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& PlayAnimTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& ThrowRightHand() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	// Methods
	template <typename T = void> T _ctor(void* anims, void* owner) {
		return ((T (*)(AnimStateAttackVomitPresent*, void*, void*))(Il2CppBase() + 0x1B8BF4))(this, anims, owner);
	}
	template <typename T = void> T OnActivate(void* action) {
		return ((T (*)(AnimStateAttackVomitPresent*, void*))(Il2CppBase() + 0x1B8C04))(this, action);
	}
	template <typename T = void> T OnDeactivate() {
		return ((T (*)(AnimStateAttackVomitPresent*))(Il2CppBase() + 0x1B8D24))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AnimStateAttackVomitPresent*))(Il2CppBase() + 0x1B8DD4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AnimStateAttackVomitPresent*))(Il2CppBase() + 0x1B8E1C))(this);
	}
	template <typename T = void> T ThrowVomit(void* ProjectileType) {
		return ((T (*)(AnimStateAttackVomitPresent*, void*))(Il2CppBase() + 0x1B95A8))(this, ProjectileType);
	}
	template <typename T = void> T Release() {
		return ((T (*)(AnimStateAttackVomitPresent*))(Il2CppBase() + 0x1B982C))(this);
	}
	template <typename T = bool> T HandleNewAction(void* action) {
		return ((T (*)(AnimStateAttackVomitPresent*, void*))(Il2CppBase() + 0x1B986C))(this, action);
	}
	template <typename T = void> T PlayAnim() {
		return ((T (*)(AnimStateAttackVomitPresent*))(Il2CppBase() + 0x1B9390))(this);
	}
	template <typename T = void> T Initialize(void* action) {
		return ((T (*)(AnimStateAttackVomitPresent*, void*))(Il2CppBase() + 0x1B9A0C))(this, action);
	}
};
