#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EventTarget
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& OnGameEvents() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& OnActivate() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& OnDeactivate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EventTarget*))(Il2CppBase() + 0x312EDC))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(EventTarget*))(Il2CppBase() + 0x312F88))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(EventTarget*))(Il2CppBase() + 0x3136B0))(this);
	}
	template <typename T = void> T EventHandler(Il2CppString* name, void* state) {
		return ((T (*)(EventTarget*, Il2CppString*, void*))(Il2CppBase() + 0x313D6C))(this, name, state);
	}
};
