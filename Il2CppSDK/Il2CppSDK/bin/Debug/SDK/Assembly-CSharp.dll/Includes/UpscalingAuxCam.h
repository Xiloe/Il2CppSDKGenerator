#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpscalingAuxCam
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_RenderTex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(UpscalingAuxCam*))(Il2CppBase() + 0x279D50))(this);
	}
	template <typename T = void> T OnRenderImage(void* src, void* dst) {
		return ((T (*)(UpscalingAuxCam*, void*, void*))(Il2CppBase() + 0x279D58))(this, src, dst);
	}
};
