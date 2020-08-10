#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProjectileBait
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_Speed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_Timer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_GameObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_Transform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_RBody() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_Collider() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_SleepTimer() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_HitSoundNum() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_HitSoundLimit() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_WaterVolume() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& m_ImportantObjectType() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& m_Anim() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& m_Audio() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& m_Trajectory() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ProjectileBait*))(Il2CppBase() + 0x20B9C8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ProjectileBait*))(Il2CppBase() + 0x20BA7C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ProjectileBait*))(Il2CppBase() + 0x20BBD4))(this);
	}
	template <typename T = void> T Init(void* Data) {
		return ((T (*)(ProjectileBait*, void*))(Il2CppBase() + 0x20BD3C))(this, Data);
	}
	template <typename T = void> T DestroyBait() {
		return ((T (*)(ProjectileBait*))(Il2CppBase() + 0x20C164))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ProjectileBait*))(Il2CppBase() + 0x20C188))(this);
	}
	template <typename T = void> T OnCollisionEnter(void* Coll) {
		return ((T (*)(ProjectileBait*, void*))(Il2CppBase() + 0x20C238))(this, Coll);
	}
	template <typename T = void> T PlayHitSound(void* Coll) {
		return ((T (*)(ProjectileBait*, void*))(Il2CppBase() + 0x20C304))(this, Coll);
	}
	template <typename T = void> T OnCollisionStay(void* Coll) {
		return ((T (*)(ProjectileBait*, void*))(Il2CppBase() + 0x20C340))(this, Coll);
	}
	template <typename T = void> T OnCollisionExit(void* Coll) {
		return ((T (*)(ProjectileBait*, void*))(Il2CppBase() + 0x20C344))(this, Coll);
	}
	template <typename T = void> T OnRenderObject() {
		return ((T (*)(ProjectileBait*))(Il2CppBase() + 0x20C348))(this);
	}
	template <typename T = void> T ComputeTrajectory() {
		return ((T (*)(ProjectileBait*))(Il2CppBase() + 0x20BF94))(this);
	}
	template <typename T = void> T DisplayTrajectory(float DisplayTime) {
		return ((T (*)(ProjectileBait*, float))(Il2CppBase() + 0x20C4F8))(this, DisplayTime);
	}
	template <typename T = void*> T GetImportantObjectType() {
		return ((T (*)(ProjectileBait*))(Il2CppBase() + 0x20C754))(this);
	}
	template <typename T = void*> T GetGameObject() {
		return ((T (*)(ProjectileBait*))(Il2CppBase() + 0x20C75C))(this);
	}
};
