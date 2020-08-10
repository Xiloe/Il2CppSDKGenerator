#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PostFXTracking
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = bool> static T& RefractionFXActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PostFXTracking*))(Il2CppBase() + 0x209FF8))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x20A000))(0);
	}
};
