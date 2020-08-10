#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RestoreCoroutinecIterator8D
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
		return ((T (*)(RestoreCoroutinecIterator8D*))(Il2CppBase() + 0x3BDE5C))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(RestoreCoroutinecIterator8D*))(Il2CppBase() + 0x3C0250))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(RestoreCoroutinecIterator8D*))(Il2CppBase() + 0x3C0258))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(RestoreCoroutinecIterator8D*))(Il2CppBase() + 0x3C0260))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(RestoreCoroutinecIterator8D*))(Il2CppBase() + 0x3C05F8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(RestoreCoroutinecIterator8D*))(Il2CppBase() + 0x3C0604))(this);
	}
	template <typename T = void> static T m__4D(bool state) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3C0698))(0, state);
	}
};
