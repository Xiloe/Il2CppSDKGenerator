#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimStateTeleport
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor(void* anims, void* owner) {
		return ((T (*)(AnimStateTeleport*, void*, void*))(Il2CppBase() + 0x1CD05C))(this, anims, owner);
	}
	template <typename T = void> T Release() {
		return ((T (*)(AnimStateTeleport*))(Il2CppBase() + 0x1CD064))(this);
	}
	template <typename T = void> T OnActivate(void* action) {
		return ((T (*)(AnimStateTeleport*, void*))(Il2CppBase() + 0x1CD0AC))(this, action);
	}
	template <typename T = void> T OnDeactivate() {
		return ((T (*)(AnimStateTeleport*))(Il2CppBase() + 0x1CD0B4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AnimStateTeleport*))(Il2CppBase() + 0x1CD184))(this);
	}
	template <typename T = bool> T HandleNewAction(void* action) {
		return ((T (*)(AnimStateTeleport*, void*))(Il2CppBase() + 0x1CD1C8))(this, action);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AnimStateTeleport*))(Il2CppBase() + 0x1CD1D0))(this);
	}
	template <typename T = void> T Initialize(void* action) {
		return ((T (*)(AnimStateTeleport*, void*))(Il2CppBase() + 0x1CD1D4))(this, action);
	}
};
