#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnemyConfig
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& AnimSet() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Owner() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& AnimComponent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& MaxWalkSpeed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& MaxRunSpeed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EnemyConfig*))(Il2CppBase() + 0x30E098))(this);
	}
	template <typename T = void*> T get_Owner() {
		return ((T (*)(EnemyConfig*))(Il2CppBase() + 0x30E0A0))(this);
	}
	template <typename T = void> T set_Owner(void* value) {
		return ((T (*)(EnemyConfig*, void*))(Il2CppBase() + 0x30E0A8))(this, value);
	}
	template <typename T = void*> T get_AnimComponent() {
		return ((T (*)(EnemyConfig*))(Il2CppBase() + 0x30E0B0))(this);
	}
	template <typename T = void> T set_AnimComponent(void* value) {
		return ((T (*)(EnemyConfig*, void*))(Il2CppBase() + 0x30E0B8))(this, value);
	}
	template <typename T = float> T get_MaxWalkSpeed() {
		return ((T (*)(EnemyConfig*))(Il2CppBase() + 0x30E0C0))(this);
	}
	template <typename T = void> T set_MaxWalkSpeed(float value) {
		return ((T (*)(EnemyConfig*, float))(Il2CppBase() + 0x30E0C8))(this, value);
	}
	template <typename T = float> T get_MaxRunSpeed() {
		return ((T (*)(EnemyConfig*))(Il2CppBase() + 0x30E0D0))(this);
	}
	template <typename T = void> T set_MaxRunSpeed(float value) {
		return ((T (*)(EnemyConfig*, float))(Il2CppBase() + 0x30E0D8))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(EnemyConfig*))(Il2CppBase() + 0x30E0E0))(this);
	}
	template <typename T = void> T SetProps() {
		return ((T (*)(EnemyConfig*))(Il2CppBase() + 0x30E208))(this);
	}
};
