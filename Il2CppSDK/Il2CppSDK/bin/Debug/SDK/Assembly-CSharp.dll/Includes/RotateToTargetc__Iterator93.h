#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RotateToTargetcIterator93
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppVector3> T& dirToTarget__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppQuaternion> T& reqRot__1() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppQuaternion> T& actRot__2() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(RotateToTargetcIterator93*))(Il2CppBase() + 0x27B008))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(RotateToTargetcIterator93*))(Il2CppBase() + 0x27B010))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(RotateToTargetcIterator93*))(Il2CppBase() + 0x27B018))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(RotateToTargetcIterator93*))(Il2CppBase() + 0x27B020))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(RotateToTargetcIterator93*))(Il2CppBase() + 0x27B284))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(RotateToTargetcIterator93*))(Il2CppBase() + 0x27B290))(this);
	}
};
