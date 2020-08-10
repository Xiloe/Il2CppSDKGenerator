#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimState
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& Animation() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_Finished() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& Owner() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Transform() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor(void* anims, void* owner) {
		return ((T (*)(AnimState*, void*, void*))(Il2CppBase() + 0x1B49F4))(this, anims, owner);
	}
	template <typename T = void> T OnActivate(void* action) {
		return ((T (*)(AnimState*, void*))(Il2CppBase() + 0x1B4A4C))(this, action);
	}
	template <typename T = void> T OnDeactivate() {
		return ((T (*)(AnimState*))(Il2CppBase() + 0x1B4E60))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AnimState*))(Il2CppBase() + 0x1B516C))(this);
	}
	template <typename T = void> T Release() {
		return ((T (*)(AnimState*))(Il2CppBase() + 0x1B5478))(this);
	}
	template <typename T = bool> T HandleNewAction(void* action) {
		return ((T (*)(AnimState*, void*))(Il2CppBase() + 0x1B54C0))(this, action);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AnimState*))(Il2CppBase() + 0x1B54C8))(this);
	}
	template <typename T = bool> T IsFinished() {
		return ((T (*)(AnimState*))(Il2CppBase() + 0x1B54CC))(this);
	}
	template <typename T = void> T SetFinished(bool finished) {
		return ((T (*)(AnimState*, bool))(Il2CppBase() + 0x1B54D4))(this, finished);
	}
	template <typename T = void> T HandleAnimationEvent(void* animEvent) {
		return ((T (*)(AnimState*, void*))(Il2CppBase() + 0x1B54DC))(this, animEvent);
	}
	template <typename T = void> T Initialize(void* action) {
		return ((T (*)(AnimState*, void*))(Il2CppBase() + 0x1B54E0))(this, action);
	}
	template <typename T = bool> T SetTargetLocation(Il2CppVector3 pos) {
		return ((T (*)(AnimState*, Il2CppVector3))(Il2CppBase() + 0x1B54E4))(this, pos);
	}
	template <typename T = bool> T Move(Il2CppVector3 velocity, bool slide) {
		return ((T (*)(AnimState*, Il2CppVector3, bool))(Il2CppBase() + 0x1B555C))(this, velocity, slide);
	}
	template <typename T = bool> T MoveEx(Il2CppVector3 velocity) {
		return ((T (*)(AnimState*, Il2CppVector3))(Il2CppBase() + 0x1B5634))(this, velocity);
	}
	template <typename T = bool> T IsGroundThere(Il2CppVector3 pos) {
		return ((T (*)(AnimState*, Il2CppVector3))(Il2CppBase() + 0x1B589C))(this, pos);
	}
	template <typename T = void> T CrossFade(Il2CppString* anim, float fadeInTime, void* mode) {
		return ((T (*)(AnimState*, Il2CppString*, float, void*))(Il2CppBase() + 0x1B595C))(this, anim, fadeInTime, mode);
	}
	template <typename T = void> T Blend(Il2CppString* anim, float fadeInTime) {
		return ((T (*)(AnimState*, Il2CppString*, float))(Il2CppBase() + 0x1B5E70))(this, anim, fadeInTime);
	}
	template <typename T = void> T Blend_1(Il2CppString* anim, float weight, float fadeInTime) {
		return ((T (*)(AnimState*, Il2CppString*, float, float))(Il2CppBase() + 0x1B6334))(this, anim, weight, fadeInTime);
	}
	template <typename T = bool> T PlayingInjury() {
		return ((T (*)(AnimState*))(Il2CppBase() + 0x1B6808))(this);
	}
	template <typename T = void> T PlayInjuryAnimation(void* action) {
		return ((T (*)(AnimState*, void*))(Il2CppBase() + 0x1B6864))(this, action);
	}
};
