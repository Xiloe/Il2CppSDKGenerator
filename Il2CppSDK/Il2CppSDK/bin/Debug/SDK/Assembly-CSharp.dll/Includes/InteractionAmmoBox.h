#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InteractionAmmoBox
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& RefreshTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& GameObject() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(InteractionAmmoBox*))(Il2CppBase() + 0x3C4970))(this);
	}
	template <typename T = void*> T get_GameObject() {
		return ((T (*)(InteractionAmmoBox*))(Il2CppBase() + 0x3C4ABC))(this);
	}
	template <typename T = void> T set_GameObject(void* value) {
		return ((T (*)(InteractionAmmoBox*, void*))(Il2CppBase() + 0x3C4AC4))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(InteractionAmmoBox*))(Il2CppBase() + 0x3C4ACC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(InteractionAmmoBox*))(Il2CppBase() + 0x3C4AF8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(InteractionAmmoBox*))(Il2CppBase() + 0x3C4F90))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(InteractionAmmoBox*))(Il2CppBase() + 0x3C4F9C))(this);
	}
	template <typename T = void> T DoInteraction() {
		return ((T (*)(InteractionAmmoBox*))(Il2CppBase() + 0x3C50DC))(this);
	}
	template <typename T = void> T Refreshed() {
		return ((T (*)(InteractionAmmoBox*))(Il2CppBase() + 0x3C53B8))(this);
	}
};
