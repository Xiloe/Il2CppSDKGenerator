#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DummyColliderSphere
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppVector3> T& Center() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Radius() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& Sphere() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(DummyColliderSphere*))(Il2CppBase() + 0x30AA78))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DummyColliderSphere*))(Il2CppBase() + 0x30AB24))(this);
	}
	template <typename T = void> T UpdateTransform() {
		return ((T (*)(DummyColliderSphere*))(Il2CppBase() + 0x30ABC4))(this);
	}
	template <typename T = void> T Scale(float Multiplier) {
		return ((T (*)(DummyColliderSphere*, float))(Il2CppBase() + 0x30AC9C))(this, Multiplier);
	}
	template <typename T = int32_t> T RayCast(Il2CppVector3 Origin, Il2CppVector3 Direction, Il2CppArray<void*>* Hits) {
		return ((T (*)(DummyColliderSphere*, Il2CppVector3, Il2CppVector3, Il2CppArray<void*>*))(Il2CppBase() + 0x30ACDC))(this, Origin, Direction, Hits);
	}
	template <typename T = int32_t> T SphereCast(Il2CppVector3 Origin, Il2CppVector3 Direction, float Radius, Il2CppArray<void*>* Hits) {
		return ((T (*)(DummyColliderSphere*, Il2CppVector3, Il2CppVector3, float, Il2CppArray<void*>*))(Il2CppBase() + 0x30AD74))(this, Origin, Direction, Radius, Hits);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(DummyColliderSphere*))(Il2CppBase() + 0x30AE24))(this);
	}
};
