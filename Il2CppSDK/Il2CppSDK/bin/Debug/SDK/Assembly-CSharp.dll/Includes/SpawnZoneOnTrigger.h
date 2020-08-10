#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnZoneOnTrigger
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SpawnZoneOnTrigger*))(Il2CppBase() + 0x256D18))(this);
	}
	template <typename T = void> T OnTriggerEnter(void* other) {
		return ((T (*)(SpawnZoneOnTrigger*, void*))(Il2CppBase() + 0x256D1C))(this, other);
	}
};
