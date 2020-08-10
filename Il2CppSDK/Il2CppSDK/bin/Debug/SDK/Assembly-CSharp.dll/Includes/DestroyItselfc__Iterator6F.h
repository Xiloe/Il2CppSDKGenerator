#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyItselfcIterator6F
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = bool> T& active__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<void*>*> T& $s_532__1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& $s_533__2() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& ps__3() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(DestroyItselfcIterator6F*))(Il2CppBase() + 0x20F5EC))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(DestroyItselfcIterator6F*))(Il2CppBase() + 0x20FCA0))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DestroyItselfcIterator6F*))(Il2CppBase() + 0x20FCA8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(DestroyItselfcIterator6F*))(Il2CppBase() + 0x20FCB0))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(DestroyItselfcIterator6F*))(Il2CppBase() + 0x20FF04))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DestroyItselfcIterator6F*))(Il2CppBase() + 0x20FF10))(this);
	}
};
