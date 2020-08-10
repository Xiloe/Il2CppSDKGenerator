#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FadeoutcIterator5
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& $delay() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(FadeoutcIterator5*))(Il2CppBase() + 0x1A6360))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(FadeoutcIterator5*))(Il2CppBase() + 0x1A7A74))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(FadeoutcIterator5*))(Il2CppBase() + 0x1A7A7C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(FadeoutcIterator5*))(Il2CppBase() + 0x1A7A84))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(FadeoutcIterator5*))(Il2CppBase() + 0x1A7E98))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(FadeoutcIterator5*))(Il2CppBase() + 0x1A7EA4))(this);
	}
};
