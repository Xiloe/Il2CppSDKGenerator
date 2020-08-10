#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaitForLogincIterator5A
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& timeStep__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& extraWait__1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(WaitForLogincIterator5A*))(Il2CppBase() + 0x355F84))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(WaitForLogincIterator5A*))(Il2CppBase() + 0x35634C))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(WaitForLogincIterator5A*))(Il2CppBase() + 0x356354))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(WaitForLogincIterator5A*))(Il2CppBase() + 0x35635C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(WaitForLogincIterator5A*))(Il2CppBase() + 0x356558))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(WaitForLogincIterator5A*))(Il2CppBase() + 0x356564))(this);
	}
};
