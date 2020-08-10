#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DesiredData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppQuaternion> T& Rotation() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& MoveDirection() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& FireDirection() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& WalkOnly() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& MoveSpeedModifier() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& InteractionObject() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& Animation() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& Invulnerable() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& Weapon() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& WeaponTriggerOn() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& WeaponIronSight() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = void*> T& Gadget() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& LookAtTarget() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppVector3> T& TeleportDestination() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppQuaternion> T& TeleportRotation() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<void*>*> T& PatrolPoints() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(DesiredData*))(Il2CppBase() + 0x1DB3F8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DesiredData*))(Il2CppBase() + 0x1DB8D4))(this);
	}
};
