#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BloodFXManager
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7879C);
	}
	// Fields
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& m_BloodOverlayMeshGameObj() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_Material() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector2> T& m_MinSize() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& m_MaxSize() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector2> T& m_DropMinSize() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector2> T& m_DropMaxSize() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_Duration() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_DropsDuration() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_DurationVariation() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_DropsDurationVariation() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& m_MaxVisibleDrops() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& m_MaxVisibleSplashes() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_HurtHealthThreshold() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_HeartBeatFreqScale() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> T& m_MeshFilter() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& m_MeshRenderer() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = void*> T& m_Mesh() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint32_t> T& m_DecalsVersion() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uint32_t> T& m_BuffersVersion() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& m_AspectRatio() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& m_PrevDbgBtnState() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& m_NumSplashesDropTexTilesU() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& m_NumSplashesDropTexTilesV() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uint32_t> T& m_NumSpawnedDrops() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uint32_t> T& m_NumSpawnedSplashes() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& m_CurrHurtLevel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& m_NumHurtLevels() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& m_CurrHealth() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<void*>*> T& m_DecalPosIdxPerHurtLevels() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& m_DbgHurtLevel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& m_DbgHealth() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = void*> T& m_BloodOverlayMeshGOInst() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppArray<void*>*> T& m_BloodOverlayMeshMaterials() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& m_BloodDropsTexNumTilesU() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& m_BloodDropsTexNumTilesV() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& TimeSinceStart() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = void*> T& m_Random() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& m_PrevDbgKeyState() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppList<void*>*> T& m_Decals() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(BloodFXManager*))(Il2CppBase() + 0x1DC6E4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BloodFXManager*))(Il2CppBase() + 0x1DC9BC))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(BloodFXManager*))(Il2CppBase() + 0x1DD08C))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(BloodFXManager*))(Il2CppBase() + 0x1DD0F0))(this);
	}
	template <typename T = void> T InitMeshes() {
		return ((T (*)(BloodFXManager*))(Il2CppBase() + 0x1DCAB0))(this);
	}
	template <typename T = void> T UpdateMeshBuffers() {
		return ((T (*)(BloodFXManager*))(Il2CppBase() + 0x1DD5EC))(this);
	}
	template <typename T = void> T KillOldDecals() {
		return ((T (*)(BloodFXManager*))(Il2CppBase() + 0x1DD3BC))(this);
	}
	template <typename T = void> T KillDecalById(int32_t id) {
		return ((T (*)(BloodFXManager*, int32_t))(Il2CppBase() + 0x1DE5B4))(this, id);
	}
	template <typename T = uint32_t> static T GetNumDropsForIntensity(float intensity) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x1DE6E8))(0, intensity);
	}
	template <typename T = uint32_t> static T GetNumSplashesForIntensity(float intensity) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x1DE704))(0, intensity);
	}
	template <typename T = Il2CppVector2> static T GetHeavySplatterPos(int32_t idx) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1DE720))(0, idx);
	}
	template <typename T = Il2CppVector2> T CalcHeavySplatterRandomPos() {
		return ((T (*)(BloodFXManager*))(Il2CppBase() + 0x1DE844))(this);
	}
	template <typename T = float> T RandomNext(float min, float max) {
		return ((T (*)(BloodFXManager*, float, float))(Il2CppBase() + 0x1DE8DC))(this, min, max);
	}
	template <typename T = void> T SpawnBloodDrops(uint32_t cnt) {
		return ((T (*)(BloodFXManager*, uint32_t))(Il2CppBase() + 0x1DE954))(this, cnt);
	}
	template <typename T = void> T SpawnBloodSplashes(uint32_t cnt) {
		return ((T (*)(BloodFXManager*, uint32_t))(Il2CppBase() + 0x1DEEDC))(this, cnt);
	}
	template <typename T = void> T SpawnBloodSplatterAuto(float intensity) {
		return ((T (*)(BloodFXManager*, float))(Il2CppBase() + 0x1DF39C))(this, intensity);
	}
	template <typename T = void> T SetSlomoEffectNormalized(float value) {
		return ((T (*)(BloodFXManager*, float))(Il2CppBase() + 0x1DF3FC))(this, value);
	}
	template <typename T = void> T DbgEmit() {
		return ((T (*)(BloodFXManager*))(Il2CppBase() + 0x1DF44C))(this);
	}
};
