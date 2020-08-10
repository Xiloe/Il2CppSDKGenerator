#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAPInitializeCoroutinecIterator6A
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
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(IAPInitializeCoroutinecIterator6A*))(Il2CppBase() + 0x243564))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(IAPInitializeCoroutinecIterator6A*))(Il2CppBase() + 0x2451E4))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(IAPInitializeCoroutinecIterator6A*))(Il2CppBase() + 0x2451EC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(IAPInitializeCoroutinecIterator6A*))(Il2CppBase() + 0x2451F4))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(IAPInitializeCoroutinecIterator6A*))(Il2CppBase() + 0x245388))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(IAPInitializeCoroutinecIterator6A*))(Il2CppBase() + 0x245394))(this);
	}
};
