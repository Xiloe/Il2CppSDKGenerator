#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ComponentWeaponsAI
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ComponentWeaponsAI*))(Il2CppBase() + 0x2E3018))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(ComponentWeaponsAI*))(Il2CppBase() + 0x2E3020))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(ComponentWeaponsAI*))(Il2CppBase() + 0x2E30B4))(this);
	}
};
