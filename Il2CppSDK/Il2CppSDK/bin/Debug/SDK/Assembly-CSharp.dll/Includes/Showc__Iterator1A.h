#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowcIterator1A
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& delay__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& label__1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& missionInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& $missionInfo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ShowcIterator1A*))(Il2CppBase() + 0x2A3950))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(ShowcIterator1A*))(Il2CppBase() + 0x2A3958))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ShowcIterator1A*))(Il2CppBase() + 0x2A3960))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ShowcIterator1A*))(Il2CppBase() + 0x2A3968))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ShowcIterator1A*))(Il2CppBase() + 0x2A51F4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ShowcIterator1A*))(Il2CppBase() + 0x2A5200))(this);
	}
};
