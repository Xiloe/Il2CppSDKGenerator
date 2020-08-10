#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProcessRequestedPurchasesCoroutinecIterator8B
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& selectedProduct__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ProcessRequestedPurchasesCoroutinecIterator8B*))(Il2CppBase() + 0x3BDD18))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(ProcessRequestedPurchasesCoroutinecIterator8B*))(Il2CppBase() + 0x3BFD74))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ProcessRequestedPurchasesCoroutinecIterator8B*))(Il2CppBase() + 0x3BFD7C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ProcessRequestedPurchasesCoroutinecIterator8B*))(Il2CppBase() + 0x3BFD84))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ProcessRequestedPurchasesCoroutinecIterator8B*))(Il2CppBase() + 0x3BFF9C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ProcessRequestedPurchasesCoroutinecIterator8B*))(Il2CppBase() + 0x3BFFA8))(this);
	}
	template <typename T = void> T m__4B(bool state, Il2CppArray<void*>* products) {
		return ((T (*)(ProcessRequestedPurchasesCoroutinecIterator8B*, bool, Il2CppArray<void*>*))(Il2CppBase() + 0x3C003C))(this, state, products);
	}
};
