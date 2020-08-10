#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AmmoBox
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& Ammo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& ForWeapon() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& Scale() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& CurrentTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& GameObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& Transform() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& Dropped() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& cacheKey() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AmmoBox*))(Il2CppBase() + 0x1AB36C))(this);
	}
	template <typename T = void*> T get_GameObject() {
		return ((T (*)(AmmoBox*))(Il2CppBase() + 0x1AB374))(this);
	}
	template <typename T = void> T set_GameObject(void* value) {
		return ((T (*)(AmmoBox*, void*))(Il2CppBase() + 0x1AB37C))(this, value);
	}
	template <typename T = void*> T get_Transform() {
		return ((T (*)(AmmoBox*))(Il2CppBase() + 0x1AB384))(this);
	}
	template <typename T = void> T set_Transform(void* value) {
		return ((T (*)(AmmoBox*, void*))(Il2CppBase() + 0x1AB38C))(this, value);
	}
	template <typename T = bool> T get_Dropped() {
		return ((T (*)(AmmoBox*))(Il2CppBase() + 0x1AB394))(this);
	}
	template <typename T = void> T set_Dropped(bool value) {
		return ((T (*)(AmmoBox*, bool))(Il2CppBase() + 0x1AB39C))(this, value);
	}
	template <typename T = void*> T get_cacheKey() {
		return ((T (*)(AmmoBox*))(Il2CppBase() + 0x1AB3A4))(this);
	}
	template <typename T = void> T set_cacheKey(void* value) {
		return ((T (*)(AmmoBox*, void*))(Il2CppBase() + 0x1AB3AC))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AmmoBox*))(Il2CppBase() + 0x1AB3B4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AmmoBox*))(Il2CppBase() + 0x1AB3E8))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(AmmoBox*))(Il2CppBase() + 0x1AB4B0))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(AmmoBox*))(Il2CppBase() + 0x1AB570))(this);
	}
	template <typename T = void> T Enable_1(Il2CppVector3 pos) {
		return ((T (*)(AmmoBox*, Il2CppVector3))(Il2CppBase() + 0x1AB6BC))(this, pos);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AmmoBox*))(Il2CppBase() + 0x1AB708))(this);
	}
};
