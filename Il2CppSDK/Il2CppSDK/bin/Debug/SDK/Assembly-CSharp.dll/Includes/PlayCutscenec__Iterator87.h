#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayCutscenecIterator87
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& $s_643__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& a__1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& old__2() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& $s_644__3() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& a__4() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& action__5() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& $s_645__6() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& a__7() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PlayCutscenecIterator87*))(Il2CppBase() + 0x1F4CF0))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(PlayCutscenecIterator87*))(Il2CppBase() + 0x1F4D04))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(PlayCutscenecIterator87*))(Il2CppBase() + 0x1F4D0C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(PlayCutscenecIterator87*))(Il2CppBase() + 0x1F4D14))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(PlayCutscenecIterator87*))(Il2CppBase() + 0x1F62D4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PlayCutscenecIterator87*))(Il2CppBase() + 0x1F62E0))(this);
	}
};
