#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InteractionWeaponBox
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& Weapon() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& WeaponVisual() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& SoundTake() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& CutsceneCamera() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& CameraAnim() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& FadeOutTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& FadeInTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& AnimOpen() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& AnimClose() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> T& SoundOpen() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& SoundClose() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& ParticleDelay() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& IsInteractionFinished() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(InteractionWeaponBox*))(Il2CppBase() + 0x3CBCB8))(this);
	}
	template <typename T = bool> T get_IsInteractionFinished() {
		return ((T (*)(InteractionWeaponBox*))(Il2CppBase() + 0x3CBD68))(this);
	}
	template <typename T = void> T set_IsInteractionFinished(bool value) {
		return ((T (*)(InteractionWeaponBox*, bool))(Il2CppBase() + 0x3CBD70))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(InteractionWeaponBox*))(Il2CppBase() + 0x3CBD78))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(InteractionWeaponBox*))(Il2CppBase() + 0x3CBE58))(this);
	}
	template <typename T = void> T DoInteraction() {
		return ((T (*)(InteractionWeaponBox*))(Il2CppBase() + 0x3CBE70))(this);
	}
	template <typename T = void*> T PlayCutscene() {
		return ((T (*)(InteractionWeaponBox*))(Il2CppBase() + 0x3CBFBC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(InteractionWeaponBox*))(Il2CppBase() + 0x3CC068))(this);
	}
	template <typename T = void> T PlayParticle() {
		return ((T (*)(InteractionWeaponBox*))(Il2CppBase() + 0x3CC198))(this);
	}
};
