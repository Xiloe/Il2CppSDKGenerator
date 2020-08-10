#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Award
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_RootObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_Transform() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_Anims() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_Audio() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_PickupDelay() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& m_OnPickupAnim() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_OnPickupSound() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_OnPickupParticle() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_Time2Check() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_DetectionDistance() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Award*))(Il2CppBase() + 0x1D5010))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Award*))(Il2CppBase() + 0x1D5020))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Award*))(Il2CppBase() + 0x1D5114))(this);
	}
	template <typename T = void> T PickedUp() {
		return ((T (*)(Award*))(Il2CppBase() + 0x1D549C))(this);
	}
	template <typename T = void> T OnPickedUp() {
		return ((T (*)(Award*))(Il2CppBase() + 0x1D5794))(this);
	}
	template <typename T = void*> T DestroyItself() {
		return ((T (*)(Award*))(Il2CppBase() + 0x1D56F0))(this);
	}
};
