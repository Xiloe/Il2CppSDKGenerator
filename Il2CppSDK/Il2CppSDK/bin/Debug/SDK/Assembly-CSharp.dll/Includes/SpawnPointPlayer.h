#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnPointPlayer
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD797A0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SpawnPointPlayer*))(Il2CppBase() + 0x24F2C8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(SpawnPointPlayer*))(Il2CppBase() + 0x24F2D0))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(SpawnPointPlayer*))(Il2CppBase() + 0x24F348))(this);
	}
	template <typename T = void> T UseAsStart() {
		return ((T (*)(SpawnPointPlayer*))(Il2CppBase() + 0x24F388))(this);
	}
};
