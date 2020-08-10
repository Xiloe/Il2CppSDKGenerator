#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DummyColliderBox
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppVector3> T& Center() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& Size() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& Box() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(DummyColliderBox*))(Il2CppBase() + 0x307D90))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DummyColliderBox*))(Il2CppBase() + 0x307E5C))(this);
	}
	template <typename T = void> T UpdateTransform() {
		return ((T (*)(DummyColliderBox*))(Il2CppBase() + 0x307F28))(this);
	}
	template <typename T = void> T Scale(float Multiplier) {
		return ((T (*)(DummyColliderBox*, float))(Il2CppBase() + 0x308124))(this, Multiplier);
	}
	template <typename T = int32_t> T RayCast(Il2CppVector3 Origin, Il2CppVector3 Direction, Il2CppArray<void*>* Hits) {
		return ((T (*)(DummyColliderBox*, Il2CppVector3, Il2CppVector3, Il2CppArray<void*>*))(Il2CppBase() + 0x3081B4))(this, Origin, Direction, Hits);
	}
	template <typename T = int32_t> T SphereCast(Il2CppVector3 Origin, Il2CppVector3 Direction, float Radius, Il2CppArray<void*>* Hits) {
		return ((T (*)(DummyColliderBox*, Il2CppVector3, Il2CppVector3, float, Il2CppArray<void*>*))(Il2CppBase() + 0x30824C))(this, Origin, Direction, Radius, Hits);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(DummyColliderBox*))(Il2CppBase() + 0x3082FC))(this);
	}
};
