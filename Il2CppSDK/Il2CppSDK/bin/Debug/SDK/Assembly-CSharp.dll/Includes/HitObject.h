#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HitObject
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& InteractionObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& Owner() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(HitObject*))(Il2CppBase() + 0x39E6D0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(HitObject*))(Il2CppBase() + 0x39E6D8))(this);
	}
	template <typename T = void> T OnDone() {
		return ((T (*)(HitObject*))(Il2CppBase() + 0x39E6E0))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(HitObject*))(Il2CppBase() + 0x39E6E4))(this);
	}
};
