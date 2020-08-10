#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PickupAutoCollectZone
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD795AC);
	}
	// Fields
	template <typename T = Il2CppColor> static T& Col() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& m_Object() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_XForm() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_Box() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_ActivateWithGZ() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PickupAutoCollectZone*))(Il2CppBase() + 0x1F0A20))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1F0A30))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PickupAutoCollectZone*))(Il2CppBase() + 0x1F0AF8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PickupAutoCollectZone*))(Il2CppBase() + 0x1F0CE4))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(PickupAutoCollectZone*))(Il2CppBase() + 0x1F0CE8))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(PickupAutoCollectZone*))(Il2CppBase() + 0x1F0F48))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PickupAutoCollectZone*))(Il2CppBase() + 0x1F10F8))(this);
	}
	template <typename T = bool> T IsActivatedWithGameZone() {
		return ((T (*)(PickupAutoCollectZone*))(Il2CppBase() + 0x1F10FC))(this);
	}
	template <typename T = bool> T IsInside(Il2CppVector3 Point) {
		return ((T (*)(PickupAutoCollectZone*, Il2CppVector3))(Il2CppBase() + 0x1F1104))(this, Point);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(PickupAutoCollectZone*))(Il2CppBase() + 0x1F1130))(this);
	}
};
