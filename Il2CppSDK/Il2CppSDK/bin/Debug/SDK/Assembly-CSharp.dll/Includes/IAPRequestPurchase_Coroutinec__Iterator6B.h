#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAPRequestPurchaseCoroutinecIterator6B
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& product() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& guid__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& $product() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& $callback() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(IAPRequestPurchaseCoroutinecIterator6B*))(Il2CppBase() + 0x24356C))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(IAPRequestPurchaseCoroutinecIterator6B*))(Il2CppBase() + 0x245428))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(IAPRequestPurchaseCoroutinecIterator6B*))(Il2CppBase() + 0x245430))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(IAPRequestPurchaseCoroutinecIterator6B*))(Il2CppBase() + 0x245438))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(IAPRequestPurchaseCoroutinecIterator6B*))(Il2CppBase() + 0x245680))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(IAPRequestPurchaseCoroutinecIterator6B*))(Il2CppBase() + 0x24568C))(this);
	}
};
