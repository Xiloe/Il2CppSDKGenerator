#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_Health() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_AttackDamage() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_MoveSpeedModif() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_AttackFreqModif() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ModData*))(Il2CppBase() + 0x1A809C))(this);
	}
};
