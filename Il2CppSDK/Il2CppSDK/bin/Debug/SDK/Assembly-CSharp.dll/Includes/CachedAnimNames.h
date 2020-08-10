#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CachedAnimNames
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& m_Run() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_Walk() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& m_Idle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_Fire() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& m_Reload() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& m_Arm() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& m_Disarm() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& m_InjuryL() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& m_InjuryR() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& m_InjuryFrontL() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& m_InjuryFrontR() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& m_Death() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& m_StrafeL() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& m_StrafeR() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& m_AimIdle() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& m_AimFire() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& m_AimWalk() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& m_Component() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& m_AnimsInfo() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	// Methods
	template <typename T = void> T _ctor(void* comp) {
		return ((T (*)(CachedAnimNames*, void*))(Il2CppBase() + 0x1AF588))(this, comp);
	}
	template <typename T = Il2CppString*> T get_Run() {
		return ((T (*)(CachedAnimNames*))(Il2CppBase() + 0x1AF868))(this);
	}
	template <typename T = Il2CppString*> T get_Walk() {
		return ((T (*)(CachedAnimNames*))(Il2CppBase() + 0x1AF8B0))(this);
	}
	template <typename T = Il2CppString*> T get_Idle() {
		return ((T (*)(CachedAnimNames*))(Il2CppBase() + 0x1AF6F0))(this);
	}
	template <typename T = Il2CppString*> T get_Fire() {
		return ((T (*)(CachedAnimNames*))(Il2CppBase() + 0x1AFC3C))(this);
	}
	template <typename T = Il2CppString*> T get_Reload() {
		return ((T (*)(CachedAnimNames*))(Il2CppBase() + 0x1AFC84))(this);
	}
	template <typename T = Il2CppString*> T get_Arm() {
		return ((T (*)(CachedAnimNames*))(Il2CppBase() + 0x1AFCCC))(this);
	}
	template <typename T = Il2CppString*> T get_Disarm() {
		return ((T (*)(CachedAnimNames*))(Il2CppBase() + 0x1AFD14))(this);
	}
	template <typename T = Il2CppString*> T get_InjuryL() {
		return ((T (*)(CachedAnimNames*))(Il2CppBase() + 0x1AFE2C))(this);
	}
	template <typename T = Il2CppString*> T get_InjuryR() {
		return ((T (*)(CachedAnimNames*))(Il2CppBase() + 0x1AFE74))(this);
	}
	template <typename T = Il2CppString*> T get_InjuryFrontL() {
		return ((T (*)(CachedAnimNames*))(Il2CppBase() + 0x1AFEBC))(this);
	}
	template <typename T = Il2CppString*> T get_InjuryFrontR() {
		return ((T (*)(CachedAnimNames*))(Il2CppBase() + 0x1AFF04))(this);
	}
	template <typename T = Il2CppString*> T get_Death() {
		return ((T (*)(CachedAnimNames*))(Il2CppBase() + 0x1B0080))(this);
	}
	template <typename T = Il2CppString*> T get_StrafeL() {
		return ((T (*)(CachedAnimNames*))(Il2CppBase() + 0x1AF9D8))(this);
	}
	template <typename T = Il2CppString*> T get_StrafeR() {
		return ((T (*)(CachedAnimNames*))(Il2CppBase() + 0x1AFA20))(this);
	}
	template <typename T = Il2CppString*> T get_AimIdle() {
		return ((T (*)(CachedAnimNames*))(Il2CppBase() + 0x1AF6A8))(this);
	}
	template <typename T = Il2CppString*> T get_AimFire() {
		return ((T (*)(CachedAnimNames*))(Il2CppBase() + 0x1AFBF4))(this);
	}
	template <typename T = Il2CppString*> T get_AimWalk() {
		return ((T (*)(CachedAnimNames*))(Il2CppBase() + 0x1AF820))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CachedAnimNames*))(Il2CppBase() + 0x1AF5DC))(this);
	}
};
