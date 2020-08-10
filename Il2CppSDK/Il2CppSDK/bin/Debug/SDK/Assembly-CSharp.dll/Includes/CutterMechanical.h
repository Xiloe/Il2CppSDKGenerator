#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CutterMechanical
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78D64);
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
	template <typename T = int32_t> T& m_HitsLimit() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_HitsRemaining() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_AfterHitHealth() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> static T& m_DmgRLeg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& m_DmgLLeg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> T& m_SndActivating() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_SndActive() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& m_SndDeactivating() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<void*>*> T& m_Blades() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_BladesLength() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_SpinDuration() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& m_BladesHeightMin() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_BladesHeightMax() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_BladesTiltCoef() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> T& m_NavMeshAgent() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& m_Deactivation() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CutterMechanical*))(Il2CppBase() + 0x2F160C))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F16C8))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CutterMechanical*))(Il2CppBase() + 0x2F1790))(this);
	}
	template <typename T = void> T Init(void* Data) {
		return ((T (*)(CutterMechanical*, void*))(Il2CppBase() + 0x2F17AC))(this, Data);
	}
	template <typename T = void> T Start() {
		return ((T (*)(CutterMechanical*))(Il2CppBase() + 0x2F186C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CutterMechanical*))(Il2CppBase() + 0x2F1C90))(this);
	}
	template <typename T = void> T UpdateBlades(float DeltaTime, float TiltingDuration) {
		return ((T (*)(CutterMechanical*, float, float))(Il2CppBase() + 0x2F1FDC))(this, DeltaTime, TiltingDuration);
	}
	template <typename T = int32_t> T ProcessHit(void* Hit) {
		return ((T (*)(CutterMechanical*, void*))(Il2CppBase() + 0x2F2710))(this, Hit);
	}
	template <typename T = void*> T GetDamageDesc(void* Victim) {
		return ((T (*)(CutterMechanical*, void*))(Il2CppBase() + 0x2F2990))(this, Victim);
	}
	template <typename T = void> T SetBladesTilt(float Value) {
		return ((T (*)(CutterMechanical*, float))(Il2CppBase() + 0x2F1BAC))(this, Value);
	}
	template <typename T = void> T OnDeactivation() {
		return ((T (*)(CutterMechanical*))(Il2CppBase() + 0x2F2BD4))(this);
	}
};
