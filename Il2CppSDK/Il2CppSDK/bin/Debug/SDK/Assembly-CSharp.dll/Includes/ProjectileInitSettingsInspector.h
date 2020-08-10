#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProjectileInitSettingsInspector
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& Damage() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& Impuls() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ProjectileInitSettingsInspector*))(Il2CppBase() + 0x212BF4))(this);
	}
};
