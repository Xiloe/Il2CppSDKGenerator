#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddItemUsecAnonStoreyAD
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AddItemUsecAnonStoreyAD*))(Il2CppBase() + 0x205668))(this);
	}
	template <typename T = bool> T m__46(void* p) {
		return ((T (*)(AddItemUsecAnonStoreyAD*, void*))(Il2CppBase() + 0x206BDC))(this, p);
	}
	template <typename T = bool> T m__47(void* p) {
		return ((T (*)(AddItemUsecAnonStoreyAD*, void*))(Il2CppBase() + 0x206BF0))(this, p);
	}
};
