#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnemyTypeData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_Mods() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_SpawnProb() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_SpawnProbAccum() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_SpawnCounter() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EnemyTypeData*))(Il2CppBase() + 0x24AC34))(this);
	}
};
