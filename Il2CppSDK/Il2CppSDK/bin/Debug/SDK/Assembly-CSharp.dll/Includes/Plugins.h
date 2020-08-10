#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Plugins
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78AFC);
	}
	// Fields
	template <typename T = void*> static T& m_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Plugins*))(Il2CppBase() + 0x2096E4))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2096EC))(0);
	}
	template <typename T = void> static T Initialize(bool hasSpentRealMoney) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2096F0))(0, hasSpentRealMoney);
	}
	template <typename T = void> static T SpentMoney() {
		return ((T (*)(void *))(Il2CppBase() + 0x20996C))(0);
	}
	template <typename T = void*> T Initialize_Coroutine(bool hasSpentRealMoney) {
		return ((T (*)(Plugins*, bool))(Il2CppBase() + 0x2098C4))(this, hasSpentRealMoney);
	}
};
