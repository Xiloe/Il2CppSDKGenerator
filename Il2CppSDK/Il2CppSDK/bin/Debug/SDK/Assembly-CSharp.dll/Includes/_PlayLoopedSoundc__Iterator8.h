#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayLoopedSoundcIterator8
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& clip() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& fadeInTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& step__0() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& fadeOutTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& $clip() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& $delay() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& $fadeInTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& $time() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& $fadeOutTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PlayLoopedSoundcIterator8*))(Il2CppBase() + 0x1A6C20))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(PlayLoopedSoundcIterator8*))(Il2CppBase() + 0x1A71A8))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(PlayLoopedSoundcIterator8*))(Il2CppBase() + 0x1A71B0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(PlayLoopedSoundcIterator8*))(Il2CppBase() + 0x1A71B8))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(PlayLoopedSoundcIterator8*))(Il2CppBase() + 0x1A75E0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PlayLoopedSoundcIterator8*))(Il2CppBase() + 0x1A75EC))(this);
	}
};
