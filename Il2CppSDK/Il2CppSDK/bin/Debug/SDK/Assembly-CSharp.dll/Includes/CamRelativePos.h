#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CamRelativePos
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppVector3> T& m_Offset() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_HorizontalOnly() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_OwnerTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CamRelativePos*))(Il2CppBase() + 0x28A9D0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CamRelativePos*))(Il2CppBase() + 0x28AA2C))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(CamRelativePos*))(Il2CppBase() + 0x28AA48))(this);
	}
};
