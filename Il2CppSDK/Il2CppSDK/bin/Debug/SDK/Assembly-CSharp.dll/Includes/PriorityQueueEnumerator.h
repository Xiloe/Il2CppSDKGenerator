#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PriorityQueueEnumerator
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& owner() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& head() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& currentNode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& moveResult() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int64_t> T& version() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(PriorityQueueEnumerator*, void*))(Il2CppBase() + 0x3DE558))(this, owner);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PriorityQueueEnumerator*))(Il2CppBase() + 0x3DE740))(this);
	}
	template <typename T = void*> T get_Current() {
		return ((T (*)(PriorityQueueEnumerator*))(Il2CppBase() + 0x3DE82C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(PriorityQueueEnumerator*))(Il2CppBase() + 0x3DE8F4))(this);
	}
};
