#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpriteEffectsManager
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79808);
	}
	// Fields
	template <typename T = int32_t> T& MaxSprites() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Sprites() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& SpriteManager() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SpriteEffectsManager*))(Il2CppBase() + 0x25A124))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SpriteEffectsManager*))(Il2CppBase() + 0x25A1C8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(SpriteEffectsManager*))(Il2CppBase() + 0x25A268))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(SpriteEffectsManager*))(Il2CppBase() + 0x25A26C))(this);
	}
	template <typename T = void> T CreateBloodSlatter(void* t, float minLen, float maxLen) {
		return ((T (*)(SpriteEffectsManager*, void*, float, float))(Il2CppBase() + 0x25A6C4))(this, t, minLen, maxLen);
	}
	template <typename T = void> T CreateBlood(Il2CppVector3 pos) {
		return ((T (*)(SpriteEffectsManager*, Il2CppVector3))(Il2CppBase() + 0x25AA64))(this, pos);
	}
	template <typename T = void> T ReleaseBloodSprites() {
		return ((T (*)(SpriteEffectsManager*))(Il2CppBase() + 0x25ACA0))(this);
	}
	template <typename T = void*> T UpdateSplatter(void* s, float size, float maxSize, float speed) {
		return ((T (*)(SpriteEffectsManager*, void*, float, float, float))(Il2CppBase() + 0x25A988))(this, s, size, maxSize, speed);
	}
};
