#pragma once
#include <Il2Cpp/Il2Cpp.h>

namespace LSCollections { 
	class PriorityQueue
	{
	public: 
		static Il2CppClass *StaticClass() {
			return *(Il2CppClass **)(Il2CppBase() + 0xD793BC);
		}
		// Fields
		template <typename T = int32_t> T& currentLevel() {
			return *(T*)((uintptr_t)this + 0x8);
		}
		template <typename T = void*> T& header() {
			return *(T*)((uintptr_t)this + 0xC);
		}
		template <typename T = void*> T& rand() {
			return *(T*)((uintptr_t)this + 0x10);
		}
		template <typename T = int32_t> T& count() {
			return *(T*)((uintptr_t)this + 0x14);
		}
		template <typename T = int64_t> T& version() {
			return *(T*)((uintptr_t)this + 0x18);
		}
		template <typename T = void*> T& comparer() {
			return *(T*)((uintptr_t)this + 0x20);
		}
		// Methods
		template <typename T = void> T _ctor() {
			return ((T (*)(PriorityQueue*))(Il2CppBase() + 0x3DC8DC))(this);
		}
		template <typename T = void> T _ctor_1(void* comparer) {
			return ((T (*)(PriorityQueue*, void*))(Il2CppBase() + 0x3DCA78))(this, comparer);
		}
		template <typename T = void> T Enqueue(void* element) {
			return ((T (*)(PriorityQueue*, void*))(Il2CppBase() + 0x3DCB80))(this, element);
		}
		template <typename T = void*> T Dequeue() {
			return ((T (*)(PriorityQueue*))(Il2CppBase() + 0x3DD0CC))(this);
		}
		template <typename T = void> T Remove(void* element) {
			return ((T (*)(PriorityQueue*, void*))(Il2CppBase() + 0x3DD2C8))(this, element);
		}
		template <typename T = bool> T Contains(void* element) {
			return ((T (*)(PriorityQueue*, void*))(Il2CppBase() + 0x3DD720))(this, element);
		}
		template <typename T = void*> T Peek() {
			return ((T (*)(PriorityQueue*))(Il2CppBase() + 0x3DD99C))(this);
		}
		template <typename T = void> T Clear() {
			return ((T (*)(PriorityQueue*))(Il2CppBase() + 0x3DDAA8))(this);
		}
		template <typename T = void*> static T Synchronized(void* queue) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x3DDB60))(0, queue);
		}
		template <typename T = int32_t> T NextLevel() {
			return ((T (*)(PriorityQueue*))(Il2CppBase() + 0x3DCF74))(this);
		}
		template <typename T = void> T AssertValid() {
			return ((T (*)(PriorityQueue*))(Il2CppBase() + 0x3DDD40))(this);
		}
		template <typename T = void> static T Test() {
			return ((T (*)(void *))(Il2CppBase() + 0x3DDD88))(0);
		}
		template <typename T = bool> T get_IsSynchronized() {
			return ((T (*)(PriorityQueue*))(Il2CppBase() + 0x3DDFCC))(this);
		}
		template <typename T = int32_t> T get_Count() {
			return ((T (*)(PriorityQueue*))(Il2CppBase() + 0x3DDFD4))(this);
		}
		template <typename T = void> T CopyTo(void* array, int32_t index) {
			return ((T (*)(PriorityQueue*, void*, int32_t))(Il2CppBase() + 0x3DDFDC))(this, array, index);
		}
		template <typename T = void*> T get_SyncRoot() {
			return ((T (*)(PriorityQueue*))(Il2CppBase() + 0x3DE4C4))(this);
		}
		template <typename T = void*> T GetEnumerator() {
			return ((T (*)(PriorityQueue*))(Il2CppBase() + 0x3DE4C8))(this);
		}
	};
}
