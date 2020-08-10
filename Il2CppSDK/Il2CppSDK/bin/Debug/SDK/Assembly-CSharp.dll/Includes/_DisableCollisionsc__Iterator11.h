#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DisableCollisionscIterator11
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
		return ((T (*)(DisableCollisionscIterator11*))(Il2CppBase() + 0x1C22F4))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(DisableCollisionscIterator11*))(Il2CppBase() + 0x1C22FC))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DisableCollisionscIterator11*))(Il2CppBase() + 0x1C2304))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(DisableCollisionscIterator11*))(Il2CppBase() + 0x1C230C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(DisableCollisionscIterator11*))(Il2CppBase() + 0x1C24AC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DisableCollisionscIterator11*))(Il2CppBase() + 0x1C24B8))(this);
	}
};
