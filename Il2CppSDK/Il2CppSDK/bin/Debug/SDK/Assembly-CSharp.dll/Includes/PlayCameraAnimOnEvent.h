#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayCameraAnimOnEvent
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& CutsceneCamera() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& CameraAnim() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& FadeOutTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& FadeInTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& LeaveTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& StartTransform() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<void*>*> T& OnGameEvents() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PlayCameraAnimOnEvent*))(Il2CppBase() + 0x1F33A4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PlayCameraAnimOnEvent*))(Il2CppBase() + 0x1F3460))(this);
	}
	template <typename T = void> T EventHandler(Il2CppString* name, void* state) {
		return ((T (*)(PlayCameraAnimOnEvent*, Il2CppString*, void*))(Il2CppBase() + 0x1F3798))(this, name, state);
	}
	template <typename T = void*> T PlayCutscene() {
		return ((T (*)(PlayCameraAnimOnEvent*))(Il2CppBase() + 0x1F3A38))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(PlayCameraAnimOnEvent*))(Il2CppBase() + 0x1F3AE4))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(PlayCameraAnimOnEvent*))(Il2CppBase() + 0x1F3AE8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PlayCameraAnimOnEvent*))(Il2CppBase() + 0x1F3AEC))(this);
	}
};
