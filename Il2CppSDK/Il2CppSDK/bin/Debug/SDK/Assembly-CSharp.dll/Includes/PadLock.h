#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PadLock
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& Collision() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Animation() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& GameObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& AudioSource() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& AnimON() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& AnimOFF() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& AnimLoop() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& SoundOn() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& SoundOff() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& State() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& HideWhenUnlock() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PadLock*))(Il2CppBase() + 0x1EDFC4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PadLock*))(Il2CppBase() + 0x1EDFD4))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(PadLock*))(Il2CppBase() + 0x1EE1DC))(this);
	}
	template <typename T = void> T Lock() {
		return ((T (*)(PadLock*))(Il2CppBase() + 0x1EE310))(this);
	}
	template <typename T = void> T Unlock() {
		return ((T (*)(PadLock*))(Il2CppBase() + 0x1EE514))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PadLock*))(Il2CppBase() + 0x1EE090))(this);
	}
	template <typename T = void*> T Hide() {
		return ((T (*)(PadLock*))(Il2CppBase() + 0x1EE550))(this);
	}
	template <typename T = void> T CollisionOff() {
		return ((T (*)(PadLock*))(Il2CppBase() + 0x1EE5FC))(this);
	}
};
