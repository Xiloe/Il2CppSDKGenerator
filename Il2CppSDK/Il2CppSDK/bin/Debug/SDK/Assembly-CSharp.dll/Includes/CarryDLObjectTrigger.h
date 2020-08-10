#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CarryDLObjectTrigger
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_TriggerActivated() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CarryDLObjectTrigger*))(Il2CppBase() + 0x28BE74))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(CarryDLObjectTrigger*))(Il2CppBase() + 0x28BE7C))(this);
	}
	template <typename T = void> T OnTriggerEnter(void* Other) {
		return ((T (*)(CarryDLObjectTrigger*, void*))(Il2CppBase() + 0x28BE80))(this, Other);
	}
};
