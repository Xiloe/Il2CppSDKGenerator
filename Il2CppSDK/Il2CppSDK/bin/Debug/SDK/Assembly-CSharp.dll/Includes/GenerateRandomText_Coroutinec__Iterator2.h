#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GenerateRandomTextCoroutinecIterator2
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& inMinSize() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& inMaxSize() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& $inMinSize() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& $inMaxSize() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GenerateRandomTextCoroutinecIterator2*))(Il2CppBase() + 0x35F278))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(GenerateRandomTextCoroutinecIterator2*))(Il2CppBase() + 0x35F280))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GenerateRandomTextCoroutinecIterator2*))(Il2CppBase() + 0x35F288))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(GenerateRandomTextCoroutinecIterator2*))(Il2CppBase() + 0x35F290))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(GenerateRandomTextCoroutinecIterator2*))(Il2CppBase() + 0x35F424))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GenerateRandomTextCoroutinecIterator2*))(Il2CppBase() + 0x35F430))(this);
	}
};
