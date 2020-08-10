#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActivationcIterator6D
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& r__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& p__1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ActivationcIterator6D*))(Il2CppBase() + 0x3FBD44))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(ActivationcIterator6D*))(Il2CppBase() + 0x3FD2D4))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ActivationcIterator6D*))(Il2CppBase() + 0x3FD2DC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ActivationcIterator6D*))(Il2CppBase() + 0x3FD2E4))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ActivationcIterator6D*))(Il2CppBase() + 0x3FD75C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ActivationcIterator6D*))(Il2CppBase() + 0x3FD768))(this);
	}
};
