#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SynchronizedPriorityQueue
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& queue() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& root() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor(void* queue) {
		return ((T (*)(SynchronizedPriorityQueue*, void*))(Il2CppBase() + 0x3DDC48))(this, queue);
	}
	template <typename T = void> T Enqueue(void* element) {
		return ((T (*)(SynchronizedPriorityQueue*, void*))(Il2CppBase() + 0x3DEA18))(this, element);
	}
	template <typename T = void*> T Dequeue() {
		return ((T (*)(SynchronizedPriorityQueue*))(Il2CppBase() + 0x3DEADC))(this);
	}
	template <typename T = void> T Remove(void* element) {
		return ((T (*)(SynchronizedPriorityQueue*, void*))(Il2CppBase() + 0x3DEBA0))(this, element);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(SynchronizedPriorityQueue*))(Il2CppBase() + 0x3DEC64))(this);
	}
	template <typename T = bool> T Contains(void* element) {
		return ((T (*)(SynchronizedPriorityQueue*, void*))(Il2CppBase() + 0x3DED1C))(this, element);
	}
	template <typename T = void*> T Peek() {
		return ((T (*)(SynchronizedPriorityQueue*))(Il2CppBase() + 0x3DEDE8))(this);
	}
	template <typename T = void> T CopyTo(void* array, int32_t index) {
		return ((T (*)(SynchronizedPriorityQueue*, void*, int32_t))(Il2CppBase() + 0x3DEEAC))(this, array, index);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(SynchronizedPriorityQueue*))(Il2CppBase() + 0x3DEF78))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(SynchronizedPriorityQueue*))(Il2CppBase() + 0x3DF03C))(this);
	}
	template <typename T = void*> T get_SyncRoot() {
		return ((T (*)(SynchronizedPriorityQueue*))(Il2CppBase() + 0x3DF044))(this);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(SynchronizedPriorityQueue*))(Il2CppBase() + 0x3DF04C))(this);
	}
};
