#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnemyMask
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_FadeOutMaterial() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_CacheIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EnemyMask*))(Il2CppBase() + 0x31038C))(this);
	}
};
