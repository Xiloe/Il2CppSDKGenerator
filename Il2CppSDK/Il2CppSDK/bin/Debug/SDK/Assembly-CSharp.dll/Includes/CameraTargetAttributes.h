#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CameraTargetAttributes
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> T& HeightOffset() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& HeightType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& DistanceModifier() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& VelocityLookAhead() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector2> T& MaxLookAhead() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& HieghtSpeed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& CurrentHeightOffset() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CameraTargetAttributes*))(Il2CppBase() + 0x289470))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CameraTargetAttributes*))(Il2CppBase() + 0x2895D4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(CameraTargetAttributes*))(Il2CppBase() + 0x2895D8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CameraTargetAttributes*))(Il2CppBase() + 0x28961C))(this);
	}
	template <typename T = void> T ReSpawn(void* spawnTransform) {
		return ((T (*)(CameraTargetAttributes*, void*))(Il2CppBase() + 0x2896E0))(this, spawnTransform);
	}
};
