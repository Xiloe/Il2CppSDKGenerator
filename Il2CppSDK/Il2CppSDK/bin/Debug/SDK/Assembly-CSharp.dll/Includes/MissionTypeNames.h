#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MissionTypeNames
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78B48);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> static T& name() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MissionTypeNames*))(Il2CppBase() + 0x40CE68))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x40CE70))(0);
	}
};
