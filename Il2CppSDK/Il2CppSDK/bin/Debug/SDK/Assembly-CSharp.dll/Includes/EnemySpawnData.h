#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnemySpawnData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_Prob() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EnemySpawnData*))(Il2CppBase() + 0x24E844))(this);
	}
};
