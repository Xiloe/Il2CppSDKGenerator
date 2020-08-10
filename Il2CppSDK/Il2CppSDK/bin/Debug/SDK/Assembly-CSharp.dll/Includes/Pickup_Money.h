#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PickupMoney
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78CF4);
	}
	// Fields
	template <typename T = int32_t> T& m_Amount() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PickupMoney*))(Il2CppBase() + 0x1F093C))(this);
	}
	template <typename T = void*> T GetID() {
		return ((T (*)(PickupMoney*))(Il2CppBase() + 0x1F0948))(this);
	}
	template <typename T = void> T OnExpiration() {
		return ((T (*)(PickupMoney*))(Il2CppBase() + 0x1F0950))(this);
	}
};
