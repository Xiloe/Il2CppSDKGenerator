#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MFScreenSpaceVertexGridFX
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79454);
	}
	// Fields
	template <typename T = int32_t> T& m_ScreenGridXRes() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_ScreenGridYRes() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_MeshFilter() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_MeshRenderer() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_Mesh() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_InitOK() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_GameObj() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<void*>*> T& m_ActiveGlows() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_NumActiveGlows() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& m_GlowsIntensityMask() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_DirFadeoutStrength() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_MaxVisQueryResultAge() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_FlashbangPeakTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_FlashbangDuration() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<void*>*> T& m_Flashbangs() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = void*> T& m_GlowsVisCache() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& m_PrevDbgBtnState() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MFScreenSpaceVertexGridFX*))(Il2CppBase() + 0x3F5B14))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x3F5C50))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MFScreenSpaceVertexGridFX*))(Il2CppBase() + 0x3F5C54))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(MFScreenSpaceVertexGridFX*))(Il2CppBase() + 0x3F5E90))(this);
	}
	template <typename T = void> T InternalUpdate() {
		return ((T (*)(MFScreenSpaceVertexGridFX*))(Il2CppBase() + 0x3F5F44))(this);
	}
	template <typename T = int32_t> T NumActiveGlows() {
		return ((T (*)(MFScreenSpaceVertexGridFX*))(Il2CppBase() + 0x3F6768))(this);
	}
	template <typename T = bool> T AnyEffectActive() {
		return ((T (*)(MFScreenSpaceVertexGridFX*))(Il2CppBase() + 0x3F6770))(this);
	}
	template <typename T = void> T SelectActiveGlows() {
		return ((T (*)(MFScreenSpaceVertexGridFX*))(Il2CppBase() + 0x3F5F48))(this);
	}
	template <typename T = void> T SetGlowShaderParams(int32_t glowIdx, void* glowInfo, Il2CppVector3 camDir, Il2CppVector3 camPos) {
		return ((T (*)(MFScreenSpaceVertexGridFX*, int32_t, void*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3F6928))(this, glowIdx, glowInfo, camDir, camPos);
	}
	template <typename T = void> T SetupActiveGlowsShaderParams(Il2CppVector3 camDir, Il2CppVector3 camPos) {
		return ((T (*)(MFScreenSpaceVertexGridFX*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3F6F84))(this, camDir, camPos);
	}
	template <typename T = void> T ResetMaterialGlowParams() {
		return ((T (*)(MFScreenSpaceVertexGridFX*))(Il2CppBase() + 0x3F7024))(this);
	}
	template <typename T = float> T Impulse(float k, float x) {
		return ((T (*)(MFScreenSpaceVertexGridFX*, float, float))(Il2CppBase() + 0x3F7490))(this, k, x);
	}
	template <typename T = float> T FlashBangFunc(float t, float tPeak, float tDuration) {
		return ((T (*)(MFScreenSpaceVertexGridFX*, float, float, float))(Il2CppBase() + 0x3F7560))(this, t, tPeak, tDuration);
	}
	template <typename T = void*> T CalcGlobalColor() {
		return ((T (*)(MFScreenSpaceVertexGridFX*))(Il2CppBase() + 0x3F7658))(this);
	}
	template <typename T = void> T OnRenderImage(void* source, void* destination) {
		return ((T (*)(MFScreenSpaceVertexGridFX*, void*, void*))(Il2CppBase() + 0x3F7840))(this, source, destination);
	}
	template <typename T = bool> T DoInit() {
		return ((T (*)(MFScreenSpaceVertexGridFX*))(Il2CppBase() + 0x3F5D18))(this);
	}
	template <typename T = bool> T InitMeshes() {
		return ((T (*)(MFScreenSpaceVertexGridFX*))(Il2CppBase() + 0x3F8060))(this);
	}
	template <typename T = float> T RemapValue(float v, float r0, float r1, float p0, float p1) {
		return ((T (*)(MFScreenSpaceVertexGridFX*, float, float, float, float, float))(Il2CppBase() + 0x3F6828))(this, v, r0, r1, p0, p1);
	}
	template <typename T = void> T SpawnFlashbang(Il2CppColor col, float intensity) {
		return ((T (*)(MFScreenSpaceVertexGridFX*, Il2CppColor, float))(Il2CppBase() + 0x3F8994))(this, col, intensity);
	}
	template <typename T = void> T SpawnFlashbang_1(Il2CppColor col, float intensity, float duration) {
		return ((T (*)(MFScreenSpaceVertexGridFX*, Il2CppColor, float, float))(Il2CppBase() + 0x3F8A80))(this, col, intensity, duration);
	}
	template <typename T = int32_t> T NumActiveFlashbangs() {
		return ((T (*)(MFScreenSpaceVertexGridFX*))(Il2CppBase() + 0x3F8B6C))(this);
	}
	template <typename T = void> T DbgSpawnFlashbang() {
		return ((T (*)(MFScreenSpaceVertexGridFX*))(Il2CppBase() + 0x3F8C04))(this);
	}
};
