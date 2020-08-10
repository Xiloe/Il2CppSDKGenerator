#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerGameEvent
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& GameEvents() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& CheckEnemyType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& DisableAfterUse() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& ResetEventsOnExit() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& Fired() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = void*> T& GameObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(TriggerGameEvent*))(Il2CppBase() + 0x27329C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TriggerGameEvent*))(Il2CppBase() + 0x273358))(this);
	}
	template <typename T = void> T Enable(bool enable) {
		return ((T (*)(TriggerGameEvent*, bool))(Il2CppBase() + 0x273374))(this, enable);
	}
	template <typename T = void> T OnTriggerEnter(void* other) {
		return ((T (*)(TriggerGameEvent*, void*))(Il2CppBase() + 0x273428))(this, other);
	}
	template <typename T = void> T OnTriggerExit(void* other) {
		return ((T (*)(TriggerGameEvent*, void*))(Il2CppBase() + 0x27392C))(this, other);
	}
	template <typename T = void> T Enable_1() {
		return ((T (*)(TriggerGameEvent*))(Il2CppBase() + 0x273E54))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(TriggerGameEvent*))(Il2CppBase() + 0x273F18))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(TriggerGameEvent*))(Il2CppBase() + 0x273FC8))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(TriggerGameEvent*))(Il2CppBase() + 0x274080))(this);
	}
};
