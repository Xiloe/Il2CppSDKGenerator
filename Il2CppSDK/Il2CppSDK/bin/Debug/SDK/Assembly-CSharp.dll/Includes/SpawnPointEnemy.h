#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnPointEnemy
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78CA4);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> T& m_AllowedTypes() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_CheckVisibility() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SpawnPointEnemy*))(Il2CppBase() + 0x24F1F0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(SpawnPointEnemy*))(Il2CppBase() + 0x24F1F8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SpawnPointEnemy*))(Il2CppBase() + 0x24F204))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(SpawnPointEnemy*))(Il2CppBase() + 0x24F208))(this);
	}
};
