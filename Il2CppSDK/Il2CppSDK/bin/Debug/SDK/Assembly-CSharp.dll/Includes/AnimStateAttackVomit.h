#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimStateAttackVomit
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78850);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& EnemyComponent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& StartPosition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& FinalPosition() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& CurrentMoveTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& PositionOK() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& State() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& timeOfAttack() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& damageCaused() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& EndOfStateTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& PlayAnimTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	// Methods
	template <typename T = void> T _ctor(void* anims, void* owner) {
		return ((T (*)(AnimStateAttackVomit*, void*, void*))(Il2CppBase() + 0x1ADE88))(this, anims, owner);
	}
	template <typename T = void> T OnActivate(void* action) {
		return ((T (*)(AnimStateAttackVomit*, void*))(Il2CppBase() + 0x1B7B90))(this, action);
	}
	template <typename T = void> T OnDeactivate() {
		return ((T (*)(AnimStateAttackVomit*))(Il2CppBase() + 0x1B7C8C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AnimStateAttackVomit*))(Il2CppBase() + 0x1B7D30))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AnimStateAttackVomit*))(Il2CppBase() + 0x1B7D6C))(this);
	}
	template <typename T = void> T ThrowVomit(void* ProjectileType) {
		return ((T (*)(AnimStateAttackVomit*, void*))(Il2CppBase() + 0x1B84C8))(this, ProjectileType);
	}
	template <typename T = void> T Release() {
		return ((T (*)(AnimStateAttackVomit*))(Il2CppBase() + 0x1B8730))(this);
	}
	template <typename T = bool> T HandleNewAction(void* action) {
		return ((T (*)(AnimStateAttackVomit*, void*))(Il2CppBase() + 0x1B876C))(this, action);
	}
	template <typename T = void> T PlayAnim() {
		return ((T (*)(AnimStateAttackVomit*))(Il2CppBase() + 0x1B82C0))(this);
	}
	template <typename T = void> T Initialize(void* action) {
		return ((T (*)(AnimStateAttackVomit*, void*))(Il2CppBase() + 0x1B88F4))(this, action);
	}
};
