#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InternalShowHideDialogcIterator21
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = bool> T& show() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& scaleStart__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& scale__1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& layout() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& platform__2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& origSize__3() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& origPos() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& pos__4() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& totalTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& steps__5() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& scaleAdd__6() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& alphaAdd__7() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& initDelay() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& i__8() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& $show() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = void*> T& $layout() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppVector3> T& $origPos() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& $totalTime() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& $initDelay() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(InternalShowHideDialogcIterator21*))(Il2CppBase() + 0x2A9CCC))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(InternalShowHideDialogcIterator21*))(Il2CppBase() + 0x2AA948))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(InternalShowHideDialogcIterator21*))(Il2CppBase() + 0x2AA950))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(InternalShowHideDialogcIterator21*))(Il2CppBase() + 0x2AA958))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(InternalShowHideDialogcIterator21*))(Il2CppBase() + 0x2AB09C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(InternalShowHideDialogcIterator21*))(Il2CppBase() + 0x2AB0A8))(this);
	}
};
