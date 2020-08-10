#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RemoveMaskcIterator13
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& MaskObj() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& maskComp__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& maskRenderer__1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& maskOrigMat__2() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& $MaskObj() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(RemoveMaskcIterator13*))(Il2CppBase() + 0x31191C))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(RemoveMaskcIterator13*))(Il2CppBase() + 0x311AB4))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(RemoveMaskcIterator13*))(Il2CppBase() + 0x311ABC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(RemoveMaskcIterator13*))(Il2CppBase() + 0x311AC4))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(RemoveMaskcIterator13*))(Il2CppBase() + 0x311E50))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(RemoveMaskcIterator13*))(Il2CppBase() + 0x311E5C))(this);
	}
};
