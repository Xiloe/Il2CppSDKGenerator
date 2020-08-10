#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EffectUtils
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EffectUtils*))(Il2CppBase() + 0x30DE34))(this);
	}
	template <typename T = void> static T ShowRenderers(Il2CppArray<void*>* List) {
		return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x30DE3C))(0, List);
	}
	template <typename T = void> static T HideRenderers(Il2CppArray<void*>* List) {
		return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x30DEC4))(0, List);
	}
	template <typename T = bool> static T ActivateParticles(Il2CppArray<void*>* List) {
		return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x30DF4C))(0, List);
	}
	template <typename T = bool> static T AreParticlesFinished(Il2CppArray<void*>* List) {
		return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x30DFDC))(0, List);
	}
};
