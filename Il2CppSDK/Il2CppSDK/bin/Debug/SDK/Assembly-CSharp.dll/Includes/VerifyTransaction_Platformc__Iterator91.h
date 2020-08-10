#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VerifyTransactionPlatformcIterator91
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& txn() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& googleTxn__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<void*>*> T& receipt__1() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<void*>*> T& signature__2() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& sha1__3() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<void*>*> T& hash__4() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& rsaParameters__5() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& rsa__6() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& rsaDeformatter__7() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& $txn() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> T& $callback() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(VerifyTransactionPlatformcIterator91*))(Il2CppBase() + 0x3C097C))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(VerifyTransactionPlatformcIterator91*))(Il2CppBase() + 0x3C1110))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(VerifyTransactionPlatformcIterator91*))(Il2CppBase() + 0x3C1118))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(VerifyTransactionPlatformcIterator91*))(Il2CppBase() + 0x3C1120))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(VerifyTransactionPlatformcIterator91*))(Il2CppBase() + 0x3C17C8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(VerifyTransactionPlatformcIterator91*))(Il2CppBase() + 0x3C17D4))(this);
	}
};
