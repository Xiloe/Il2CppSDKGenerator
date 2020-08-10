#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProjectileGrenadeFrag
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_GrenadeSettings() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_GameObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_Transform() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_Anim() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_Audio() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_Mesh() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_RBody() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_Collider() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_SleepTimer() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_HitSoundNum() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& m_HitSoundLimit() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& m_WaterVolume() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& DamageCoef() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& m_ImportantObjectType() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& m_Explosion() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppVector3> T& m_ExplosionOffset() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_ExplosionDelay() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& m_ExplodeOnHit() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& m_IsSticky() {
		return *(T*)((uintptr_t)this + 0x65);
	}
	template <typename T = bool> T& Stuck() {
		return *(T*)((uintptr_t)this + 0x66);
	}
	template <typename T = bool> T& Finished() {
		return *(T*)((uintptr_t)this + 0x67);
	}
	template <typename T = bool> T& Initialized() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ProjectileGrenadeFrag*))(Il2CppBase() + 0x20FFA4))(this);
	}
	template <typename T = bool> T get_Stuck() {
		return ((T (*)(ProjectileGrenadeFrag*))(Il2CppBase() + 0x20FFFC))(this);
	}
	template <typename T = void> T set_Stuck(bool value) {
		return ((T (*)(ProjectileGrenadeFrag*, bool))(Il2CppBase() + 0x210004))(this, value);
	}
	template <typename T = bool> T get_Finished() {
		return ((T (*)(ProjectileGrenadeFrag*))(Il2CppBase() + 0x21000C))(this);
	}
	template <typename T = void> T set_Finished(bool value) {
		return ((T (*)(ProjectileGrenadeFrag*, bool))(Il2CppBase() + 0x210014))(this, value);
	}
	template <typename T = bool> T get_Initialized() {
		return ((T (*)(ProjectileGrenadeFrag*))(Il2CppBase() + 0x21001C))(this);
	}
	template <typename T = void> T set_Initialized(bool value) {
		return ((T (*)(ProjectileGrenadeFrag*, bool))(Il2CppBase() + 0x210024))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ProjectileGrenadeFrag*))(Il2CppBase() + 0x21002C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ProjectileGrenadeFrag*))(Il2CppBase() + 0x2101A4))(this);
	}
	template <typename T = void> T Init(void* Data) {
		return ((T (*)(ProjectileGrenadeFrag*, void*))(Il2CppBase() + 0x210240))(this, Data);
	}
	template <typename T = void> T Init_1(void* Data, void* Settings) {
		return ((T (*)(ProjectileGrenadeFrag*, void*, void*))(Il2CppBase() + 0x210248))(this, Data, Settings);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ProjectileGrenadeFrag*))(Il2CppBase() + 0x2104D0))(this);
	}
	template <typename T = void> T DetectCollisions() {
		return ((T (*)(ProjectileGrenadeFrag*))(Il2CppBase() + 0x2106A0))(this);
	}
	template <typename T = void> T Explode() {
		return ((T (*)(ProjectileGrenadeFrag*))(Il2CppBase() + 0x2114E0))(this);
	}
	template <typename T = void> T Explode_1(Il2CppVector3 pos) {
		return ((T (*)(ProjectileGrenadeFrag*, Il2CppVector3))(Il2CppBase() + 0x211090))(this, pos);
	}
	template <typename T = void> T OnCollisionEnter(void* Coll) {
		return ((T (*)(ProjectileGrenadeFrag*, void*))(Il2CppBase() + 0x211528))(this, Coll);
	}
	template <typename T = void> T PlayHitSound(void* Coll) {
		return ((T (*)(ProjectileGrenadeFrag*, void*))(Il2CppBase() + 0x2117DC))(this, Coll);
	}
	template <typename T = void> T OnCollisionStay(void* Coll) {
		return ((T (*)(ProjectileGrenadeFrag*, void*))(Il2CppBase() + 0x211818))(this, Coll);
	}
	template <typename T = void> T OnCollisionExit(void* Coll) {
		return ((T (*)(ProjectileGrenadeFrag*, void*))(Il2CppBase() + 0x21181C))(this, Coll);
	}
	template <typename T = void> T OnRenderObject() {
		return ((T (*)(ProjectileGrenadeFrag*))(Il2CppBase() + 0x211820))(this);
	}
	template <typename T = void> T ComputeTrajectory() {
		return ((T (*)(ProjectileGrenadeFrag*))(Il2CppBase() + 0x2104CC))(this);
	}
	template <typename T = void> T DisplayTrajectory(float DisplayTime) {
		return ((T (*)(ProjectileGrenadeFrag*, float))(Il2CppBase() + 0x211824))(this, DisplayTime);
	}
	template <typename T = void*> T GetImportantObjectType() {
		return ((T (*)(ProjectileGrenadeFrag*))(Il2CppBase() + 0x211828))(this);
	}
	template <typename T = void*> T GetGameObject() {
		return ((T (*)(ProjectileGrenadeFrag*))(Il2CppBase() + 0x211830))(this);
	}
};
