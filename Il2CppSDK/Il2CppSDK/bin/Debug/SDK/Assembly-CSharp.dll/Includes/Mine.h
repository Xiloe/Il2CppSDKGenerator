#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Mine
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_Audio() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_Animation() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_Transform() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_ActivationDelay() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_CountingDown() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_DetectionDistance() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_DetectionDuration() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_DetectionPause() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_DetectionSound() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_DetectionStartTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_DetectionInProgress() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& m_Detector() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_DetectorMaxScale() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& m_Explosion() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& m_ExplosionOrigin() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_ExplosionDamageCoef() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_ExplosionEffRadius() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_ExplosionMaxDmgRadius() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& m_BlastMark() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Mine*))(Il2CppBase() + 0x3FAF38))(this);
	}
	template <typename T = void> T Init(void* Data) {
		return ((T (*)(Mine*, void*))(Il2CppBase() + 0x3FAF7C))(this, Data);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Mine*))(Il2CppBase() + 0x3FAFD4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Mine*))(Il2CppBase() + 0x3FB2F8))(this);
	}
	template <typename T = void> T StartDetection() {
		return ((T (*)(Mine*))(Il2CppBase() + 0x3FB8D0))(this);
	}
	template <typename T = bool> T UpdateDetection() {
		return ((T (*)(Mine*))(Il2CppBase() + 0x3FB690))(this);
	}
	template <typename T = void> T Explode() {
		return ((T (*)(Mine*))(Il2CppBase() + 0x3FB3A0))(this);
	}
};
