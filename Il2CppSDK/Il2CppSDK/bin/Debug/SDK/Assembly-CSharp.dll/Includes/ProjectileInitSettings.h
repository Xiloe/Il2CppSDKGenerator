#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProjectileInitSettings
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78884);
	}
	// Fields
	template <typename T = float> T& Damage() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& BodyPartDamageModif() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& Impuls() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& EffectiveRange() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& MaxRange() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& MaxRangeDamage() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& Destination() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& Agent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& Weapon() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& WeaponType() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& IgnoreTransform() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ProjectileInitSettings*))(Il2CppBase() + 0x212A14))(this);
	}
	template <typename T = void> T _ctor_1(void* inSettings) {
		return ((T (*)(ProjectileInitSettings*, void*))(Il2CppBase() + 0x212A7C))(this, inSettings);
	}
	template <typename T = void> T _ctor_2(void* inSettings) {
		return ((T (*)(ProjectileInitSettings*, void*))(Il2CppBase() + 0x212B60))(this, inSettings);
	}
};
