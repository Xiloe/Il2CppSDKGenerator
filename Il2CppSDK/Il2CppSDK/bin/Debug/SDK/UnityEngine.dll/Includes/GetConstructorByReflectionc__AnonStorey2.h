#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetConstructorByReflectioncAnonStorey2
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& constructorInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GetConstructorByReflectioncAnonStorey2*))(Il2CppBase() + 0x8D3B88))(this);
	}
	template <typename T = void*> T m__6(Il2CppArray<void*>* args) {
		return ((T (*)(GetConstructorByReflectioncAnonStorey2*, Il2CppArray<void*>*))(Il2CppBase() + 0x8D3FE4))(this, args);
	}
};
