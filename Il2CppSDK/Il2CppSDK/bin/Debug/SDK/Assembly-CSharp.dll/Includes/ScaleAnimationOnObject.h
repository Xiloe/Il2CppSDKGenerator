#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScaleAnimationOnObject
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppVector3> T& ScalePeek() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Type() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& MyTransform() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& Mesh() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& Center() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& ScaleTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ScaleAnimationOnObject*))(Il2CppBase() + 0x227660))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ScaleAnimationOnObject*))(Il2CppBase() + 0x2276C4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ScaleAnimationOnObject*))(Il2CppBase() + 0x22771C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ScaleAnimationOnObject*))(Il2CppBase() + 0x2277AC))(this);
	}
};
