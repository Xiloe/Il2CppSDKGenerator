#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MirrorReflection
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79498);
	}
	// Fields
	template <typename T = bool> T& m_DisablePixelLights() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_TextureSize() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_ClipPlaneOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_ReflectLayers() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_ReflectionCameras() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_ReflectionTexture() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_OldReflectionTextureSize() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> static T& s_InsideRendering() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MirrorReflection*))(Il2CppBase() + 0x3FDD78))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FDE44))(0);
	}
	template <typename T = void> T OnWillRenderObject() {
		return ((T (*)(MirrorReflection*))(Il2CppBase() + 0x3FDE48))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(MirrorReflection*))(Il2CppBase() + 0x4005C0))(this);
	}
	template <typename T = void> T UpdateCameraModes(void* src, void* dest) {
		return ((T (*)(MirrorReflection*, void*, void*))(Il2CppBase() + 0x3FFA48))(this, src, dest);
	}
	template <typename T = void> T CreateMirrorObjects(void* currentCamera, void** reflectionCamera) {
		return ((T (*)(MirrorReflection*, void*, void**))(Il2CppBase() + 0x3FF288))(this, currentCamera, reflectionCamera);
	}
	template <typename T = float> static T sgn(float a) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x400B74))(0, a);
	}
	template <typename T = void*> T CameraSpacePlane(void* cam, Il2CppVector3 pos, Il2CppVector3 normal, float sideSign) {
		return ((T (*)(MirrorReflection*, void*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x400070))(this, cam, pos, normal, sideSign);
	}
	template <typename T = void> static T CalculateObliqueMatrix(void* projection, void* clipPlane) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x400268))(0, projection, clipPlane);
	}
	template <typename T = void> static T CalculateReflectionMatrix(void* reflectionMat, void* plane) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x3FFD94))(0, reflectionMat, plane);
	}
};
