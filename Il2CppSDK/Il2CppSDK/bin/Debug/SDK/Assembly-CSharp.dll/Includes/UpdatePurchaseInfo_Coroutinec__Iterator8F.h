#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdatePurchaseInfoCoroutinecIterator8F
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& $callback() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(UpdatePurchaseInfoCoroutinecIterator8F*))(Il2CppBase() + 0x3C07F4))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(UpdatePurchaseInfoCoroutinecIterator8F*))(Il2CppBase() + 0x3C0984))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(UpdatePurchaseInfoCoroutinecIterator8F*))(Il2CppBase() + 0x3C098C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(UpdatePurchaseInfoCoroutinecIterator8F*))(Il2CppBase() + 0x3C0994))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(UpdatePurchaseInfoCoroutinecIterator8F*))(Il2CppBase() + 0x3C0A48))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(UpdatePurchaseInfoCoroutinecIterator8F*))(Il2CppBase() + 0x3C0A54))(this);
	}
};
