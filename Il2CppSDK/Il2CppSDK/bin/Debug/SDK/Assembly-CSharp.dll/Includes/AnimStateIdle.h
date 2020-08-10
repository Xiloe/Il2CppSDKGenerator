#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimStateIdle
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7881C);
	}
	// Fields
	template <typename T = Il2CppString*> T& AnimNameBase() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& TimeToFinishWeaponAction() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& WeaponAction() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& RotateAction() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& TimeToFinishRotateAction() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& ReloadAction() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& TimeToFinishReloadAction() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	// Methods
	template <typename T = void> T _ctor(void* anims, void* owner) {
		return ((T (*)(AnimStateIdle*, void*, void*))(Il2CppBase() + 0x1C8084))(this, anims, owner);
	}
	template <typename T = void> T OnDeactivate() {
		return ((T (*)(AnimStateIdle*))(Il2CppBase() + 0x1C808C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AnimStateIdle*))(Il2CppBase() + 0x1C80FC))(this);
	}
	template <typename T = bool> T HandleNewAction(void* action) {
		return ((T (*)(AnimStateIdle*, void*))(Il2CppBase() + 0x1C816C))(this, action);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AnimStateIdle*))(Il2CppBase() + 0x1C8874))(this);
	}
	template <typename T = void> T PlayStrafeAnim() {
		return ((T (*)(AnimStateIdle*))(Il2CppBase() + 0x1C8C34))(this);
	}
	template <typename T = void> T StopStrafeAnim() {
		return ((T (*)(AnimStateIdle*))(Il2CppBase() + 0x1C8F9C))(this);
	}
	template <typename T = void> T PlayIdleAnim() {
		return ((T (*)(AnimStateIdle*))(Il2CppBase() + 0x1C8A90))(this);
	}
	template <typename T = void> T Initialize(void* action) {
		return ((T (*)(AnimStateIdle*, void*))(Il2CppBase() + 0x1C92F0))(this, action);
	}
};
