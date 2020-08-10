#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnZoneOnEvent
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& GameEvents() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SpawnZoneOnEvent*))(Il2CppBase() + 0x2566F0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(SpawnZoneOnEvent*))(Il2CppBase() + 0x256798))(this);
	}
	template <typename T = void> T EventHandler(Il2CppString* name, void* state) {
		return ((T (*)(SpawnZoneOnEvent*, Il2CppString*, void*))(Il2CppBase() + 0x256A7C))(this, name, state);
	}
};
