#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CameraUpscaling
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = bool> T& m_EnableUpscaling() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_ReduceScreenSizeByPercent() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_RenderTex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_GameObj() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_AuxCam() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_MinRTSize() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CameraUpscaling*))(Il2CppBase() + 0x28972C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CameraUpscaling*))(Il2CppBase() + 0x289744))(this);
	}
	template <typename T = bool> T Init(int32_t width, int32_t height) {
		return ((T (*)(CameraUpscaling*, int32_t, int32_t))(Il2CppBase() + 0x289B44))(this, width, height);
	}
};
