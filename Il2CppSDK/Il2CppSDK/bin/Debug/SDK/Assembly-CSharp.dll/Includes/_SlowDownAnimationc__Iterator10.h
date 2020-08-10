#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SlowDownAnimationcIterator10
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& speed__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& $s_157__1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& state__2() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SlowDownAnimationcIterator10*))(Il2CppBase() + 0x1C22EC))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(SlowDownAnimationcIterator10*))(Il2CppBase() + 0x1C254C))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(SlowDownAnimationcIterator10*))(Il2CppBase() + 0x1C2554))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(SlowDownAnimationcIterator10*))(Il2CppBase() + 0x1C255C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(SlowDownAnimationcIterator10*))(Il2CppBase() + 0x1C2A20))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SlowDownAnimationcIterator10*))(Il2CppBase() + 0x1C2A2C))(this);
	}
};
