#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadingScreens
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppList<Il2CppString*>*> T& ForCity() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& ForMission() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(LoadingScreens*))(Il2CppBase() + 0x323430))(this);
	}
};
