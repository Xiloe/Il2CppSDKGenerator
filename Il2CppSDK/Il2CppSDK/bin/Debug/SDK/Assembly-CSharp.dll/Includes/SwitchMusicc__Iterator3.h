#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SwitchMusiccIterator3
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& inMusicVolume() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& clip() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& fadeOutTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& volume__0() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& decrement__1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& fadeIntime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& volume__2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& increment__3() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& $inMusicVolume() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& $clip() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& $fadeOutTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& $fadeIntime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SwitchMusiccIterator3*))(Il2CppBase() + 0x40DEAC))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(SwitchMusiccIterator3*))(Il2CppBase() + 0x40DF80))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(SwitchMusiccIterator3*))(Il2CppBase() + 0x40DF88))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(SwitchMusiccIterator3*))(Il2CppBase() + 0x40DF90))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(SwitchMusiccIterator3*))(Il2CppBase() + 0x40E2F8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SwitchMusiccIterator3*))(Il2CppBase() + 0x40E304))(this);
	}
};
