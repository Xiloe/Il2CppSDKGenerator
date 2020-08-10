#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAPExtensions
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void*> static T ToProduct(void* this_) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3BF52C))(0, this_);
	}
	template <typename T = void*> static T ToBillingProduct(void* this_) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3BE3D4))(0, this_);
	}
};
