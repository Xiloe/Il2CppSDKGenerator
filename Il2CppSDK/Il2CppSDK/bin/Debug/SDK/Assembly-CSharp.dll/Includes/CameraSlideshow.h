#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CameraSlideshow
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& fadeWIdget() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& fadeTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<void*>*> T& animName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& currentAnim() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& targetFadeTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& fade() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CameraSlideshow*))(Il2CppBase() + 0x1E6D68))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CameraSlideshow*))(Il2CppBase() + 0x1E6D78))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(CameraSlideshow*))(Il2CppBase() + 0x1E725C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(CameraSlideshow*))(Il2CppBase() + 0x1E7308))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(CameraSlideshow*))(Il2CppBase() + 0x1E7390))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(CameraSlideshow*))(Il2CppBase() + 0x1E7418))(this);
	}
	template <typename T = void> T FadeIn() {
		return ((T (*)(CameraSlideshow*))(Il2CppBase() + 0x1E74F8))(this);
	}
	template <typename T = void> T FadeOut() {
		return ((T (*)(CameraSlideshow*))(Il2CppBase() + 0x1E7564))(this);
	}
	template <typename T = void*> T Slideshow() {
		return ((T (*)(CameraSlideshow*))(Il2CppBase() + 0x1E75D0))(this);
	}
};
