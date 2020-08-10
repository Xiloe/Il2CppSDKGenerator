#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RangecIterator67
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& inFrom() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& inTo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& i__0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& $inFrom() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& $inTo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(RangecIterator67*))(Il2CppBase() + 0x25F3E0))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorStatistics_Item_get_Current() {
		return ((T (*)(RangecIterator67*))(Il2CppBase() + 0x26360C))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(RangecIterator67*))(Il2CppBase() + 0x263614))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(RangecIterator67*))(Il2CppBase() + 0x26361C))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableStatistics_Item_GetEnumerator() {
		return ((T (*)(RangecIterator67*))(Il2CppBase() + 0x263620))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(RangecIterator67*))(Il2CppBase() + 0x26370C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(RangecIterator67*))(Il2CppBase() + 0x26389C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(RangecIterator67*))(Il2CppBase() + 0x2638A8))(this);
	}
};
