#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EItemIDComparer
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78CB8);
	}
	// Fields
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EItemIDComparer*))(Il2CppBase() + 0x30D710))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x30D718))(0);
	}
	template <typename T = bool> T Equals(void* x, void* y) {
		return ((T (*)(EItemIDComparer*, void*, void*))(Il2CppBase() + 0x30D7AC))(this, x, y);
	}
	template <typename T = int32_t> T GetHashCode(void* x) {
		return ((T (*)(EItemIDComparer*, void*))(Il2CppBase() + 0x30D7BC))(this, x);
	}
};
