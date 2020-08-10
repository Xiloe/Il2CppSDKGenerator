#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RotateObject
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Transform() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_Mesh() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_RotationSpeedX() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_RotationSpeedY() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_RotationSpeedZ() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& SpeedMultiplier() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(RotateObject*))(Il2CppBase() + 0x2221DC))(this);
	}
	template <typename T = float> T get_SpeedMultiplier() {
		return ((T (*)(RotateObject*))(Il2CppBase() + 0x2221E4))(this);
	}
	template <typename T = void> T set_SpeedMultiplier(float value) {
		return ((T (*)(RotateObject*, float))(Il2CppBase() + 0x2221EC))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RotateObject*))(Il2CppBase() + 0x2221F4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RotateObject*))(Il2CppBase() + 0x222294))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RotateObject*))(Il2CppBase() + 0x222298))(this);
	}
};
