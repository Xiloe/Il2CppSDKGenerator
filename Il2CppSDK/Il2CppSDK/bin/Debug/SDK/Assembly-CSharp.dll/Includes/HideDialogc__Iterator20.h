#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HideDialogcIterator20
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& layout() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& origPos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& $layout() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& $origPos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(HideDialogcIterator20*))(Il2CppBase() + 0x2A9BD4))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(HideDialogcIterator20*))(Il2CppBase() + 0x2AA518))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(HideDialogcIterator20*))(Il2CppBase() + 0x2AA520))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(HideDialogcIterator20*))(Il2CppBase() + 0x2AA528))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(HideDialogcIterator20*))(Il2CppBase() + 0x2AA6B4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HideDialogcIterator20*))(Il2CppBase() + 0x2AA6C0))(this);
	}
};
