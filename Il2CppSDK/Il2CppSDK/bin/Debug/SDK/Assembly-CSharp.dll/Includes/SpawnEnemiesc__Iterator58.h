#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnEnemiescIterator58
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& i__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SpawnEnemiescIterator58*))(Il2CppBase() + 0x2555CC))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(SpawnEnemiescIterator58*))(Il2CppBase() + 0x25593C))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(SpawnEnemiescIterator58*))(Il2CppBase() + 0x255944))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(SpawnEnemiescIterator58*))(Il2CppBase() + 0x25594C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(SpawnEnemiescIterator58*))(Il2CppBase() + 0x255B58))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SpawnEnemiescIterator58*))(Il2CppBase() + 0x255B64))(this);
	}
};
