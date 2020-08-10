#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SendEventOnEvents
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& GameEvents() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<void*>*> T& OnGameEvents() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SendEventOnEvents*))(Il2CppBase() + 0x22DB4C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SendEventOnEvents*))(Il2CppBase() + 0x22DC2C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(SendEventOnEvents*))(Il2CppBase() + 0x22DC30))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(SendEventOnEvents*))(Il2CppBase() + 0x22DF9C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SendEventOnEvents*))(Il2CppBase() + 0x22E480))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(SendEventOnEvents*))(Il2CppBase() + 0x22E484))(this);
	}
	template <typename T = void> T TestEvents() {
		return ((T (*)(SendEventOnEvents*))(Il2CppBase() + 0x22DFA0))(this);
	}
	template <typename T = void> T EventHandler(Il2CppString* name, void* state) {
		return ((T (*)(SendEventOnEvents*, Il2CppString*, void*))(Il2CppBase() + 0x22E488))(this, name, state);
	}
};
