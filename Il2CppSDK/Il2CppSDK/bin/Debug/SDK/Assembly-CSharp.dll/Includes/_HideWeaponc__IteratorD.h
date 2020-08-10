#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HideWeaponcIteratorD
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& $delay() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(HideWeaponcIteratorD*))(Il2CppBase() + 0x1BB514))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(HideWeaponcIteratorD*))(Il2CppBase() + 0x1BB51C))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(HideWeaponcIteratorD*))(Il2CppBase() + 0x1BB524))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(HideWeaponcIteratorD*))(Il2CppBase() + 0x1BB52C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(HideWeaponcIteratorD*))(Il2CppBase() + 0x1BB674))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HideWeaponcIteratorD*))(Il2CppBase() + 0x1BB680))(this);
	}
};
