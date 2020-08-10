#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpecialReward
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SpecialReward*))(Il2CppBase() + 0x256E34))(this);
	}
	template <typename T = void*> static T GenerateSpecialReward(void* type) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x256E3C))(0, type);
	}
};
