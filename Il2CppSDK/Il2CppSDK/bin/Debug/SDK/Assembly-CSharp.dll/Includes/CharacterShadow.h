#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CharacterShadow
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Material() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_ShadowPlaneMesh() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_GroundOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_ShadowTexFPS() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_ShadowTexNumTiles() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_PelvisAOSphereRadius() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_FootAOSphereRadius() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& m_PelvisBoneName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& m_RFootBoneName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& m_LFootBoneName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_OrthoHalfExt() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_AOPlaneScale() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& m_MeshFilter() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& m_MeshRenderer() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& m_GameObject() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_InitOK() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& m_PelvisTransform() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& m_LFootTransform() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> T& m_RFootTransform() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, void*>*> T& m_AnimInfo() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CharacterShadow*))(Il2CppBase() + 0x293FF8))(this);
	}
	template <typename T = void*> T get_ShadowPlaneGameObject() {
		return ((T (*)(CharacterShadow*))(Il2CppBase() + 0x294118))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CharacterShadow*))(Il2CppBase() + 0x294120))(this);
	}
	template <typename T = bool> T DoInit() {
		return ((T (*)(CharacterShadow*))(Il2CppBase() + 0x294138))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(CharacterShadow*))(Il2CppBase() + 0x294784))(this);
	}
	template <typename T = void> T UpdateTextureBasedShadow() {
		return ((T (*)(CharacterShadow*))(Il2CppBase() + 0x294A00))(this);
	}
	template <typename T = void> T UpdateAOBasedShadow() {
		return ((T (*)(CharacterShadow*))(Il2CppBase() + 0x294794))(this);
	}
	template <typename T = void*> T GetCurrAnimInfo() {
		return ((T (*)(CharacterShadow*))(Il2CppBase() + 0x294EE8))(this);
	}
	template <typename T = bool> T InitAnimIndex() {
		return ((T (*)(CharacterShadow*))(Il2CppBase() + 0x295568))(this);
	}
};
