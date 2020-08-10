#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnemyData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_MaxSpawnProb() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& m_Prefabs() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EnemyData*))(Il2CppBase() + 0x1A9E40))(this);
	}
};
