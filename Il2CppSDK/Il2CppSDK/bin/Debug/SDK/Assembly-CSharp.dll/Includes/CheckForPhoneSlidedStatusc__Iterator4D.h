#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheckForPhoneSlidedStatuscIterator4D
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& nav__0() {
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
		return ((T (*)(CheckForPhoneSlidedStatuscIterator4D*))(Il2CppBase() + 0x3276D8))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(CheckForPhoneSlidedStatuscIterator4D*))(Il2CppBase() + 0x327914))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CheckForPhoneSlidedStatuscIterator4D*))(Il2CppBase() + 0x32791C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CheckForPhoneSlidedStatuscIterator4D*))(Il2CppBase() + 0x327924))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(CheckForPhoneSlidedStatuscIterator4D*))(Il2CppBase() + 0x327B20))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CheckForPhoneSlidedStatuscIterator4D*))(Il2CppBase() + 0x327B2C))(this);
	}
};
