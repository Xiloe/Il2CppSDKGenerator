#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RestartCheckpointcIterator5C
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
		return ((T (*)(RestartCheckpointcIterator5C*))(Il2CppBase() + 0x385A6C))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(RestartCheckpointcIterator5C*))(Il2CppBase() + 0x385B4C))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(RestartCheckpointcIterator5C*))(Il2CppBase() + 0x385B54))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(RestartCheckpointcIterator5C*))(Il2CppBase() + 0x385B5C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(RestartCheckpointcIterator5C*))(Il2CppBase() + 0x385D94))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(RestartCheckpointcIterator5C*))(Il2CppBase() + 0x385DA0))(this);
	}
};
