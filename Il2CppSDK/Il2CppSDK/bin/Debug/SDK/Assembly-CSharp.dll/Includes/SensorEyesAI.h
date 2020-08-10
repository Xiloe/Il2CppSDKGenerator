#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SensorEyesAI
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD796F8);
	}
	// Fields
	template <typename T = void*> T& MyEnemy() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& NextImportantObjCheckTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(SensorEyesAI*, void*))(Il2CppBase() + 0x22E68C))(this, owner);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SensorEyesAI*))(Il2CppBase() + 0x22E818))(this);
	}
	template <typename T = void> T CheckContestValid() {
		return ((T (*)(SensorEyesAI*))(Il2CppBase() + 0x2303CC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SensorEyesAI*))(Il2CppBase() + 0x2304A8))(this);
	}
	template <typename T = void> T SendLostEvent(void* target) {
		return ((T (*)(SensorEyesAI*, void*))(Il2CppBase() + 0x23003C))(this, target);
	}
	template <typename T = void> T SendSeeEvent(void* target) {
		return ((T (*)(SensorEyesAI*, void*))(Il2CppBase() + 0x2301E0))(this, target);
	}
	template <typename T = float> static T GetSqrSpeed(void* obj) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x230808))(0, obj);
	}
	template <typename T = float> static T GetSqrDistance(void* obj, Il2CppVector3 pos) {
		return ((T (*)(void *, void*, Il2CppVector3))(Il2CppBase() + 0x230934))(0, obj, pos);
	}
	template <typename T = void*> T CompareDistance(void* first, void* second) {
		return ((T (*)(SensorEyesAI*, void*, void*))(Il2CppBase() + 0x230A10))(this, first, second);
	}
	template <typename T = void*> T CheckForBait() {
		return ((T (*)(SensorEyesAI*))(Il2CppBase() + 0x22F5AC))(this);
	}
	template <typename T = void*> T CheckForDestructibleObject() {
		return ((T (*)(SensorEyesAI*))(Il2CppBase() + 0x22F980))(this);
	}
	template <typename T = bool> T IsPointReachable(Il2CppVector3 pos, float dist) {
		return ((T (*)(SensorEyesAI*, Il2CppVector3, float))(Il2CppBase() + 0x230D14))(this, pos, dist);
	}
};
