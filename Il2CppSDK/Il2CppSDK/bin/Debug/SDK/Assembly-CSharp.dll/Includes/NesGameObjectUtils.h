#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NesGameObjectUtils
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(NesGameObjectUtils*))(Il2CppBase() + 0x411BC8))(this);
	}
	template <typename T = void> T Enable(bool enable) {
		return ((T (*)(NesGameObjectUtils*, bool))(Il2CppBase() + 0x411BD0))(this, enable);
	}
	template <typename T = void> T PlayAnim() {
		return ((T (*)(NesGameObjectUtils*))(Il2CppBase() + 0x411C08))(this);
	}
};
