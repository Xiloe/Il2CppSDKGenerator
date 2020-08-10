#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAP
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD792E4);
	}
	// Fields
	template <typename T = void*> static T& m_InitResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& m_LastBuyResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& m_LastRestoreState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<void*>*> static T& m_AvailableProducts() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(IAP*))(Il2CppBase() + 0x3BD860))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x3BD868))(0);
	}
	template <typename T = void*> static T get_InitResult() {
		return ((T (*)(void *))(Il2CppBase() + 0x3BD938))(0);
	}
	template <typename T = void*> static T get_LastBuyResult() {
		return ((T (*)(void *))(Il2CppBase() + 0x3BD9E8))(0);
	}
	template <typename T = bool> static T get_LastRestoreState() {
		return ((T (*)(void *))(Il2CppBase() + 0x3BDA98))(0);
	}
	template <typename T = Il2CppArray<void*>*> static T get_AvailableProducts() {
		return ((T (*)(void *))(Il2CppBase() + 0x3BDB48))(0);
	}
	template <typename T = void*> static T Initialize_Coroutine() {
		return ((T (*)(void *))(Il2CppBase() + 0x3BDBF8))(0);
	}
	template <typename T = void*> static T ProcessRequestedPurchases_Coroutine() {
		return ((T (*)(void *))(Il2CppBase() + 0x3BDC8C))(0);
	}
	template <typename T = void*> static T Buy_Coroutine(void* product) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3BDD20))(0, product);
	}
	template <typename T = void*> static T Restore_Coroutine() {
		return ((T (*)(void *))(Il2CppBase() + 0x3BDDD0))(0);
	}
	template <typename T = void*> static T ProcessPendingTransactions_Coroutine() {
		return ((T (*)(void *))(Il2CppBase() + 0x3BDE64))(0);
	}
};
