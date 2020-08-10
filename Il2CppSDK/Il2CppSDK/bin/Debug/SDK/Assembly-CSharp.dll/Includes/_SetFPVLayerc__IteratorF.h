#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetFPVLayercIteratorF
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& fpvOn() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& $delay() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& $fpvOn() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SetFPVLayercIteratorF*))(Il2CppBase() + 0x1BE54C))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(SetFPVLayercIteratorF*))(Il2CppBase() + 0x1BF8BC))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(SetFPVLayercIteratorF*))(Il2CppBase() + 0x1BF8C4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(SetFPVLayercIteratorF*))(Il2CppBase() + 0x1BF8CC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(SetFPVLayercIteratorF*))(Il2CppBase() + 0x1BF9CC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SetFPVLayercIteratorF*))(Il2CppBase() + 0x1BF9D8))(this);
	}
};
