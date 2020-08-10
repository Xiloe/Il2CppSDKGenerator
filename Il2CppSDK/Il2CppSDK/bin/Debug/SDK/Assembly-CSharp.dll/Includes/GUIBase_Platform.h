#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GUIBasePlatform
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& m_Width() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_Height() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_GuiManager() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_PlayingAnims() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_AnimsToRemove() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_IsInitialized() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GUIBasePlatform*))(Il2CppBase() + 0x363B8C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GUIBasePlatform*))(Il2CppBase() + 0x363BA4))(this);
	}
	template <typename T = bool> T IsInitialized() {
		return ((T (*)(GUIBasePlatform*))(Il2CppBase() + 0x363D48))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GUIBasePlatform*))(Il2CppBase() + 0x363D50))(this);
	}
	template <typename T = void> T PlayAnim(void* animation, void* widget, void* finishDelegate, int32_t customIdx) {
		return ((T (*)(GUIBasePlatform*, void*, void*, void*, int32_t))(Il2CppBase() + 0x361488))(this, animation, widget, finishDelegate, customIdx);
	}
	template <typename T = void> T StopAnim(void* animation) {
		return ((T (*)(GUIBasePlatform*, void*))(Il2CppBase() + 0x3616E0))(this, animation);
	}
	template <typename T = void> T ProcessAnimations() {
		return ((T (*)(GUIBasePlatform*))(Il2CppBase() + 0x363D5C))(this);
	}
	template <typename T = void> T ProcessAnim(void* anim, float deltaTime, int32_t idx) {
		return ((T (*)(GUIBasePlatform*, void*, float, int32_t))(Il2CppBase() + 0x3641BC))(this, anim, deltaTime, idx);
	}
	template <typename T = void> T AnimationRemoved(int32_t customIdx, void* finishDelegate) {
		return ((T (*)(GUIBasePlatform*, int32_t, void*))(Il2CppBase() + 0x364B50))(this, customIdx, finishDelegate);
	}
};
