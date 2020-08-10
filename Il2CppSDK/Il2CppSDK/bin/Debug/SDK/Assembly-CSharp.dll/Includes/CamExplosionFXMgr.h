#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CamExplosionFXMgr
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD789B0);
	}
	// Fields
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_PrevDbgBtnState() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CamExplosionFXMgr*))(Il2CppBase() + 0x289C78))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CamExplosionFXMgr*))(Il2CppBase() + 0x289C80))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(CamExplosionFXMgr*))(Il2CppBase() + 0x289D34))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(CamExplosionFXMgr*))(Il2CppBase() + 0x289DB8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CamExplosionFXMgr*))(Il2CppBase() + 0x289FB8))(this);
	}
	template <typename T = void> static T PreloadResources() {
		return ((T (*)(void *))(Il2CppBase() + 0x28A0E8))(0);
	}
	template <typename T = void> T CreateCamFXInstance() {
		return ((T (*)(CamExplosionFXMgr*))(Il2CppBase() + 0x28A258))(this);
	}
	template <typename T = void> T DisableCamFX() {
		return ((T (*)(CamExplosionFXMgr*))(Il2CppBase() + 0x289DBC))(this);
	}
	template <typename T = void> T DbgEmitFX() {
		return ((T (*)(CamExplosionFXMgr*))(Il2CppBase() + 0x28A428))(this);
	}
	template <typename T = void> T DbgEmitGrenadeExplWave() {
		return ((T (*)(CamExplosionFXMgr*))(Il2CppBase() + 0x28A4EC))(this);
	}
	template <typename T = void> T SpawnExplosionWaveFX(Il2CppVector3 worldPos, void* waveParams) {
		return ((T (*)(CamExplosionFXMgr*, Il2CppVector3, void*))(Il2CppBase() + 0x28A650))(this, worldPos, waveParams);
	}
	template <typename T = void> T SpawnExplosionWaveFX_1(Il2CppVector3 worldPos, void* waveParams, float inDelay) {
		return ((T (*)(CamExplosionFXMgr*, Il2CppVector3, void*, float))(Il2CppBase() + 0x28A98C))(this, worldPos, waveParams, inDelay);
	}
	template <typename T = bool> T InternalSpawnExplosionWaveFX(Il2CppVector3 worldPos, void* waveParams) {
		return ((T (*)(CamExplosionFXMgr*, Il2CppVector3, void*))(Il2CppBase() + 0x28A690))(this, worldPos, waveParams);
	}
};
