#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FadeInAudioCoroutcIterator51
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& beginFadeTime__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& fadeTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& targetVolume() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& volume__1() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& $fadeTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& $targetVolume() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(FadeInAudioCoroutcIterator51*))(Il2CppBase() + 0x402C48))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(FadeInAudioCoroutcIterator51*))(Il2CppBase() + 0x404644))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(FadeInAudioCoroutcIterator51*))(Il2CppBase() + 0x40464C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(FadeInAudioCoroutcIterator51*))(Il2CppBase() + 0x404654))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(FadeInAudioCoroutcIterator51*))(Il2CppBase() + 0x4047FC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(FadeInAudioCoroutcIterator51*))(Il2CppBase() + 0x404808))(this);
	}
};
