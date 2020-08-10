#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BreakableObject
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& Health() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& AnimBreak() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<void*>*> T& Emitters() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<void*>*> T& Sounds() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& Active() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& Root() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& Animation() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& GameObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(BreakableObject*))(Il2CppBase() + 0x1E434C))(this);
	}
	template <typename T = bool> T get_IsActive() {
		return ((T (*)(BreakableObject*))(Il2CppBase() + 0x1E435C))(this);
	}
	template <typename T = Il2CppVector3> T get_Position() {
		return ((T (*)(BreakableObject*))(Il2CppBase() + 0x1E4364))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(BreakableObject*))(Il2CppBase() + 0x1E4390))(this);
	}
	template <typename T = void> T OnProjectileHit(void* projectile) {
		return ((T (*)(BreakableObject*, void*))(Il2CppBase() + 0x1E447C))(this, projectile);
	}
	template <typename T = void> T Break() {
		return ((T (*)(BreakableObject*))(Il2CppBase() + 0x1E453C))(this);
	}
	template <typename T = void> T OnStart() {
		return ((T (*)(BreakableObject*))(Il2CppBase() + 0x1E4A44))(this);
	}
	template <typename T = void> T OnDone() {
		return ((T (*)(BreakableObject*))(Il2CppBase() + 0x1E4A48))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BreakableObject*))(Il2CppBase() + 0x1E4A4C))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(BreakableObject*))(Il2CppBase() + 0x1E4AD0))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(BreakableObject*))(Il2CppBase() + 0x1E4B80))(this);
	}
	template <typename T = void*> T ParticleStop(void* emitter, float delay) {
		return ((T (*)(BreakableObject*, void*, float))(Il2CppBase() + 0x1E4C30))(this, emitter, delay);
	}
	template <typename T = void*> T SoundRun(void* audio, float delay) {
		return ((T (*)(BreakableObject*, void*, float))(Il2CppBase() + 0x1E48D4))(this, audio, delay);
	}
	template <typename T = void*> T SoundStop(void* audio, float delay) {
		return ((T (*)(BreakableObject*, void*, float))(Il2CppBase() + 0x1E498C))(this, audio, delay);
	}
};
