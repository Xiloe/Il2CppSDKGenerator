#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InteractionObjectUse
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& AnimationClip() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& Audio() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<void*>*> T& HideGameObjects() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<void*>*> T& ShowGameObjects() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& DisableAfterUse() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& Visual() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<void*>*> T& GameEvents() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(InteractionObjectUse*))(Il2CppBase() + 0x3C81E0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(InteractionObjectUse*))(Il2CppBase() + 0x3C8308))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(InteractionObjectUse*))(Il2CppBase() + 0x3C83D4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(InteractionObjectUse*))(Il2CppBase() + 0x3C84A0))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(InteractionObjectUse*))(Il2CppBase() + 0x3C84A4))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(InteractionObjectUse*))(Il2CppBase() + 0x3C84A8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(InteractionObjectUse*))(Il2CppBase() + 0x3C84AC))(this);
	}
	template <typename T = void> T DoInteraction() {
		return ((T (*)(InteractionObjectUse*))(Il2CppBase() + 0x3C8588))(this);
	}
};
