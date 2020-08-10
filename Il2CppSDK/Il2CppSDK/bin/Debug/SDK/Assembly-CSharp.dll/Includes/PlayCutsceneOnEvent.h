#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayCutsceneOnEvent
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
	template <typename T = Il2CppList<void*>*> T& Actors() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<void*>*> T& OnGameEvents() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& sendEvents() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PlayCutsceneOnEvent*))(Il2CppBase() + 0x1F4560))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PlayCutsceneOnEvent*))(Il2CppBase() + 0x1F4674))(this);
	}
	template <typename T = void> T EventHandler(Il2CppString* name, void* state) {
		return ((T (*)(PlayCutsceneOnEvent*, Il2CppString*, void*))(Il2CppBase() + 0x1F49AC))(this, name, state);
	}
	template <typename T = void*> T PlayCutscene() {
		return ((T (*)(PlayCutsceneOnEvent*))(Il2CppBase() + 0x1F4C4C))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(PlayCutsceneOnEvent*))(Il2CppBase() + 0x1F4CF8))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(PlayCutsceneOnEvent*))(Il2CppBase() + 0x1F4CFC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PlayCutsceneOnEvent*))(Il2CppBase() + 0x1F4D00))(this);
	}
};
