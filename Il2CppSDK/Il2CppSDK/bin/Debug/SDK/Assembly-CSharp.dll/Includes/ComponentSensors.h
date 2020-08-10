#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ComponentSensors
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> T& Sensors() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Owner() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& UpdateTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& UpdateSensorIndex() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ComponentSensors*))(Il2CppBase() + 0x2E1458))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ComponentSensors*))(Il2CppBase() + 0x2E14F8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ComponentSensors*))(Il2CppBase() + 0x2E1580))(this);
	}
	template <typename T = void> T AddSensor(void* sensorType, bool activate) {
		return ((T (*)(ComponentSensors*, void*, bool))(Il2CppBase() + 0x2E16E0))(this, sensorType, activate);
	}
	template <typename T = void> T RemoveSensor(void* sensorType) {
		return ((T (*)(ComponentSensors*, void*))(Il2CppBase() + 0x2E1768))(this, sensorType);
	}
	template <typename T = void> T RemoveAllSensors() {
		return ((T (*)(ComponentSensors*))(Il2CppBase() + 0x2E17B0))(this);
	}
	template <typename T = void> T ActivateSensor(void* sensorType) {
		return ((T (*)(ComponentSensors*, void*))(Il2CppBase() + 0x2E1810))(this, sensorType);
	}
	template <typename T = void> T ActivateAllSensors() {
		return ((T (*)(ComponentSensors*))(Il2CppBase() + 0x2E19CC))(this);
	}
	template <typename T = void> T DeactivateSensor(void* sensorType) {
		return ((T (*)(ComponentSensors*, void*))(Il2CppBase() + 0x2E1A64))(this, sensorType);
	}
	template <typename T = void> T DeactivateAllSensors() {
		return ((T (*)(ComponentSensors*))(Il2CppBase() + 0x2E1B48))(this);
	}
};
