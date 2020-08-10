#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProjectileGrenadeCluster
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_GameObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_Transform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_RBody() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_Collider() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_SleepTimer() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_ChildPrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<void*>*> T& m_ActivationEffect() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_ActivationDelay() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_HitSoundNum() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_HitSoundLimit() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& m_WaterVolume() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& m_Anim() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& m_Audio() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& m_Trajectory() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ProjectileGrenadeCluster*))(Il2CppBase() + 0x20E7C8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ProjectileGrenadeCluster*))(Il2CppBase() + 0x20E888))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ProjectileGrenadeCluster*))(Il2CppBase() + 0x20E9E0))(this);
	}
	template <typename T = void> T Init(void* Data) {
		return ((T (*)(ProjectileGrenadeCluster*, void*))(Il2CppBase() + 0x20EA80))(this, Data);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ProjectileGrenadeCluster*))(Il2CppBase() + 0x20EE6C))(this);
	}
	template <typename T = void> T Explode() {
		return ((T (*)(ProjectileGrenadeCluster*))(Il2CppBase() + 0x20F004))(this);
	}
	template <typename T = void*> T DestroyItself() {
		return ((T (*)(ProjectileGrenadeCluster*))(Il2CppBase() + 0x20F548))(this);
	}
	template <typename T = void> T OnCollisionEnter(void* Coll) {
		return ((T (*)(ProjectileGrenadeCluster*, void*))(Il2CppBase() + 0x20F5F4))(this, Coll);
	}
	template <typename T = void> T PlayHitSound(void* Coll) {
		return ((T (*)(ProjectileGrenadeCluster*, void*))(Il2CppBase() + 0x20F850))(this, Coll);
	}
	template <typename T = void> T OnCollisionStay(void* Coll) {
		return ((T (*)(ProjectileGrenadeCluster*, void*))(Il2CppBase() + 0x20F88C))(this, Coll);
	}
	template <typename T = void> T OnCollisionExit(void* Coll) {
		return ((T (*)(ProjectileGrenadeCluster*, void*))(Il2CppBase() + 0x20F890))(this, Coll);
	}
	template <typename T = void> T OnRenderObject() {
		return ((T (*)(ProjectileGrenadeCluster*))(Il2CppBase() + 0x20F894))(this);
	}
	template <typename T = void> T ComputeTrajectory() {
		return ((T (*)(ProjectileGrenadeCluster*))(Il2CppBase() + 0x20EC9C))(this);
	}
	template <typename T = void> T DisplayTrajectory(float DisplayTime) {
		return ((T (*)(ProjectileGrenadeCluster*, float))(Il2CppBase() + 0x20FA44))(this, DisplayTime);
	}
};
