#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LightningFX
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppVector3> T& m_Extents() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_EmitPlaneX() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_EmitPlaneY() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = bool> T& m_EmitPlaneZ() {
		return *(T*)((uintptr_t)this + 0x1E);
	}
	template <typename T = bool> T& m_EmitParallelLines() {
		return *(T*)((uintptr_t)this + 0x1F);
	}
	template <typename T = int32_t> T& m_MaxLines() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_NoiseAmplitudes() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_NoiseFrequencies() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_NoiseSpeeds() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector2> T& m_Amplitude() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppVector2> T& m_DurationOnOff() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& m_LinesWidth() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& m_InvWaveSpeed() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppColor> T& m_Color() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = void*> T& m_MeshFilter() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = void*> T& m_MeshRenderer() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = void*> T& m_Mesh() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = void*> T& m_Material() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<void*>*> T& m_EmitPlanes() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& m_NumEmitPlanes() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& m_NumEmitAxes() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(LightningFX*))(Il2CppBase() + 0x3D2374))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LightningFX*))(Il2CppBase() + 0x3D25D0))(this);
	}
	template <typename T = bool> T InitMeshes() {
		return ((T (*)(LightningFX*))(Il2CppBase() + 0x3D2808))(this);
	}
	template <typename T = void> T InitInternalMeshBuffers(int32_t numLines) {
		return ((T (*)(LightningFX*, int32_t))(Il2CppBase() + 0x3D3034))(this, numLines);
	}
	template <typename T = void> T SetupLineSegmentLinear(int32_t idx, int32_t startSeg, int32_t numSegments, Il2CppVector3 startPt, Il2CppVector3 endPt) {
		return ((T (*)(LightningFX*, int32_t, int32_t, int32_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3D3668))(this, idx, startSeg, numSegments, startPt, endPt);
	}
	template <typename T = void> T SetupLineSegmentRadial(int32_t idx, Il2CppVector3 center, float radius, float angle, void* m) {
		return ((T (*)(LightningFX*, int32_t, Il2CppVector3, float, float, void*))(Il2CppBase() + 0x3D3D30))(this, idx, center, radius, angle, m);
	}
	template <typename T = void> T InitEmitPlanes() {
		return ((T (*)(LightningFX*))(Il2CppBase() + 0x3D4498))(this);
	}
	template <typename T = void> T GeneratePts(void** pt0, void** pt1) {
		return ((T (*)(LightningFX*, void**, void**))(Il2CppBase() + 0x3D4E30))(this, pt0, pt1);
	}
	template <typename T = void> T Generate() {
		return ((T (*)(LightningFX*))(Il2CppBase() + 0x3D2C74))(this);
	}
	template <typename T = void> T SetMaterialParams() {
		return ((T (*)(LightningFX*))(Il2CppBase() + 0x3D2D38))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(LightningFX*))(Il2CppBase() + 0x3D51F8))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(LightningFX*))(Il2CppBase() + 0x3D5228))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(LightningFX*))(Il2CppBase() + 0x3D53A4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(LightningFX*))(Il2CppBase() + 0x3D53F0))(this);
	}
};
