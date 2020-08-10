#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnemySettings
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EnemySettings*))(Il2CppBase() + 0x311EF0))(this);
	}
	template <typename T = Il2CppList<void*>*> T get_data() {
		return ((T (*)(EnemySettings*))(Il2CppBase() + 0x311F9C))(this);
	}
	template <typename T = void*> T GetEnemyInfo(void* agentType) {
		return ((T (*)(EnemySettings*, void*))(Il2CppBase() + 0x311FA4))(this, agentType);
	}
};
