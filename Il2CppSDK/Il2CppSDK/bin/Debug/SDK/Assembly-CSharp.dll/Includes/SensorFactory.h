#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SensorFactory
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SensorFactory*))(Il2CppBase() + 0x231270))(this);
	}
	template <typename T = void*> static T Create(void* sensorType, void* owner) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x231278))(0, sensorType, owner);
	}
};
