#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HandleInterstitialsCoroutinecIterator71
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& wait1__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& wait4__1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& tryCount__2() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& showAdsSource__3() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(HandleInterstitialsCoroutinecIterator71*))(Il2CppBase() + 0x19B944))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(HandleInterstitialsCoroutinecIterator71*))(Il2CppBase() + 0x19C378))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(HandleInterstitialsCoroutinecIterator71*))(Il2CppBase() + 0x19C380))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(HandleInterstitialsCoroutinecIterator71*))(Il2CppBase() + 0x19C388))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(HandleInterstitialsCoroutinecIterator71*))(Il2CppBase() + 0x19C768))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HandleInterstitialsCoroutinecIterator71*))(Il2CppBase() + 0x19C774))(this);
	}
};
