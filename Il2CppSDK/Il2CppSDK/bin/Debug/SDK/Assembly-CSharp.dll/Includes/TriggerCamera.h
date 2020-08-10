#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerCamera
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(TriggerCamera*))(Il2CppBase() + 0x2728C8))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(TriggerCamera*))(Il2CppBase() + 0x2728D0))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(TriggerCamera*))(Il2CppBase() + 0x2728D4))(this);
	}
};
