#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CustomSceneLightmapData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> T& m_Lightmaps() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_LightProbesData() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_LightProbesScale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<void*>*> T& m_RendererInfos() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CustomSceneLightmapData*))(Il2CppBase() + 0x2EF578))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(CustomSceneLightmapData*))(Il2CppBase() + 0x2EF588))(this);
	}
	template <typename T = void> T Apply() {
		return ((T (*)(CustomSceneLightmapData*))(Il2CppBase() + 0x2EF58C))(this);
	}
	template <typename T = void> static T SetupLightmaps(Il2CppArray<void*>* lightmaps) {
		return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x2EF638))(0, lightmaps);
	}
	template <typename T = void> static T SetupRenderers(Il2CppArray<void*>* infos) {
		return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x2EF7E0))(0, infos);
	}
	template <typename T = void> static T SetupLightProbes(void* data, float scale) {
		return ((T (*)(void *, void*, float))(Il2CppBase() + 0x2EF8AC))(0, data, scale);
	}
	template <typename T = int32_t> static T FindClosest(Il2CppVector3 pos, Il2CppArray<void*>* positions) {
		return ((T (*)(void *, Il2CppVector3, Il2CppArray<void*>*))(Il2CppBase() + 0x2F0220))(0, pos, positions);
	}
};
