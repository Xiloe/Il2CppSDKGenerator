#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveSpritecIterator92
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& currentTime__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& s() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& start__1() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector2> T& leftDown() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& end__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& time() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& progress__3() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& $delay() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& $s() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector2> T& $leftDown() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& $time() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MoveSpritecIterator92*))(Il2CppBase() + 0x25DE0C))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(MoveSpritecIterator92*))(Il2CppBase() + 0x25DE14))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(MoveSpritecIterator92*))(Il2CppBase() + 0x25DE1C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(MoveSpritecIterator92*))(Il2CppBase() + 0x25DE24))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(MoveSpritecIterator92*))(Il2CppBase() + 0x25E12C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(MoveSpritecIterator92*))(Il2CppBase() + 0x25E138))(this);
	}
};
