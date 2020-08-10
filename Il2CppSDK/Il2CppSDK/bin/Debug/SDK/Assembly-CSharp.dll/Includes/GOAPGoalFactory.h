#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPGoalFactory
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GOAPGoalFactory*))(Il2CppBase() + 0x34C554))(this);
	}
	template <typename T = void*> static T Create(void* type, void* owner) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x34C55C))(0, type, owner);
	}
};
