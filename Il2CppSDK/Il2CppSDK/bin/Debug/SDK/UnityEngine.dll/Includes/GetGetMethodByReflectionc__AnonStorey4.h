#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetGetMethodByReflectioncAnonStorey4
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& fieldInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GetGetMethodByReflectioncAnonStorey4*))(Il2CppBase() + 0x8D3DBC))(this);
	}
	template <typename T = void*> T m__8(void* source) {
		return ((T (*)(GetGetMethodByReflectioncAnonStorey4*, void*))(Il2CppBase() + 0x8D40F0))(this, source);
	}
};
