#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SensorPosition
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD796FC);
	}
	// Fields
	template <typename T = void*> T& NavMeshHit() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& PosIndex() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(SensorPosition*, void*))(Il2CppBase() + 0x2313AC))(this, owner);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SensorPosition*))(Il2CppBase() + 0x231618))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SensorPosition*))(Il2CppBase() + 0x231FA0))(this);
	}
	template <typename T = void> T DebugDraw() {
		return ((T (*)(SensorPosition*))(Il2CppBase() + 0x231FAC))(this);
	}
};
