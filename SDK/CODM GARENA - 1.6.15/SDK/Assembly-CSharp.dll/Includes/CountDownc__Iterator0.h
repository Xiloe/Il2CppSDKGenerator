#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CountDowncIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CountDown>c__Iterator0"));
	}

	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(CountDowncIterator0*))(Il2CppBase() + 0x29D4648))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(CountDowncIterator0*))(Il2CppBase() + 0x29D488C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CountDowncIterator0*))(Il2CppBase() + 0x29D4894))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(CountDowncIterator0*))(Il2CppBase() + 0x29D489C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CountDowncIterator0*))(Il2CppBase() + 0x29D48B0))(this);
	}

};

}
