#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DummyColliderCapsule
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppVector3> T& Center() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Length() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& Radius() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& Axis() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& Capsule() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(DummyColliderCapsule*))(Il2CppBase() + 0x3084A8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DummyColliderCapsule*))(Il2CppBase() + 0x308584))(this);
	}
	template <typename T = void> T UpdateTransform() {
		return ((T (*)(DummyColliderCapsule*))(Il2CppBase() + 0x3086FC))(this);
	}
	template <typename T = void> T Scale(float Multiplier) {
		return ((T (*)(DummyColliderCapsule*, float))(Il2CppBase() + 0x308914))(this, Multiplier);
	}
	template <typename T = int32_t> T RayCast(Il2CppVector3 Origin, Il2CppVector3 Direction, Il2CppArray<void*>* Hits) {
		return ((T (*)(DummyColliderCapsule*, Il2CppVector3, Il2CppVector3, Il2CppArray<void*>*))(Il2CppBase() + 0x308984))(this, Origin, Direction, Hits);
	}
	template <typename T = int32_t> T SphereCast(Il2CppVector3 Origin, Il2CppVector3 Direction, float Radius, Il2CppArray<void*>* Hits) {
		return ((T (*)(DummyColliderCapsule*, Il2CppVector3, Il2CppVector3, float, Il2CppArray<void*>*))(Il2CppBase() + 0x308A1C))(this, Origin, Direction, Radius, Hits);
	}
	template <typename T = float> T GetLength() {
		return ((T (*)(DummyColliderCapsule*))(Il2CppBase() + 0x308634))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(DummyColliderCapsule*))(Il2CppBase() + 0x308ACC))(this);
	}
};
