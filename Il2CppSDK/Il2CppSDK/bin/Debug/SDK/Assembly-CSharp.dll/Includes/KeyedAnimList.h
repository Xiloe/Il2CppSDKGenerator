#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KeyedAnimList
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& m_Animations() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T& m_TempList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(KeyedAnimList*))(Il2CppBase() + 0x1AE940))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AE9EC))(0);
	}
	template <typename T = void> T AddAnimation(void* anim) {
		return ((T (*)(KeyedAnimList*, void*))(Il2CppBase() + 0x1AEAA0))(this, anim);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(KeyedAnimList*))(Il2CppBase() + 0x1AEB48))(this);
	}
	template <typename T = Il2CppString*> T GetRandomAnim(float key, float threshold, Il2CppString* fallback) {
		return ((T (*)(KeyedAnimList*, float, float, Il2CppString*))(Il2CppBase() + 0x1AEBE0))(this, key, threshold, fallback);
	}
};
