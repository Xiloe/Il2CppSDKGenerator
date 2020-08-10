#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayFlyParticlecIterator94
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
		return ((T (*)(PlayFlyParticlecIterator94*))(Il2CppBase() + 0x21878C))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(PlayFlyParticlecIterator94*))(Il2CppBase() + 0x219C74))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(PlayFlyParticlecIterator94*))(Il2CppBase() + 0x219C7C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(PlayFlyParticlecIterator94*))(Il2CppBase() + 0x219C84))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(PlayFlyParticlecIterator94*))(Il2CppBase() + 0x21A008))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PlayFlyParticlecIterator94*))(Il2CppBase() + 0x21A014))(this);
	}
};
