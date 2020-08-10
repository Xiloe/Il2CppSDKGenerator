#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ComponentWeaponsPlayer
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78D20);
	}
	// Fields
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ComponentWeaponsPlayer*))(Il2CppBase() + 0x2E3124))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(ComponentWeaponsPlayer*))(Il2CppBase() + 0x2E312C))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(ComponentWeaponsPlayer*))(Il2CppBase() + 0x2E340C))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(ComponentWeaponsPlayer*))(Il2CppBase() + 0x2E3C58))(this);
	}
	template <typename T = void> T OnCurrentWeaponChanged() {
		return ((T (*)(ComponentWeaponsPlayer*))(Il2CppBase() + 0x2E41C8))(this);
	}
	template <typename T = bool> static T Initializem__9(void* ps) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x2E429C))(0, ps);
	}
	template <typename T = bool> static T Initializem__A(void* ps) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x2E42CC))(0, ps);
	}
};
