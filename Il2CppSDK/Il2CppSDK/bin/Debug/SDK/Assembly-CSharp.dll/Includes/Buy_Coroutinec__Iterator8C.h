#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuyCoroutinecIterator8C
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& product() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& $product() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(BuyCoroutinecIterator8C*))(Il2CppBase() + 0x3BDDC8))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(BuyCoroutinecIterator8C*))(Il2CppBase() + 0x3BDEF8))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(BuyCoroutinecIterator8C*))(Il2CppBase() + 0x3BDF00))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(BuyCoroutinecIterator8C*))(Il2CppBase() + 0x3BDF08))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(BuyCoroutinecIterator8C*))(Il2CppBase() + 0x3BE4CC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BuyCoroutinecIterator8C*))(Il2CppBase() + 0x3BE4D8))(this);
	}
	template <typename T = void> static T m__4C(void* state) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3BE56C))(0, state);
	}
};
