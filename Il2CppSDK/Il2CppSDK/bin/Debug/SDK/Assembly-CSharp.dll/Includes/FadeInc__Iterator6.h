#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FadeIncIterator6
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
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(FadeIncIterator6*))(Il2CppBase() + 0x1A68F4))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(FadeIncIterator6*))(Il2CppBase() + 0x1A78A4))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(FadeIncIterator6*))(Il2CppBase() + 0x1A78AC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(FadeIncIterator6*))(Il2CppBase() + 0x1A78B4))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(FadeIncIterator6*))(Il2CppBase() + 0x1A79D4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(FadeIncIterator6*))(Il2CppBase() + 0x1A79E0))(this);
	}
};
