#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioListenerBehaviour
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& CameraTransform() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Transform() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AudioListenerBehaviour*))(Il2CppBase() + 0x1D3E54))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AudioListenerBehaviour*))(Il2CppBase() + 0x1D3E5C))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(AudioListenerBehaviour*))(Il2CppBase() + 0x1D3EA8))(this);
	}
};
