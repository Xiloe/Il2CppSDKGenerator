#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimStateAttackMelee
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7884C);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& DestrObj() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& Target() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& StartPosition() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& FinalPosition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& DestrObjDir() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& CurrentMoveTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& PositionOK() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& State() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& AnimTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& AnimName() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	// Methods
	template <typename T = void> T _ctor(void* anims, void* owner) {
		return ((T (*)(AnimStateAttackMelee*, void*, void*))(Il2CppBase() + 0x1ADE84))(this, anims, owner);
	}
	template <typename T = void> T OnActivate(void* action) {
		return ((T (*)(AnimStateAttackMelee*, void*))(Il2CppBase() + 0x1B6A80))(this, action);
	}
	template <typename T = void> T OnDeactivate() {
		return ((T (*)(AnimStateAttackMelee*))(Il2CppBase() + 0x1B6D64))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AnimStateAttackMelee*))(Il2CppBase() + 0x1B6E18))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AnimStateAttackMelee*))(Il2CppBase() + 0x1B6E5C))(this);
	}
	template <typename T = void> T Release() {
		return ((T (*)(AnimStateAttackMelee*))(Il2CppBase() + 0x1B76CC))(this);
	}
	template <typename T = bool> T HandleNewAction(void* action) {
		return ((T (*)(AnimStateAttackMelee*, void*))(Il2CppBase() + 0x1B7708))(this, action);
	}
	template <typename T = void> T PlayAnim() {
		return ((T (*)(AnimStateAttackMelee*))(Il2CppBase() + 0x1B747C))(this);
	}
	template <typename T = void> T Initialize(void* action) {
		return ((T (*)(AnimStateAttackMelee*, void*))(Il2CppBase() + 0x1B7890))(this, action);
	}
};
