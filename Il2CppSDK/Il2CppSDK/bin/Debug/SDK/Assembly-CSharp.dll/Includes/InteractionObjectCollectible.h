#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InteractionObjectCollectible
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& colectibleID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& textTimeout() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& Visual() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& AnimationClip() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& Audio() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& GameObject() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(InteractionObjectCollectible*))(Il2CppBase() + 0x3C5E94))(this);
	}
	template <typename T = void*> T get_GameObject() {
		return ((T (*)(InteractionObjectCollectible*))(Il2CppBase() + 0x3C5F40))(this);
	}
	template <typename T = void> T set_GameObject(void* value) {
		return ((T (*)(InteractionObjectCollectible*, void*))(Il2CppBase() + 0x3C5F48))(this, value);
	}
	template <typename T = Il2CppString*> static T GetCollectibleName(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3C5F50))(0, id);
	}
	template <typename T = bool> static T CollectibleFound(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3C603C))(0, id);
	}
	template <typename T = void> static T ResetCollectiblesSave() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C6068))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(InteractionObjectCollectible*))(Il2CppBase() + 0x3C60BC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(InteractionObjectCollectible*))(Il2CppBase() + 0x3C61A8))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(InteractionObjectCollectible*))(Il2CppBase() + 0x3C6854))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(InteractionObjectCollectible*))(Il2CppBase() + 0x3C689C))(this);
	}
	template <typename T = void> T DoInteraction() {
		return ((T (*)(InteractionObjectCollectible*))(Il2CppBase() + 0x3C6934))(this);
	}
	template <typename T = void> T ShowMessage() {
		return ((T (*)(InteractionObjectCollectible*))(Il2CppBase() + 0x3C6B28))(this);
	}
	template <typename T = void> T HideAfterInteraction() {
		return ((T (*)(InteractionObjectCollectible*))(Il2CppBase() + 0x3C6B8C))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(InteractionObjectCollectible*))(Il2CppBase() + 0x3C6778))(this);
	}
	template <typename T = bool> T AlreadyFound() {
		return ((T (*)(InteractionObjectCollectible*))(Il2CppBase() + 0x3C6748))(this);
	}
	template <typename T = void> T SaveCollectible() {
		return ((T (*)(InteractionObjectCollectible*))(Il2CppBase() + 0x3C6B2C))(this);
	}
	template <typename T = void> T ReportCollectiblesProgress() {
		return ((T (*)(InteractionObjectCollectible*))(Il2CppBase() + 0x3C6B54))(this);
	}
};
