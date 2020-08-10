#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadMissioncIterator17
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& info() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& $info() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(LoadMissioncIterator17*))(Il2CppBase() + 0x2BACB0))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(LoadMissioncIterator17*))(Il2CppBase() + 0x2BAFF8))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(LoadMissioncIterator17*))(Il2CppBase() + 0x2BB000))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(LoadMissioncIterator17*))(Il2CppBase() + 0x2BB008))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(LoadMissioncIterator17*))(Il2CppBase() + 0x2BB2B0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(LoadMissioncIterator17*))(Il2CppBase() + 0x2BB2BC))(this);
	}
};
