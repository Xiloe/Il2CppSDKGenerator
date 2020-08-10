#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SensorBase
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& _Owner() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& Active() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(SensorBase*, void*))(Il2CppBase() + 0x22E660))(this, owner);
	}
	template <typename T = void*> T get_Owner() {
		return ((T (*)(SensorBase*))(Il2CppBase() + 0x22E680))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SensorBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SensorBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T DebugDraw() {
		return ((T (*)(SensorBase*))(Il2CppBase() + 0x22E688))(this);
	}
};
