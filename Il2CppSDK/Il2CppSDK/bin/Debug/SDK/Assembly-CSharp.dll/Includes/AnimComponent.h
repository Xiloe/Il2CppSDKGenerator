#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimComponent
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& TypeOfFSM() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& FSM() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& Owner() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& Animation() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& ContactPlatfrom() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& ContactPoint() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AnimComponent*))(Il2CppBase() + 0x1ABEE0))(this);
	}
	template <typename T = void*> T get_CurrentAnimState() {
		return ((T (*)(AnimComponent*))(Il2CppBase() + 0x1ABEE8))(this);
	}
	template <typename T = void> T SetFSM(void* fsmType) {
		return ((T (*)(AnimComponent*, void*))(Il2CppBase() + 0x1ABF04))(this, fsmType);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AnimComponent*))(Il2CppBase() + 0x1AC41C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AnimComponent*))(Il2CppBase() + 0x1AC698))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AnimComponent*))(Il2CppBase() + 0x1AC870))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(AnimComponent*))(Il2CppBase() + 0x1ACC14))(this);
	}
	template <typename T = void> T OnControllerColliderHit(void* hit) {
		return ((T (*)(AnimComponent*, void*))(Il2CppBase() + 0x1ACC18))(this, hit);
	}
	template <typename T = void> T HandleAction(void* action) {
		return ((T (*)(AnimComponent*, void*))(Il2CppBase() + 0x1ACD68))(this, action);
	}
	template <typename T = void> T Activate(void* spawn) {
		return ((T (*)(AnimComponent*, void*))(Il2CppBase() + 0x1AD27C))(this, spawn);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(AnimComponent*))(Il2CppBase() + 0x1AC194))(this);
	}
	template <typename T = void> T OnTeleport() {
		return ((T (*)(AnimComponent*))(Il2CppBase() + 0x1A5F1C))(this);
	}
	template <typename T = void> T HandleAnimationEvent(void* animEvent) {
		return ((T (*)(AnimComponent*, void*))(Il2CppBase() + 0x1AD414))(this, animEvent);
	}
};
