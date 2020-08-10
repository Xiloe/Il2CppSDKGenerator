#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Player
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD787A8);
	}
	// Fields
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& HealthSegment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	// Methods
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1F63AC))(0);
	}
	template <typename T = Il2CppVector3> static T get_Pos() {
		return ((T (*)(void *))(Il2CppBase() + 0x1F6434))(0);
	}
	template <typename T = Il2CppVector3> static T get_Dir() {
		return ((T (*)(void *))(Il2CppBase() + 0x1F652C))(0);
	}
};
