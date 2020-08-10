#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CutterLaser
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_Transform() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_SpinningPart() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_Audio() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_State() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_LifeBar() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_SpinDuration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_Radius() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_AverageKilledSec() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_AverageKilledNum() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_DamageTotal() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_DamageRemaining() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_DamageSensor() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& m_SndActivating() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& m_SndActive() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& m_SndDeactivating() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<void*>*> T& m_Lasers() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_LayersHeightMin() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_LayersHeightMax() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& m_Deactivation() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CutterLaser*))(Il2CppBase() + 0x2F0468))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CutterLaser*))(Il2CppBase() + 0x2F0534))(this);
	}
	template <typename T = void> T Init(void* Data) {
		return ((T (*)(CutterLaser*, void*))(Il2CppBase() + 0x2F0550))(this, Data);
	}
	template <typename T = void> T Start() {
		return ((T (*)(CutterLaser*))(Il2CppBase() + 0x2F0610))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CutterLaser*))(Il2CppBase() + 0x2F0978))(this);
	}
	template <typename T = void> T ToggleLasers(bool Enable) {
		return ((T (*)(CutterLaser*, bool))(Il2CppBase() + 0x2F0C78))(this, Enable);
	}
	template <typename T = void> T ApplyDamage(float DeltaTime) {
		return ((T (*)(CutterLaser*, float))(Il2CppBase() + 0x2F0CF0))(this, DeltaTime);
	}
	template <typename T = bool> T ApplyDamage_1(void* Hit, void* Damage) {
		return ((T (*)(CutterLaser*, void*, void*))(Il2CppBase() + 0x2F1024))(this, Hit, Damage);
	}
	template <typename T = float> T GetRadius() {
		return ((T (*)(CutterLaser*))(Il2CppBase() + 0x2F0E10))(this);
	}
	template <typename T = void> T OnDeactivation() {
		return ((T (*)(CutterLaser*))(Il2CppBase() + 0x2F12D4))(this);
	}
};
