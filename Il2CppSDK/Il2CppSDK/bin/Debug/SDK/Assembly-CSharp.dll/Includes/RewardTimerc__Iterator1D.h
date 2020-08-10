#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RewardTimercIterator1D
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
		return ((T (*)(RewardTimercIterator1D*))(Il2CppBase() + 0x2A9BBC))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(RewardTimercIterator1D*))(Il2CppBase() + 0x2AB360))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(RewardTimercIterator1D*))(Il2CppBase() + 0x2AB368))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(RewardTimercIterator1D*))(Il2CppBase() + 0x2AB370))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(RewardTimercIterator1D*))(Il2CppBase() + 0x2AB428))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(RewardTimercIterator1D*))(Il2CppBase() + 0x2AB434))(this);
	}
};
