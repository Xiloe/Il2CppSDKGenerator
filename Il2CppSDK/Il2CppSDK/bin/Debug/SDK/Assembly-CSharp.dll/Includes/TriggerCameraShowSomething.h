#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerCameraShowSomething
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& WayPoints() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& DisableAfterUse() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(TriggerCameraShowSomething*))(Il2CppBase() + 0x2728D8))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(TriggerCameraShowSomething*))(Il2CppBase() + 0x2728E0))(this);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(TriggerCameraShowSomething*))(Il2CppBase() + 0x272D58))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(TriggerCameraShowSomething*))(Il2CppBase() + 0x2731D0))(this);
	}
};
