#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SensorTest
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79700);
	}
	// Fields
	template <typename T = void*> T& MyEnemy() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(SensorTest*, void*))(Il2CppBase() + 0x2314B0))(this, owner);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SensorTest*))(Il2CppBase() + 0x232390))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SensorTest*))(Il2CppBase() + 0x232C20))(this);
	}
	template <typename T = void> T SendLostEvent(void* target) {
		return ((T (*)(SensorTest*, void*))(Il2CppBase() + 0x232DD4))(this, target);
	}
	template <typename T = void> T SendSeeEvent(void* target) {
		return ((T (*)(SensorTest*, void*))(Il2CppBase() + 0x232A18))(this, target);
	}
	template <typename T = float> T GetSqrSpeed(void* obj) {
		return ((T (*)(SensorTest*, void*))(Il2CppBase() + 0x232F78))(this, obj);
	}
	template <typename T = void*> T CheckForBait() {
		return ((T (*)(SensorTest*))(Il2CppBase() + 0x232514))(this);
	}
};
