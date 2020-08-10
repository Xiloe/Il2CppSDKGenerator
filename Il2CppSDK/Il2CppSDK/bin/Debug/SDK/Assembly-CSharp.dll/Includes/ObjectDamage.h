#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ObjectDamage
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& Damage() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& NextDamageDelay() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<void*>*> T& OnGameEvents() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& Size() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& Bounds() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<void*>*> T& SoundHit() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& SoundRange() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& Transform() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& Audio() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& AllEventsAreOn() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& TestTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ObjectDamage*))(Il2CppBase() + 0x1EAF38))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ObjectDamage*))(Il2CppBase() + 0x1EB0BC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ObjectDamage*))(Il2CppBase() + 0x1EB1F8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ObjectDamage*))(Il2CppBase() + 0x1EB4F8))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(ObjectDamage*))(Il2CppBase() + 0x1EB8F4))(this);
	}
	template <typename T = bool> T PointInsideObject(Il2CppVector3 point) {
		return ((T (*)(ObjectDamage*, Il2CppVector3))(Il2CppBase() + 0x1EB894))(this, point);
	}
	template <typename T = void> T EventHandler(Il2CppString* name, void* state) {
		return ((T (*)(ObjectDamage*, Il2CppString*, void*))(Il2CppBase() + 0x1EBA68))(this, name, state);
	}
	template <typename T = bool> T IsEnabled() {
		return ((T (*)(ObjectDamage*))(Il2CppBase() + 0x1EBCF8))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(ObjectDamage*))(Il2CppBase() + 0x1EBD00))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ObjectDamage*))(Il2CppBase() + 0x1EBF90))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(ObjectDamage*))(Il2CppBase() + 0x1EBFA0))(this);
	}
};
