#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DummyColliderCollection
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78DE8);
	}
	// Fields
	template <typename T = Il2CppColor> static T& Col() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& m_Root() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<void*>*> T& m_Records() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<void*>*> T& m_Hits() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_Dirty() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(DummyColliderCollection*))(Il2CppBase() + 0x308C78))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x308D54))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DummyColliderCollection*))(Il2CppBase() + 0x308E1C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DummyColliderCollection*))(Il2CppBase() + 0x309310))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(DummyColliderCollection*))(Il2CppBase() + 0x309314))(this);
	}
	template <typename T = bool> T VerifyRayCast(void* Hit, Il2CppVector3 Origin, Il2CppVector3 Direction, float Distance) {
		return ((T (*)(DummyColliderCollection*, void*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x309320))(this, Hit, Origin, Direction, Distance);
	}
	template <typename T = bool> T VerifySphereCast(void* Hit, Il2CppVector3 Origin, float Radius, Il2CppVector3 Direction, float Distance) {
		return ((T (*)(DummyColliderCollection*, void*, Il2CppVector3, float, Il2CppVector3, float))(Il2CppBase() + 0x309D04))(this, Hit, Origin, Radius, Direction, Distance);
	}
	template <typename T = void> T CreateRecords(void* Parent) {
		return ((T (*)(DummyColliderCollection*, void*))(Il2CppBase() + 0x308EF8))(this, Parent);
	}
	template <typename T = void> T UpdateTransforms() {
		return ((T (*)(DummyColliderCollection*))(Il2CppBase() + 0x309A9C))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(DummyColliderCollection*))(Il2CppBase() + 0x30A560))(this);
	}
};
