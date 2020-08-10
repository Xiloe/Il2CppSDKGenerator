#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitGameCentercIterator4B
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
		return ((T (*)(InitGameCentercIterator4B*))(Il2CppBase() + 0x324824))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(InitGameCentercIterator4B*))(Il2CppBase() + 0x327BC0))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(InitGameCentercIterator4B*))(Il2CppBase() + 0x327BC8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(InitGameCentercIterator4B*))(Il2CppBase() + 0x327BD0))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(InitGameCentercIterator4B*))(Il2CppBase() + 0x327C10))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(InitGameCentercIterator4B*))(Il2CppBase() + 0x327C1C))(this);
	}
};
