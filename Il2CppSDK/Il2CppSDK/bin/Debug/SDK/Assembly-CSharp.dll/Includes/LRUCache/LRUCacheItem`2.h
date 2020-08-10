#pragma once
#include <Il2Cpp/Il2Cpp.h>

namespace LRUCache { 
	class LRUCacheItem2
	{
	public: 
		static Il2CppClass *StaticClass() {
			return *(Il2CppClass **)(Il2CppBase() + 0x0);
		}
		// Fields
		template <typename T = void*> T& key() {
			return *(T*)((uintptr_t)this + 0x0);
		}
		template <typename T = void*> T& value() {
			return *(T*)((uintptr_t)this + 0x0);
		}
		// Methods
		template <typename T = void> T _ctor(void* k, void* v) {
			return ((T (*)(LRUCacheItem2*, void*, void*))(Il2CppBase() + 0x4391A8))(this, k, v);
		}
	};
}
