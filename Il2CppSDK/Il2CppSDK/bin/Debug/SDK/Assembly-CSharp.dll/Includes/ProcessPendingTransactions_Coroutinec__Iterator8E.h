#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProcessPendingTransactionsCoroutinecIterator8E
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ProcessPendingTransactionsCoroutinecIterator8E*))(Il2CppBase() + 0x3BDEF0))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(ProcessPendingTransactionsCoroutinecIterator8E*))(Il2CppBase() + 0x3BF86C))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ProcessPendingTransactionsCoroutinecIterator8E*))(Il2CppBase() + 0x3BF874))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ProcessPendingTransactionsCoroutinecIterator8E*))(Il2CppBase() + 0x3BF87C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ProcessPendingTransactionsCoroutinecIterator8E*))(Il2CppBase() + 0x3BFC14))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ProcessPendingTransactionsCoroutinecIterator8E*))(Il2CppBase() + 0x3BFC20))(this);
	}
	template <typename T = void> static T m__4E(bool state) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3BFCB4))(0, state);
	}
};
