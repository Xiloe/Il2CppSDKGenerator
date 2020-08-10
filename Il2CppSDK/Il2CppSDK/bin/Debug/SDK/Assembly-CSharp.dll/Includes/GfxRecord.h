#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GfxRecord
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_GameObject() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<void*>*> T& m_Effects() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& m_ActivationTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor(void* Obj, Il2CppArray<void*>* Particles) {
		return ((T (*)(GfxRecord*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x304D20))(this, Obj, Particles);
	}
};
