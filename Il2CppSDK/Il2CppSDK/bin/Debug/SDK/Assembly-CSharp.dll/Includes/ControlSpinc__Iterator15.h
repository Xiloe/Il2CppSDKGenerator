#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ControlSpincIterator15
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> T& $s_188__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& $s_189__1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& obj__2() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& symbol() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& win() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& $symbol() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& $win() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ControlSpincIterator15*))(Il2CppBase() + 0x292BE4))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(ControlSpincIterator15*))(Il2CppBase() + 0x293D54))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ControlSpincIterator15*))(Il2CppBase() + 0x293D5C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ControlSpincIterator15*))(Il2CppBase() + 0x293D64))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ControlSpincIterator15*))(Il2CppBase() + 0x293F14))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ControlSpincIterator15*))(Il2CppBase() + 0x293F20))(this);
	}
};
