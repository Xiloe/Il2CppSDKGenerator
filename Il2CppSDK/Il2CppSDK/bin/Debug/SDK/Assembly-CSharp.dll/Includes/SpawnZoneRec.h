#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnZoneRec
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_SpawnZone() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<void*>*> T& m_SpawnPoints() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_SpawnCounter() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_LastSpawnTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor(void* Zone) {
		return ((T (*)(SpawnZoneRec*, void*))(Il2CppBase() + 0x24E2FC))(this, Zone);
	}
};
