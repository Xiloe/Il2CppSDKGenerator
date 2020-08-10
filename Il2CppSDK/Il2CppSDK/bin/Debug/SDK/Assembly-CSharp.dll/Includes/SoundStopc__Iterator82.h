#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SoundStopcIterator82
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& audio() {
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
	template <typename T = void*> T& $audio() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SoundStopcIterator82*))(Il2CppBase() + 0x3CB088))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(SoundStopcIterator82*))(Il2CppBase() + 0x3CBA90))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(SoundStopcIterator82*))(Il2CppBase() + 0x3CBA98))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(SoundStopcIterator82*))(Il2CppBase() + 0x3CBAA0))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(SoundStopcIterator82*))(Il2CppBase() + 0x3CBB94))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SoundStopcIterator82*))(Il2CppBase() + 0x3CBBA0))(this);
	}
};
