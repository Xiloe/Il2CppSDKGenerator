#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAPRequestPurchasecAnonStoreyA7
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& guid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(IAPRequestPurchasecAnonStoreyA7*))(Il2CppBase() + 0x2434A8))(this);
	}
	template <typename T = bool> T m__3D(void* p) {
		return ((T (*)(IAPRequestPurchasecAnonStoreyA7*, void*))(Il2CppBase() + 0x245720))(this, p);
	}
};
