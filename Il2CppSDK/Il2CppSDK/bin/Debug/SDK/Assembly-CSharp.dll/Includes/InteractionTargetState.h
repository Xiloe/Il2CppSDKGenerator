#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InteractionTargetState
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& GameEvents() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<void*>*> T& Emitters() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<void*>*> T& Sounds() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& AnimationClip() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& Animation() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& CameraAnimation() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& Camera() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& GameObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(InteractionTargetState*))(Il2CppBase() + 0x3C9FB4))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(InteractionTargetState*))(Il2CppBase() + 0x3CA0C8))(this);
	}
	template <typename T = void> T Initialize(void* go) {
		return ((T (*)(InteractionTargetState*, void*))(Il2CppBase() + 0x3C8F7C))(this, go);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(InteractionTargetState*))(Il2CppBase() + 0x3C9344))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(InteractionTargetState*))(Il2CppBase() + 0x3C9864))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(InteractionTargetState*))(Il2CppBase() + 0x3C9D70))(this);
	}
	template <typename T = void> T EventHandler(Il2CppString* name, void* state) {
		return ((T (*)(InteractionTargetState*, Il2CppString*, void*))(Il2CppBase() + 0x3CA238))(this, name, state);
	}
	template <typename T = void> T InteractionStart() {
		return ((T (*)(InteractionTargetState*))(Il2CppBase() + 0x3CA4C8))(this);
	}
	template <typename T = void> T InteractionStartEx() {
		return ((T (*)(InteractionTargetState*))(Il2CppBase() + 0x3CAE90))(this);
	}
	template <typename T = void*> T SoundRun(void* audio, float delay) {
		return ((T (*)(InteractionTargetState*, void*, float))(Il2CppBase() + 0x3CAD20))(this, audio, delay);
	}
	template <typename T = void*> T SoundStop(void* audio, float delay) {
		return ((T (*)(InteractionTargetState*, void*, float))(Il2CppBase() + 0x3CADD8))(this, audio, delay);
	}
	template <typename T = void*> T PlayCameraAnim() {
		return ((T (*)(InteractionTargetState*))(Il2CppBase() + 0x3CAC7C))(this);
	}
};
