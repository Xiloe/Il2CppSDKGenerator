#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayCutscenecIterator84
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PlayCutscenecIterator84*))(Il2CppBase() + 0x3CC060))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(PlayCutscenecIterator84*))(Il2CppBase() + 0x3CC19C))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(PlayCutscenecIterator84*))(Il2CppBase() + 0x3CC1A4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(PlayCutscenecIterator84*))(Il2CppBase() + 0x3CC1AC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(PlayCutscenecIterator84*))(Il2CppBase() + 0x3CC2E0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PlayCutscenecIterator84*))(Il2CppBase() + 0x3CC2EC))(this);
	}
};
