#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Roots
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Roots*))(Il2CppBase() + 0x221EEC))(this);
	}
	template <typename T = float> static T Linear(float A, float B) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x221EF4))(0, A, B);
	}
	template <typename T = int32_t> static T Quadratic(float A, float B, float C, Il2CppArray<void*>* X) {
		return ((T (*)(void *, float, float, float, Il2CppArray<void*>*))(Il2CppBase() + 0x221FD0))(0, A, B, C, X);
	}
};
