#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Arena
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& arenaId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& levelPreview() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& locked() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& availableGames() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Arena*))(Il2CppBase() + 0x295F80))(this);
	}
	template <typename T = void*> T get_arenaId() {
		return ((T (*)(Arena*))(Il2CppBase() + 0x297578))(this);
	}
	template <typename T = void> T set_arenaId(void* value) {
		return ((T (*)(Arena*, void*))(Il2CppBase() + 0x295F88))(this, value);
	}
	template <typename T = Il2CppString*> T get_level() {
		return ((T (*)(Arena*))(Il2CppBase() + 0x297580))(this);
	}
	template <typename T = void> T set_level(Il2CppString* value) {
		return ((T (*)(Arena*, Il2CppString*))(Il2CppBase() + 0x295F98))(this, value);
	}
	template <typename T = Il2CppString*> T get_levelPreview() {
		return ((T (*)(Arena*))(Il2CppBase() + 0x297588))(this);
	}
	template <typename T = void> T set_levelPreview(Il2CppString* value) {
		return ((T (*)(Arena*, Il2CppString*))(Il2CppBase() + 0x295FA0))(this, value);
	}
	template <typename T = int32_t> T get_name() {
		return ((T (*)(Arena*))(Il2CppBase() + 0x297590))(this);
	}
	template <typename T = void> T set_name(int32_t value) {
		return ((T (*)(Arena*, int32_t))(Il2CppBase() + 0x295F90))(this, value);
	}
	template <typename T = bool> T get_enabled() {
		return ((T (*)(Arena*))(Il2CppBase() + 0x297598))(this);
	}
	template <typename T = bool> T get_anyAvailableGame() {
		return ((T (*)(Arena*))(Il2CppBase() + 0x2975C0))(this);
	}
	template <typename T = bool> T get_locked() {
		return ((T (*)(Arena*))(Il2CppBase() + 0x2975D4))(this);
	}
	template <typename T = void> T set_locked(bool value) {
		return ((T (*)(Arena*, bool))(Il2CppBase() + 0x295FB0))(this, value);
	}
	template <typename T = int32_t> T get_availableGames() {
		return ((T (*)(Arena*))(Il2CppBase() + 0x297254))(this);
	}
	template <typename T = void> T set_availableGames(int32_t value) {
		return ((T (*)(Arena*, int32_t))(Il2CppBase() + 0x295FA8))(this, value);
	}
};
