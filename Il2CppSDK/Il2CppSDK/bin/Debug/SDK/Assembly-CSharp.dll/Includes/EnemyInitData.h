#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnemyInitData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Mods() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EnemyInitData*))(Il2CppBase() + 0x24E83C))(this);
	}
};
