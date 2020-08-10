#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaitAndAddChipscIterator14
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& time() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& amount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& $time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& $amount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(WaitAndAddChipscIterator14*))(Il2CppBase() + 0x28F294))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(WaitAndAddChipscIterator14*))(Il2CppBase() + 0x290828))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(WaitAndAddChipscIterator14*))(Il2CppBase() + 0x290830))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(WaitAndAddChipscIterator14*))(Il2CppBase() + 0x290838))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(WaitAndAddChipscIterator14*))(Il2CppBase() + 0x2909B8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(WaitAndAddChipscIterator14*))(Il2CppBase() + 0x2909C4))(this);
	}
};
