#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScreenDrops
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD796D0);
	}
	// Fields
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector2> T& m_DropMinSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& m_DropMaxSize() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_DropsDuration() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_DropsDurationVariation() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& m_MaxVisibleDrops() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_MeshFilter() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_MeshRenderer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_Mesh() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& m_DecalsVersion() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& m_BuffersVersion() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_AspectRatio() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& m_PrevDbgBtnState() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& m_NumSpawnedDrops() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_DropsTexNumTiles() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<void*>*> T& m_Decals() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ScreenDrops*))(Il2CppBase() + 0x227A24))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ScreenDrops*))(Il2CppBase() + 0x227B64))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ScreenDrops*))(Il2CppBase() + 0x227FDC))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(ScreenDrops*))(Il2CppBase() + 0x228060))(this);
	}
	template <typename T = void> T InitMeshes() {
		return ((T (*)(ScreenDrops*))(Il2CppBase() + 0x227C20))(this);
	}
	template <typename T = void> T UpdateMeshBuffers() {
		return ((T (*)(ScreenDrops*))(Il2CppBase() + 0x228438))(this);
	}
	template <typename T = void> T KillOldDecals() {
		return ((T (*)(ScreenDrops*))(Il2CppBase() + 0x228220))(this);
	}
	template <typename T = void> T KillDecalById(int32_t id) {
		return ((T (*)(ScreenDrops*, int32_t))(Il2CppBase() + 0x229400))(this, id);
	}
	template <typename T = void> T SpawnDrops(uint32_t cnt) {
		return ((T (*)(ScreenDrops*, uint32_t))(Il2CppBase() + 0x229534))(this, cnt);
	}
	template <typename T = void> T DbgEmitDecals() {
		return ((T (*)(ScreenDrops*))(Il2CppBase() + 0x22813C))(this);
	}
	template <typename T = int32_t> T NumDecals() {
		return ((T (*)(ScreenDrops*))(Il2CppBase() + 0x229940))(this);
	}
	template <typename T = void*> T GetMesh() {
		return ((T (*)(ScreenDrops*))(Il2CppBase() + 0x2299D8))(this);
	}
};
