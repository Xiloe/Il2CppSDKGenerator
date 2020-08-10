#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VerifyTransactionCoroutinecIterator90
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& txn() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& state__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& processedTransactionIds__1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& $txn() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& $callback() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(VerifyTransactionCoroutinecIterator90*))(Il2CppBase() + 0x3C08B8))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(VerifyTransactionCoroutinecIterator90*))(Il2CppBase() + 0x3C0AE8))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(VerifyTransactionCoroutinecIterator90*))(Il2CppBase() + 0x3C0AF0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(VerifyTransactionCoroutinecIterator90*))(Il2CppBase() + 0x3C0AF8))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(VerifyTransactionCoroutinecIterator90*))(Il2CppBase() + 0x3C1068))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(VerifyTransactionCoroutinecIterator90*))(Il2CppBase() + 0x3C1074))(this);
	}
	template <typename T = void> T m__4F(void* st) {
		return ((T (*)(VerifyTransactionCoroutinecIterator90*, void*))(Il2CppBase() + 0x3C1108))(this, st);
	}
};
