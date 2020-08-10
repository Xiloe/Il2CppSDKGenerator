#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitializeCoroutinecIterator74
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& settings__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& hasSpentRealMoney() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& $hasSpentRealMoney() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(InitializeCoroutinecIterator74*))(Il2CppBase() + 0x209A28))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(InitializeCoroutinecIterator74*))(Il2CppBase() + 0x209A30))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(InitializeCoroutinecIterator74*))(Il2CppBase() + 0x209A38))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(InitializeCoroutinecIterator74*))(Il2CppBase() + 0x209A40))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(InitializeCoroutinecIterator74*))(Il2CppBase() + 0x209DAC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(InitializeCoroutinecIterator74*))(Il2CppBase() + 0x209DB8))(this);
	}
};
