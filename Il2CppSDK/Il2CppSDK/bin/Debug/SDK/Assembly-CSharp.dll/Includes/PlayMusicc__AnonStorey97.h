#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMusiccAnonStorey97
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& inMusicName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PlayMusiccAnonStorey97*))(Il2CppBase() + 0x40D82C))(this);
	}
	template <typename T = bool> T m__3(void* item) {
		return ((T (*)(PlayMusiccAnonStorey97*, void*))(Il2CppBase() + 0x40DEB4))(this, item);
	}
};
