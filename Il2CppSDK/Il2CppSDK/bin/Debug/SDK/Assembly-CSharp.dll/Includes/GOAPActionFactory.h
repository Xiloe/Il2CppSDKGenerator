#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionFactory
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GOAPActionFactory*))(Il2CppBase() + 0x3433F8))(this);
	}
	template <typename T = void*> static T Create(void* type, void* owner) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x343400))(0, type, owner);
	}
};
