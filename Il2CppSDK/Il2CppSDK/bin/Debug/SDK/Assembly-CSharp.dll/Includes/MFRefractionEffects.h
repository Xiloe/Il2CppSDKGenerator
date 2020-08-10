#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MFRefractionEffects
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79444);
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
	template <typename T = void*> T& m_ScreenDropsSimMeshFilter() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_Mesh() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_InitOK() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_GameObj() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_WaterScreenRefractionMat() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_WaterDropSizeMin() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_WaterDropSizeMax() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MFRefractionEffects*))(Il2CppBase() + 0x3F4A84))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x3F4AA8))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MFRefractionEffects*))(Il2CppBase() + 0x3F4AAC))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(MFRefractionEffects*))(Il2CppBase() + 0x3F4D2C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(MFRefractionEffects*))(Il2CppBase() + 0x3F4DE0))(this);
	}
	template <typename T = void> T SetDropletsColor(Il2CppColor col) {
		return ((T (*)(MFRefractionEffects*, Il2CppColor))(Il2CppBase() + 0x3F4DE4))(this, col);
	}
	template <typename T = void> T OnRenderImage(void* source, void* destination) {
		return ((T (*)(MFRefractionEffects*, void*, void*))(Il2CppBase() + 0x3F4EC0))(this, source, destination);
	}
	template <typename T = bool> T DoInit() {
		return ((T (*)(MFRefractionEffects*))(Il2CppBase() + 0x3F4BA8))(this);
	}
	template <typename T = bool> T InitMeshes() {
		return ((T (*)(MFRefractionEffects*))(Il2CppBase() + 0x3F5128))(this);
	}
};
