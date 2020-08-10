#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RegenerateFriendListcAnonStorey9E
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> T& friends() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(RegenerateFriendListcAnonStorey9E*))(Il2CppBase() + 0x31D448))(this);
	}
};
