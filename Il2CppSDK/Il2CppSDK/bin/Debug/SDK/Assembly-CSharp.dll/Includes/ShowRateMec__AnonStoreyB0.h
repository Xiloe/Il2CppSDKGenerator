#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowRateMecAnonStoreyB0
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ShowRateMecAnonStoreyB0*))(Il2CppBase() + 0x3E0B24))(this);
	}
	template <typename T = void> T m__50(void* action) {
		return ((T (*)(ShowRateMecAnonStoreyB0*, void*))(Il2CppBase() + 0x3E0D90))(this, action);
	}
};
