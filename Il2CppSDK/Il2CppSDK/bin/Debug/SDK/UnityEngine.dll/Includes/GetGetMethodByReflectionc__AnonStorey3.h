#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetGetMethodByReflectioncAnonStorey3
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& methodInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GetGetMethodByReflectioncAnonStorey3*))(Il2CppBase() + 0x8D3DA0))(this);
	}
	template <typename T = void*> T m__7(void* source) {
		return ((T (*)(GetGetMethodByReflectioncAnonStorey3*, void*))(Il2CppBase() + 0x8D4010))(this, source);
	}
};
