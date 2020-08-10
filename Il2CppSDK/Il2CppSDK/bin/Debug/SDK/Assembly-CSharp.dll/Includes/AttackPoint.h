#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AttackPoint
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& RegisteredAgent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Transform() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AttackPoint*))(Il2CppBase() + 0x1D3E30))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AttackPoint*))(Il2CppBase() + 0x1D3E38))(this);
	}
};
