#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimStateDeath
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78830);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& DontDisableNavMesh() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor(void* anims, void* owner) {
		return ((T (*)(AnimStateDeath*, void*, void*))(Il2CppBase() + 0x1C12E0))(this, anims, owner);
	}
	template <typename T = void> T OnActivate(void* action) {
		return ((T (*)(AnimStateDeath*, void*))(Il2CppBase() + 0x1C12E8))(this, action);
	}
	template <typename T = void> T OnDeactivate() {
		return ((T (*)(AnimStateDeath*))(Il2CppBase() + 0x1C1398))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AnimStateDeath*))(Il2CppBase() + 0x1C13A0))(this);
	}
	template <typename T = bool> T HandleNewAction(void* action) {
		return ((T (*)(AnimStateDeath*, void*))(Il2CppBase() + 0x1C13CC))(this, action);
	}
	template <typename T = void> T CompleteOffMeshLink() {
		return ((T (*)(AnimStateDeath*))(Il2CppBase() + 0x1C148C))(this);
	}
	template <typename T = void> T Initialize(void* action) {
		return ((T (*)(AnimStateDeath*, void*))(Il2CppBase() + 0x1C16E4))(this, action);
	}
	template <typename T = void> T InitializeAnimation() {
		return ((T (*)(AnimStateDeath*))(Il2CppBase() + 0x1C1AAC))(this);
	}
	template <typename T = void> T InitializeRagdoll() {
		return ((T (*)(AnimStateDeath*))(Il2CppBase() + 0x1C1E3C))(this);
	}
	template <typename T = void> static T ApplyImpulseOnRagdoll(void* rootRigidbody, Il2CppVector3 impulse) {
		return ((T (*)(void *, void*, Il2CppVector3))(Il2CppBase() + 0x1C2064))(0, rootRigidbody, impulse);
	}
	template <typename T = void> T InitializeAlienDeath() {
		return ((T (*)(AnimStateDeath*))(Il2CppBase() + 0x1C19F4))(this);
	}
	template <typename T = void*> T _SlowDownAnimation() {
		return ((T (*)(AnimStateDeath*))(Il2CppBase() + 0x1C2248))(this);
	}
	template <typename T = void*> T _DisableCollisions(float delay) {
		return ((T (*)(AnimStateDeath*, float))(Il2CppBase() + 0x1C1FB0))(this, delay);
	}
};
