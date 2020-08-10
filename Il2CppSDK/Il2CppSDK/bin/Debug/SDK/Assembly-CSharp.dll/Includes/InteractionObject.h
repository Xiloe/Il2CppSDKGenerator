#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InteractionObject
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79340);
	}
	// Fields
	template <typename T = void*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& EntryTransform() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& UserAnimationClip() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& UseLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& Animation() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& Transform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _InteractionObjectUsable() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& AllEventsAreOn() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = Il2CppList<void*>*> T& OnGameEvents() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& EndOfInteraction() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& DisableDuringFight() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& IsEnabled() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(InteractionObject*))(Il2CppBase() + 0x3C4A10))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C5454))(0);
	}
	template <typename T = bool> T get_InteractionObjectUsable() {
		return ((T (*)(InteractionObject*))(Il2CppBase() + 0x3C54D8))(this);
	}
	template <typename T = void> T set_InteractionObjectUsable(bool value) {
		return ((T (*)(InteractionObject*, bool))(Il2CppBase() + 0x3C52F8))(this, value);
	}
	template <typename T = bool> T get_DisableDuringFight() {
		return ((T (*)(InteractionObject*))(Il2CppBase() + 0x3C54E0))(this);
	}
	template <typename T = void> T set_DisableDuringFight(bool value) {
		return ((T (*)(InteractionObject*, bool))(Il2CppBase() + 0x3C4F88))(this, value);
	}
	template <typename T = Il2CppVector3> T get_Position() {
		return ((T (*)(InteractionObject*))(Il2CppBase() + 0x3C54E8))(this);
	}
	template <typename T = bool> T get_IsActive() {
		return ((T (*)(InteractionObject*))(Il2CppBase() + 0x3C5584))(this);
	}
	template <typename T = bool> T get_IsEnabled() {
		return ((T (*)(InteractionObject*))(Il2CppBase() + 0x3C55B0))(this);
	}
	template <typename T = void> T set_IsEnabled(bool value) {
		return ((T (*)(InteractionObject*, bool))(Il2CppBase() + 0x3C55B8))(this, value);
	}
	template <typename T = bool> T get_IsInteractionFinished() {
		return ((T (*)(InteractionObject*))(Il2CppBase() + 0x3C55C0))(this);
	}
	template <typename T = void> T set_IsInteractionFinished(bool value) {
		return ((T (*)(InteractionObject*, bool))(Il2CppBase() + 0x3C55FC))(this, value);
	}
	template <typename T = void*> T GetEntryTransform() {
		return ((T (*)(InteractionObject*))(Il2CppBase() + 0x3C5600))(this);
	}
	template <typename T = Il2CppString*> T GetUserAnimation() {
		return ((T (*)(InteractionObject*))(Il2CppBase() + 0x3C5608))(this);
	}
	template <typename T = float> T get_UseTime() {
		return ((T (*)(InteractionObject*))(Il2CppBase() + 0x3C5634))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(InteractionObject*))(Il2CppBase() + 0x3C4B14))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(InteractionObject*))(Il2CppBase() + 0x3C5660))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(InteractionObject*))(Il2CppBase() + 0x3C566C))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(InteractionObject*))(Il2CppBase() + 0x3C5974))(this);
	}
	template <typename T = void> T DoInteraction() {
		return ((T (*)(InteractionObject*))(Il2CppBase() + 0x3C5298))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(InteractionObject*))(Il2CppBase() + 0x3C5074))(this);
	}
	template <typename T = void> T EventHandler(Il2CppString* name, void* state) {
		return ((T (*)(InteractionObject*, Il2CppString*, void*))(Il2CppBase() + 0x3C5A2C))(this, name, state);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(InteractionObject*))(Il2CppBase() + 0x3C5DA0))(this);
	}
};
