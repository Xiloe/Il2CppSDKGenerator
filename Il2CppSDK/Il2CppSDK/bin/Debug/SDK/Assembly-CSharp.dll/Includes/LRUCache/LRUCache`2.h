#pragma once
#include <Il2Cpp/Il2Cpp.h>

namespace LRUCache { 
	class LRUCache2
	{
	public: 
		static Il2CppClass *StaticClass() {
			return *(Il2CppClass **)(Il2CppBase() + 0x0);
		}
		// Fields
		template <typename T = int32_t> T& capacity() {
			return *(T*)((uintptr_t)this + 0x0);
		}
		template <typename T = Il2CppDictionary<void*, void*>*> T& cacheMap() {
			return *(T*)((uintptr_t)this + 0x0);
		}
		template <typename T = void*> T& lruList() {
			return *(T*)((uintptr_t)this + 0x0);
		}
		// Methods
		template <typename T = void> T _ctor(int32_t capacity) {
			return ((T (*)(LRUCache2*, int32_t))(Il2CppBase() + 0x438CAC))(this, capacity);
		}
		template <typename T = bool> T get(void* key, void* retVal) {
			return ((T (*)(LRUCache2*, void*, void*))(Il2CppBase() + 0x438D60))(this, key, retVal);
		}
		template <typename T = void> T add(void* key, void* val) {
			return ((T (*)(LRUCache2*, void*, void*))(Il2CppBase() + 0x438EF4))(this, key, val);
		}
		template <typename T = void> T removeFirst() {
			return ((T (*)(LRUCache2*))(Il2CppBase() + 0x4390B0))(this);
		}
	};
}
