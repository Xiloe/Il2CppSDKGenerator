#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InteractionObjectCutscene
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD788B4);
	}
	// Fields
	template <typename T = void*> T& Audio() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<void*>*> T& HideGameObjects() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<void*>*> T& ShowGameObjects() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& DisableAfterUse() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& CutsceneCamera() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& CameraAnim() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& FadeOutTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& FadeInTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& StartCutsceneTransform() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> T& EndCutsceneTransform() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<void*>*> T& GameEvents() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& IsInteractionFinished() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(InteractionObjectCutscene*))(Il2CppBase() + 0x3C6B90))(this);
	}
	template <typename T = float> T get_UseTime() {
		return ((T (*)(InteractionObjectCutscene*))(Il2CppBase() + 0x3C6CC8))(this);
	}
	template <typename T = bool> T get_IsInteractionFinished() {
		return ((T (*)(InteractionObjectCutscene*))(Il2CppBase() + 0x3C6D10))(this);
	}
	template <typename T = void> T set_IsInteractionFinished(bool value) {
		return ((T (*)(InteractionObjectCutscene*, bool))(Il2CppBase() + 0x3C6D18))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(InteractionObjectCutscene*))(Il2CppBase() + 0x3C6D20))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(InteractionObjectCutscene*))(Il2CppBase() + 0x3C6DD0))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(InteractionObjectCutscene*))(Il2CppBase() + 0x3C6DD4))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(InteractionObjectCutscene*))(Il2CppBase() + 0x3C6DD8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(InteractionObjectCutscene*))(Il2CppBase() + 0x3C6DDC))(this);
	}
	template <typename T = void> T DoInteraction() {
		return ((T (*)(InteractionObjectCutscene*))(Il2CppBase() + 0x3C6E74))(this);
	}
	template <typename T = void*> T PlayCutscene() {
		return ((T (*)(InteractionObjectCutscene*))(Il2CppBase() + 0x3C74F0))(this);
	}
};
