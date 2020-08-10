#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyItselfcIterator75
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
		return ((T (*)(DestroyItselfcIterator75*))(Il2CppBase() + 0x1D5798))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(DestroyItselfcIterator75*))(Il2CppBase() + 0x1D57A0))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DestroyItselfcIterator75*))(Il2CppBase() + 0x1D57A8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(DestroyItselfcIterator75*))(Il2CppBase() + 0x1D57B0))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(DestroyItselfcIterator75*))(Il2CppBase() + 0x1D5B04))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DestroyItselfcIterator75*))(Il2CppBase() + 0x1D5B10))(this);
	}
};
