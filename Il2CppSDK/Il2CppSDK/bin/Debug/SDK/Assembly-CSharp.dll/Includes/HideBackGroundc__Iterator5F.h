#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HideBackGroundcIterator5F
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
		return ((T (*)(HideBackGroundcIterator5F*))(Il2CppBase() + 0x39C0E0))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(HideBackGroundcIterator5F*))(Il2CppBase() + 0x39C1BC))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(HideBackGroundcIterator5F*))(Il2CppBase() + 0x39C1C4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(HideBackGroundcIterator5F*))(Il2CppBase() + 0x39C1CC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(HideBackGroundcIterator5F*))(Il2CppBase() + 0x39C38C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HideBackGroundcIterator5F*))(Il2CppBase() + 0x39C398))(this);
	}
};
