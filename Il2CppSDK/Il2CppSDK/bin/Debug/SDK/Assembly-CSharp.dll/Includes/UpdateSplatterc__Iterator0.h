#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateSplattercIterator0
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& size() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& f__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& maxSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& s() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& $size() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& $maxSize() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& $speed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& $s() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(UpdateSplattercIterator0*))(Il2CppBase() + 0x25AE44))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(UpdateSplattercIterator0*))(Il2CppBase() + 0x25AE4C))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(UpdateSplattercIterator0*))(Il2CppBase() + 0x25AE54))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(UpdateSplattercIterator0*))(Il2CppBase() + 0x25AE5C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(UpdateSplattercIterator0*))(Il2CppBase() + 0x25AFEC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(UpdateSplattercIterator0*))(Il2CppBase() + 0x25AFF8))(this);
	}
};
