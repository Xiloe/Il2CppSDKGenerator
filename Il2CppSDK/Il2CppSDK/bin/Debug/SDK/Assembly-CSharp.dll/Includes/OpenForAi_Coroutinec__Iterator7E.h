#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OpenForAiCoroutinecIterator7E
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& time__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(OpenForAiCoroutinecIterator7E*))(Il2CppBase() + 0x30C43C))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(OpenForAiCoroutinecIterator7E*))(Il2CppBase() + 0x30D184))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(OpenForAiCoroutinecIterator7E*))(Il2CppBase() + 0x30D18C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(OpenForAiCoroutinecIterator7E*))(Il2CppBase() + 0x30D194))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(OpenForAiCoroutinecIterator7E*))(Il2CppBase() + 0x30D650))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(OpenForAiCoroutinecIterator7E*))(Il2CppBase() + 0x30D65C))(this);
	}
};
