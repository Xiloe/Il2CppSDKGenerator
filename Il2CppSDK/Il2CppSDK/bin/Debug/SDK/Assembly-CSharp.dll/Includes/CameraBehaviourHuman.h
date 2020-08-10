#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CameraBehaviourHuman
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& Owner() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& State() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<void*, void*>*> T& States() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CameraBehaviourHuman*))(Il2CppBase() + 0x1E6824))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CameraBehaviourHuman*))(Il2CppBase() + 0x1E68D0))(this);
	}
	template <typename T = void*> T GetCameraWorldTransform() {
		return ((T (*)(CameraBehaviourHuman*))(Il2CppBase() + 0x1E6BB8))(this);
	}
	template <typename T = void*> T GetCameraFPVTransform() {
		return ((T (*)(CameraBehaviourHuman*))(Il2CppBase() + 0x1E6C0C))(this);
	}
	template <typename T = void> T Activate(void* spawn) {
		return ((T (*)(CameraBehaviourHuman*, void*))(Il2CppBase() + 0x1E6C60))(this, spawn);
	}
	template <typename T = void> T HandleAction(void* a) {
		return ((T (*)(CameraBehaviourHuman*, void*))(Il2CppBase() + 0x1E6D60))(this, a);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CameraBehaviourHuman*))(Il2CppBase() + 0x1E6D64))(this);
	}
};
