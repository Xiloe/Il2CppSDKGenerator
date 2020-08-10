#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CloseCoroutinecIterator7C
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& time__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CloseCoroutinecIterator7C*))(Il2CppBase() + 0x306F14))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(CloseCoroutinecIterator7C*))(Il2CppBase() + 0x307224))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CloseCoroutinecIterator7C*))(Il2CppBase() + 0x30722C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CloseCoroutinecIterator7C*))(Il2CppBase() + 0x307234))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(CloseCoroutinecIterator7C*))(Il2CppBase() + 0x307510))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CloseCoroutinecIterator7C*))(Il2CppBase() + 0x30751C))(this);
	}
};
