#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BoundsExtension
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78984);
	}
	// Fields
	template <typename T = Il2CppVector3> static T& InvalidSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E3B88))(0);
	}
	template <typename T = bool> static T IsValid(void* B) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E3C48))(0, B);
	}
	template <typename T = void> static T Invalidate(void* B) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E3CA4))(0, B);
	}
	template <typename T = void> static T MergeTo(void* B, void* Target) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x1E3D88))(0, B, Target);
	}
};
