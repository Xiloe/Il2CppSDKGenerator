#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DummyCollider
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78DD4);
	}
	// Fields
	template <typename T = Il2CppColor> static T& ColOn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppColor> static T& ColOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppColor> static T& ColBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> T& m_PhysMaterial() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& TForm() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(DummyCollider*))(Il2CppBase() + 0x307900))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x307908))(0);
	}
	template <typename T = void*> T get_TForm() {
		return ((T (*)(DummyCollider*))(Il2CppBase() + 0x307A3C))(this);
	}
	template <typename T = void> T set_TForm(void* value) {
		return ((T (*)(DummyCollider*, void*))(Il2CppBase() + 0x307A44))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DummyCollider*))(Il2CppBase() + 0x307A4C))(this);
	}
	template <typename T = int32_t> T RayCast(Il2CppVector3 Origin, Il2CppVector3 Direction, Il2CppArray<void*>* Hits) {
		return ((T (*)(DummyCollider*, Il2CppVector3, Il2CppVector3, Il2CppArray<void*>*))(Il2CppBase() + 0x307D78))(this, Origin, Direction, Hits);
	}
	template <typename T = int32_t> T SphereCast(Il2CppVector3 Origin, Il2CppVector3 Direction, float Radius, Il2CppArray<void*>* Hits) {
		return ((T (*)(DummyCollider*, Il2CppVector3, Il2CppVector3, float, Il2CppArray<void*>*))(Il2CppBase() + 0x307D80))(this, Origin, Direction, Radius, Hits);
	}
	template <typename T = void> T UpdateTransform() {
		return ((T (*)(DummyCollider*))(Il2CppBase() + 0x307D88))(this);
	}
	template <typename T = void> T Scale(float Multiplier) {
		return ((T (*)(DummyCollider*, float))(Il2CppBase() + 0x307D8C))(this, Multiplier);
	}
};
