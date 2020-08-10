#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimStateWeaponChange
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78834);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& State() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& TimeToFinishState() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor(void* anims, void* owner) {
		return ((T (*)(AnimStateWeaponChange*, void*, void*))(Il2CppBase() + 0x1CF030))(this, anims, owner);
	}
	template <typename T = void> T OnDeactivate() {
		return ((T (*)(AnimStateWeaponChange*))(Il2CppBase() + 0x1CF040))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AnimStateWeaponChange*))(Il2CppBase() + 0x1CF06C))(this);
	}
	template <typename T = bool> T HandleNewAction(void* action) {
		return ((T (*)(AnimStateWeaponChange*, void*))(Il2CppBase() + 0x1CF0B0))(this, action);
	}
	template <typename T = void> T DoMove() {
		return ((T (*)(AnimStateWeaponChange*))(Il2CppBase() + 0x1CF178))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AnimStateWeaponChange*))(Il2CppBase() + 0x1CF5A8))(this);
	}
	template <typename T = void> T PlayIdleAnim() {
		return ((T (*)(AnimStateWeaponChange*))(Il2CppBase() + 0x1CFBB8))(this);
	}
	template <typename T = void> T Initialize(void* action) {
		return ((T (*)(AnimStateWeaponChange*, void*))(Il2CppBase() + 0x1CFD38))(this, action);
	}
};
