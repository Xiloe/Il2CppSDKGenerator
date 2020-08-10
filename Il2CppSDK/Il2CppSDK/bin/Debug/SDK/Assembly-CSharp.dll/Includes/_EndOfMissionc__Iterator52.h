#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EndOfMissioncIterator52
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& touchDelegate() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& $result() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& $touchDelegate() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EndOfMissioncIterator52*))(Il2CppBase() + 0x4032D8))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(EndOfMissioncIterator52*))(Il2CppBase() + 0x403D24))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(EndOfMissioncIterator52*))(Il2CppBase() + 0x403D2C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(EndOfMissioncIterator52*))(Il2CppBase() + 0x403D34))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(EndOfMissioncIterator52*))(Il2CppBase() + 0x4045A4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(EndOfMissioncIterator52*))(Il2CppBase() + 0x4045B0))(this);
	}
};
