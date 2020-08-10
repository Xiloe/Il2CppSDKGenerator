#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RequestObbFilePermissionscIterator89
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
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(RequestObbFilePermissionscIterator89*))(Il2CppBase() + 0x3DF370))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(RequestObbFilePermissionscIterator89*))(Il2CppBase() + 0x3E0210))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(RequestObbFilePermissionscIterator89*))(Il2CppBase() + 0x3E0218))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(RequestObbFilePermissionscIterator89*))(Il2CppBase() + 0x3E0220))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(RequestObbFilePermissionscIterator89*))(Il2CppBase() + 0x3E0560))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(RequestObbFilePermissionscIterator89*))(Il2CppBase() + 0x3E056C))(this);
	}
};
