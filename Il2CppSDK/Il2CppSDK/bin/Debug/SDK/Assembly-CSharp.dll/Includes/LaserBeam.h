#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LaserBeam
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Transform() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_DotRenderer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_BeamRenderer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_BeamMinWidth() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_BeamMaxWidth() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_BeamMaxLength() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_BeamPulseDuration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_HitInfo() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(LaserBeam*))(Il2CppBase() + 0x3D1AEC))(this);
	}
	template <typename T = void*> T get_HitInfo() {
		return ((T (*)(LaserBeam*))(Il2CppBase() + 0x3D1C24))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LaserBeam*))(Il2CppBase() + 0x3D1C68))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LaserBeam*))(Il2CppBase() + 0x3D1E14))(this);
	}
};
