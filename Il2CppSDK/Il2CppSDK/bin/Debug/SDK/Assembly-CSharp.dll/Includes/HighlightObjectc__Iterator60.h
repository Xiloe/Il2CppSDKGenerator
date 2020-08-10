#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HighlightObjectcIterator60
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& sprite() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& $sprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(HighlightObjectcIterator60*))(Il2CppBase() + 0x383E48))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(HighlightObjectcIterator60*))(Il2CppBase() + 0x383E54))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(HighlightObjectcIterator60*))(Il2CppBase() + 0x383E5C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(HighlightObjectcIterator60*))(Il2CppBase() + 0x383E64))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(HighlightObjectcIterator60*))(Il2CppBase() + 0x383FA8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HighlightObjectcIterator60*))(Il2CppBase() + 0x383FB4))(this);
	}
};
