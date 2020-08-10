#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MFExplosionPostFX
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD789B4);
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
	template <typename T = int32_t> T& m_MaxWaves() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_InitOK() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_PrevDbgBtnState() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = void*> T& m_GameObj() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_WaveAmplitude() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_WaveFreq() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_WaveSpeed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_WaveDuration() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_WaveMaxRadius() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& m_ColorizationIntensity() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_TimeScale() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppColor> T& m_Color0() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppColor> T& m_Color1() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<void*>*> T& m_ActiveWaves() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = void*> T& m_FreeWaveEmitterSlots() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MFExplosionPostFX*))(Il2CppBase() + 0x3EA768))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EA8FC))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MFExplosionPostFX*))(Il2CppBase() + 0x3EA900))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(MFExplosionPostFX*))(Il2CppBase() + 0x3EAC0C))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(MFExplosionPostFX*))(Il2CppBase() + 0x3EACC0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(MFExplosionPostFX*))(Il2CppBase() + 0x3EAE54))(this);
	}
	template <typename T = void> T OnRenderImage(void* source, void* destination) {
		return ((T (*)(MFExplosionPostFX*, void*, void*))(Il2CppBase() + 0x3EAF64))(this, source, destination);
	}
	template <typename T = bool> T DoInit() {
		return ((T (*)(MFExplosionPostFX*))(Il2CppBase() + 0x3EAA8C))(this);
	}
	template <typename T = bool> T InitMeshes() {
		return ((T (*)(MFExplosionPostFX*))(Il2CppBase() + 0x3EBA00))(this);
	}
	template <typename T = void> T UpdateEmitters() {
		return ((T (*)(MFExplosionPostFX*))(Il2CppBase() + 0x3EACC4))(this);
	}
	template <typename T = void> T SetWaveShaderParams(int32_t slotIdx, void* paramSet0, void* paramSet1) {
		return ((T (*)(MFExplosionPostFX*, int32_t, void*, void*))(Il2CppBase() + 0x3EB6BC))(this, slotIdx, paramSet0, paramSet1);
	}
	template <typename T = void> T SetupWaveShaderParams(void* emitter) {
		return ((T (*)(MFExplosionPostFX*, void*))(Il2CppBase() + 0x3EB97C))(this, emitter);
	}
	template <typename T = void> T EmitGrenadeExplosionWave(Il2CppVector2 normScreenPos, void* waveParams) {
		return ((T (*)(MFExplosionPostFX*, Il2CppVector2, void*))(Il2CppBase() + 0x3EC334))(this, normScreenPos, waveParams);
	}
	template <typename T = int32_t> T NumActiveEffects() {
		return ((T (*)(MFExplosionPostFX*))(Il2CppBase() + 0x3EC698))(this);
	}
	template <typename T = void> T DbgEmitWave() {
		return ((T (*)(MFExplosionPostFX*))(Il2CppBase() + 0x3EC730))(this);
	}
};
