#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetSetMethodByReflectioncAnonStorey6
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
		return ((T (*)(GetSetMethodByReflectioncAnonStorey6*))(Il2CppBase() + 0x8D3FDC))(this);
	}
	template <typename T = void> T m__A(void* source, void* value) {
		return ((T (*)(GetSetMethodByReflectioncAnonStorey6*, void*, void*))(Il2CppBase() + 0x8D4260))(this, source, value);
	}
};
