#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAPVerifier
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> T& modulus() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<void*>*> T& exponent() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(IAPVerifier*))(Il2CppBase() + 0x3BF400))(this);
	}
	template <typename T = void*> T UpdatePurchaseInfo_Coroutine(void* purchaseInfo, void* callback) {
		return ((T (*)(IAPVerifier*, void*, void*))(Il2CppBase() + 0x3C074C))(this, purchaseInfo, callback);
	}
	template <typename T = void*> T VerifyTransaction_Coroutine(void* txn, void* callback) {
		return ((T (*)(IAPVerifier*, void*, void*))(Il2CppBase() + 0x3C07FC))(this, txn, callback);
	}
	template <typename T = void*> T VerifyTransaction_Platform(void* txn, void* callback) {
		return ((T (*)(IAPVerifier*, void*, void*))(Il2CppBase() + 0x3C08C0))(this, txn, callback);
	}
};
