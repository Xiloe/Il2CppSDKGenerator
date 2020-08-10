#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnZone
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SpawnZone*))(Il2CppBase() + 0x253E34))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(SpawnZone*))(Il2CppBase() + 0x253F30))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(SpawnZone*))(Il2CppBase() + 0x254010))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(SpawnZone*))(Il2CppBase() + 0x2542D4))(this);
	}
	template <typename T = bool> T IsActivatedWithGameZone() {
		return ((T (*)(SpawnZone*))(Il2CppBase() + 0x254494))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(SpawnZone*))(Il2CppBase() + 0x25449C))(this);
	}
	template <typename T = void> T IGameZoneChild_Reset() {
		return ((T (*)(SpawnZone*))(Il2CppBase() + 0x2544A0))(this);
	}
};
