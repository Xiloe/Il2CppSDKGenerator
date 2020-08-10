#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScreenFade
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Dialog() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& m_BlackPlane() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppVector3> T& m_OrigPos() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T Init(void* pivot) {
		return ((T (*)(ScreenFade*, void*))(Il2CppBase() + 0x2ABDBC))(this, pivot);
	}
	template <typename T = void> T Show(bool instant) {
		return ((T (*)(ScreenFade*, bool))(Il2CppBase() + 0x2ABDC4))(this, instant);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(ScreenFade*))(Il2CppBase() + 0x2ABDCC))(this);
	}
};
