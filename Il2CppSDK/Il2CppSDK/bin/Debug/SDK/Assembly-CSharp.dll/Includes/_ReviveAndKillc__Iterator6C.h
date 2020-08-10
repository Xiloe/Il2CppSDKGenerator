#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReviveAndKillcIterator6C
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& agents__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& $s_516__1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& agent__2() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& dir__3() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ReviveAndKillcIterator6C*))(Il2CppBase() + 0x3CF338))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(ReviveAndKillcIterator6C*))(Il2CppBase() + 0x3CF484))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ReviveAndKillcIterator6C*))(Il2CppBase() + 0x3CF48C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ReviveAndKillcIterator6C*))(Il2CppBase() + 0x3CF494))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ReviveAndKillcIterator6C*))(Il2CppBase() + 0x3CFBA4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ReviveAndKillcIterator6C*))(Il2CppBase() + 0x3CFCEC))(this);
	}
};
