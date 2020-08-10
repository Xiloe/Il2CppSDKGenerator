#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReflectionCam
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& m_ReflectionPlaneHeightOffs() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_ClipPlaneOffset() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ReflectionCam*))(Il2CppBase() + 0x21A6D8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ReflectionCam*))(Il2CppBase() + 0x21A6EC))(this);
	}
	template <typename T = void> T UpdateReflCamPos(void* reflCam, void* viewCam) {
		return ((T (*)(ReflectionCam*, void*, void*))(Il2CppBase() + 0x21A6F0))(this, reflCam, viewCam);
	}
	template <typename T = void*> static T CalcPlanarReflMatrix(void* p) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x21AC74))(0, p);
	}
	template <typename T = float> static T sgn(float a) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x21B6E4))(0, a);
	}
	template <typename T = void*> T CameraSpacePlane(void* cam, Il2CppVector3 pos, Il2CppVector3 normal, float sideSign) {
		return ((T (*)(ReflectionCam*, void*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x21B224))(this, cam, pos, normal, sideSign);
	}
	template <typename T = void> static T CalculateObliqueMatrix(void* projection, void* clipPlane) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x21B41C))(0, projection, clipPlane);
	}
	template <typename T = void> T OnPreRender() {
		return ((T (*)(ReflectionCam*))(Il2CppBase() + 0x21B71C))(this);
	}
	template <typename T = void> T OnPostRender() {
		return ((T (*)(ReflectionCam*))(Il2CppBase() + 0x21B72C))(this);
	}
	template <typename T = void> T OnRenderObject() {
		return ((T (*)(ReflectionCam*))(Il2CppBase() + 0x21B73C))(this);
	}
};
