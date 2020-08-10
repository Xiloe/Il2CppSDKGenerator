#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Director() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_EnemiesLimit() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<void*>*> T& m_Mods() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SpawnData*))(Il2CppBase() + 0x24E924))(this);
	}
};
