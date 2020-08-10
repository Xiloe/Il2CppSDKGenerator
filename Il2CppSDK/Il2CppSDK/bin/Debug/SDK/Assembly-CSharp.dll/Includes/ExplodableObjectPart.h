#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExplodableObjectPart
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Collider() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_RBody() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_Renderer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_SleepTimer() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_FadeOutTimer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_ImpulseMin() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_ImpulseMax() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_HitSoundNum() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_HitSoundLimit() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<void*>*> T& m_HitSounds() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_Time2ImpactSound() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<void*>*> T& m_Particles() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ExplodableObjectPart*))(Il2CppBase() + 0x314DD0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ExplodableObjectPart*))(Il2CppBase() + 0x314DEC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ExplodableObjectPart*))(Il2CppBase() + 0x314F1C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ExplodableObjectPart*))(Il2CppBase() + 0x3150A4))(this);
	}
	template <typename T = void> T FadeOutStart() {
		return ((T (*)(ExplodableObjectPart*))(Il2CppBase() + 0x315244))(this);
	}
	template <typename T = void> T FadeOutUpdate() {
		return ((T (*)(ExplodableObjectPart*))(Il2CppBase() + 0x3152DC))(this);
	}
	template <typename T = void> T OnCollisionEnter(void* Coll) {
		return ((T (*)(ExplodableObjectPart*, void*))(Il2CppBase() + 0x3154D4))(this, Coll);
	}
	template <typename T = void> T OnCollisionStay(void* Coll) {
		return ((T (*)(ExplodableObjectPart*, void*))(Il2CppBase() + 0x3156D8))(this, Coll);
	}
	template <typename T = void> T PlayImpactSound(void* Coll, bool NewCollision) {
		return ((T (*)(ExplodableObjectPart*, void*, bool))(Il2CppBase() + 0x3154DC))(this, Coll, NewCollision);
	}
};
