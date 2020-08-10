#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnSetting
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> T& probability() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SpawnSetting*))(Il2CppBase() + 0x253D94))(this);
	}
};
