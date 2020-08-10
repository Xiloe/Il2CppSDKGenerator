#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScreenSpaceGlowEmitter
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7945C);
	}
	// Fields
	template <typename T = void*> T& m_GlowType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppColor> T& m_Color() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_Intensity() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_Radius() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_MaxVisDist() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_ConeAngle() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_InstanceID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_ColLayerMask() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> static T& ms_Instances() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ms_InstCnt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ScreenSpaceGlowEmitter*))(Il2CppBase() + 0x22A4E4))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x22A584))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ScreenSpaceGlowEmitter*))(Il2CppBase() + 0x22A644))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ScreenSpaceGlowEmitter*))(Il2CppBase() + 0x22A758))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(ScreenSpaceGlowEmitter*))(Il2CppBase() + 0x22A844))(this);
	}
};
