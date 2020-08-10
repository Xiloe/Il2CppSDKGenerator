#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitializeCoroutinecIterator8A
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& initState__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<void*>*> T& products__1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<void*>*> T& $s_652__2() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& $s_653__3() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& fundSettings__4() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& fetchResult__5() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<void*>*> T& billingProducts__6() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& i__7() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(InitializeCoroutinecIterator8A*))(Il2CppBase() + 0x3BDC84))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(InitializeCoroutinecIterator8A*))(Il2CppBase() + 0x3BE620))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(InitializeCoroutinecIterator8A*))(Il2CppBase() + 0x3BE628))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(InitializeCoroutinecIterator8A*))(Il2CppBase() + 0x3BE630))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(InitializeCoroutinecIterator8A*))(Il2CppBase() + 0x3BF7C4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(InitializeCoroutinecIterator8A*))(Il2CppBase() + 0x3BF7D0))(this);
	}
	template <typename T = void> T m__4A(bool result) {
		return ((T (*)(InitializeCoroutinecIterator8A*, bool))(Il2CppBase() + 0x3BF864))(this, result);
	}
};
