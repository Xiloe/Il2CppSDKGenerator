#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Agent
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& ModifierMoney() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& ModifierExperience() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& ModifierDamage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& ModifierSpeed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& AgentType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& Transform() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& GameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& Audio() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& Animation() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Agent*))(Il2CppBase() + 0x19CEEC))(this);
	}
	template <typename T = void*> T get_AgentType() {
		return ((T (*)(Agent*))(Il2CppBase() + 0x19CEF4))(this);
	}
	template <typename T = void> T set_AgentType(void* value) {
		return ((T (*)(Agent*, void*))(Il2CppBase() + 0x19CEFC))(this, value);
	}
	template <typename T = void*> T get_Transform() {
		return ((T (*)(Agent*))(Il2CppBase() + 0x19CF04))(this);
	}
	template <typename T = void> T set_Transform(void* value) {
		return ((T (*)(Agent*, void*))(Il2CppBase() + 0x19CF0C))(this, value);
	}
	template <typename T = void*> T get_GameObject() {
		return ((T (*)(Agent*))(Il2CppBase() + 0x19CF14))(this);
	}
	template <typename T = void> T set_GameObject(void* value) {
		return ((T (*)(Agent*, void*))(Il2CppBase() + 0x19CF1C))(this, value);
	}
	template <typename T = void*> T get_Audio() {
		return ((T (*)(Agent*))(Il2CppBase() + 0x19CF24))(this);
	}
	template <typename T = void> T set_Audio(void* value) {
		return ((T (*)(Agent*, void*))(Il2CppBase() + 0x19CF2C))(this, value);
	}
	template <typename T = void*> T get_Animation() {
		return ((T (*)(Agent*))(Il2CppBase() + 0x19CF34))(this);
	}
	template <typename T = void> T set_Animation(void* value) {
		return ((T (*)(Agent*, void*))(Il2CppBase() + 0x19CF3C))(this, value);
	}
	template <typename T = Il2CppVector3> T get_Position() {
		return ((T (*)(Agent*))(Il2CppBase() + 0x19CF44))(this);
	}
	template <typename T = Il2CppVector3> T get_Forward() {
		return ((T (*)(Agent*))(Il2CppBase() + 0x19CF70))(this);
	}
	template <typename T = Il2CppVector3> T get_Right() {
		return ((T (*)(Agent*))(Il2CppBase() + 0x19CF9C))(this);
	}
	template <typename T = bool> T get_IsAlive() {
		return ((T (*)(Agent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsPlayer() {
		return ((T (*)(Agent*))(Il2CppBase() + 0x19CFC8))(this);
	}
	template <typename T = bool> T get_IsVisible() {
		return ((T (*)(Agent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsInvulnerable() {
		return ((T (*)(Agent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppVector3> T get_ChestPosition() {
		return ((T (*)(Agent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T get_HealthPercent() {
		return ((T (*)(Agent*))(Il2CppBase() + 0x19CFD0))(this);
	}
	template <typename T = void> T OnReceiveRangeDamage(void* attacker, float damage, Il2CppVector3 impuls, void* weaponID, void* weaponType) {
		return ((T (*)(Agent*, void*, float, Il2CppVector3, void*, void*))(Il2CppBase() + 0x19CFD8))(this, attacker, damage, impuls, weaponID, weaponType);
	}
	template <typename T = void> T OnShootSound(void* inAgent) {
		return ((T (*)(Agent*, void*))(Il2CppBase() + 0x19CFDC))(this, inAgent);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(Agent*))(Il2CppBase() + 0x19CFE0))(this);
	}
};
