#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DoUnloadAndGCcIterator3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DoUnloadAndGC>c__Iterator3"));
	}

	template <typename T = int32_t> T& startTick__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& agcTimecost__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(DoUnloadAndGCcIterator3*))(Il2CppBase() + 0x2B9664C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(DoUnloadAndGCcIterator3*))(Il2CppBase() + 0x2B96AFC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DoUnloadAndGCcIterator3*))(Il2CppBase() + 0x2B96B04))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(DoUnloadAndGCcIterator3*))(Il2CppBase() + 0x2B96B0C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DoUnloadAndGCcIterator3*))(Il2CppBase() + 0x2B96B20))(this);
	}

};

}
