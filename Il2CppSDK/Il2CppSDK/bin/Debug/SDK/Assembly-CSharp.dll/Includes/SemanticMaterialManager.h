#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SemanticMaterialManager
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD796E8);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> T& m_Materials() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<void*>*> T& m_UVTable() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<void*>*> T& m_ImpactCaches() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<void*>*> T& m_Effects() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_AudioObj() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_AudioSrc() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_GfxCache_DisabledBlood() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SemanticMaterialManager*))(Il2CppBase() + 0x22BC90))(this);
	}
	template <typename T = void*> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x218FB4))(0);
	}
	template <typename T = void> static T set_Instance(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x22BD3C))(0, value);
	}
	template <typename T = void*> T get_Audio() {
		return ((T (*)(SemanticMaterialManager*))(Il2CppBase() + 0x22BDC0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SemanticMaterialManager*))(Il2CppBase() + 0x22BDC8))(this);
	}
	template <typename T = void> T InitImpactEffectCache(void* id, void* data) {
		return ((T (*)(SemanticMaterialManager*, void*, void*))(Il2CppBase() + 0x22C590))(this, id, data);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SemanticMaterialManager*))(Il2CppBase() + 0x22CA08))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SemanticMaterialManager*))(Il2CppBase() + 0x22CB0C))(this);
	}
	template <typename T = void> T SpawnPlacementEffect(void* hit) {
		return ((T (*)(SemanticMaterialManager*, void*))(Il2CppBase() + 0x22CC70))(this, hit);
	}
	template <typename T = void> T SpawnPlacementEffect_1(Il2CppVector3 pos) {
		return ((T (*)(SemanticMaterialManager*, Il2CppVector3))(Il2CppBase() + 0x22CF14))(this, pos);
	}
	template <typename T = void> T SpawnImpactEffect(void* coll) {
		return ((T (*)(SemanticMaterialManager*, void*))(Il2CppBase() + 0x219034))(this, coll);
	}
	template <typename T = void> T SpawnImpactEffect_1(Il2CppVector3 pos, Il2CppVector3 normal, void* id) {
		return ((T (*)(SemanticMaterialManager*, Il2CppVector3, Il2CppVector3, void*))(Il2CppBase() + 0x22D334))(this, pos, normal, id);
	}
	template <typename T = void> T SpawnProjectileImpactEffect(void* projType, void* hit) {
		return ((T (*)(SemanticMaterialManager*, void*, void*))(Il2CppBase() + 0x22D674))(this, projType, hit);
	}
	template <typename T = void> T SpawnEffect(void* sfx, Il2CppVector3 pos) {
		return ((T (*)(SemanticMaterialManager*, void*, Il2CppVector3))(Il2CppBase() + 0x22CE78))(this, sfx, pos);
	}
	template <typename T = void> T SpawnEffect_1(void* gfxCache, void* sfx, Il2CppVector3 pos, Il2CppVector3 dir) {
		return ((T (*)(SemanticMaterialManager*, void*, void*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x22D4CC))(this, gfxCache, sfx, pos, dir);
	}
	template <typename T = void*> T GetMaterial(void* id) {
		return ((T (*)(SemanticMaterialManager*, void*))(Il2CppBase() + 0x22D488))(this, id);
	}
	template <typename T = void*> T GetMaterial_1(void* pm) {
		return ((T (*)(SemanticMaterialManager*, void*))(Il2CppBase() + 0x22D8D8))(this, pm);
	}
	template <typename T = void*> T GetMaterial_2(void* coll) {
		return ((T (*)(SemanticMaterialManager*, void*))(Il2CppBase() + 0x22D08C))(this, coll);
	}
	template <typename T = void*> T GetMaterial_3(void* hit) {
		return ((T (*)(SemanticMaterialManager*, void*))(Il2CppBase() + 0x22CD34))(this, hit);
	}
	template <typename T = void*> T GetMaterial_4(Il2CppVector2 uv) {
		return ((T (*)(SemanticMaterialManager*, Il2CppVector2))(Il2CppBase() + 0x22D980))(this, uv);
	}
};
