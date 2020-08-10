#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DeactivationData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& m_Delay() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_Anim() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_Sound() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<void*>*> T& m_Particles() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<void*>*> T& m_ObjectsToHide() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(DeactivationData*))(Il2CppBase() + 0x3FBA18))(this);
	}
};
