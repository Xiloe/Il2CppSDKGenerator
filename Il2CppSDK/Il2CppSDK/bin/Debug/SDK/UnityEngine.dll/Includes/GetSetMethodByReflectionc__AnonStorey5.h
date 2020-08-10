#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetSetMethodByReflectioncAnonStorey5
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
		return ((T (*)(GetSetMethodByReflectioncAnonStorey5*))(Il2CppBase() + 0x8D3FC0))(this);
	}
	template <typename T = void> T m__9(void* source, void* value) {
		return ((T (*)(GetSetMethodByReflectioncAnonStorey5*, void*, void*))(Il2CppBase() + 0x8D4150))(this, source, value);
	}
};
