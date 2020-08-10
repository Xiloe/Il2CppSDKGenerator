#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimStateDodge
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& EndOfStateTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor(void* anims, void* owner) {
		return ((T (*)(AnimStateDodge*, void*, void*))(Il2CppBase() + 0x1C2AC0))(this, anims, owner);
	}
	template <typename T = void> T OnActivate(void* action) {
		return ((T (*)(AnimStateDodge*, void*))(Il2CppBase() + 0x1C2AC8))(this, action);
	}
	template <typename T = void> T OnDeactivate() {
		return ((T (*)(AnimStateDodge*))(Il2CppBase() + 0x1C2B08))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AnimStateDodge*))(Il2CppBase() + 0x1C2BB8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AnimStateDodge*))(Il2CppBase() + 0x1C2C14))(this);
	}
	template <typename T = bool> T HandleNewAction(void* action) {
		return ((T (*)(AnimStateDodge*, void*))(Il2CppBase() + 0x1C2CEC))(this, action);
	}
	template <typename T = void> T Initialize(void* action) {
		return ((T (*)(AnimStateDodge*, void*))(Il2CppBase() + 0x1C2E38))(this, action);
	}
};
