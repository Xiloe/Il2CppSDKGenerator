#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpriteButton
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& TouchCount() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector2> T& _screenPosition() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector2> T& _LeftDown() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector2> T& _RightUp() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& _sprite() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SpriteButton*))(Il2CppBase() + 0x25A060))(this);
	}
	template <typename T = void*> T get_sprite() {
		return ((T (*)(SpriteButton*))(Il2CppBase() + 0x25A068))(this);
	}
	template <typename T = void> T set_sprite(void* value) {
		return ((T (*)(SpriteButton*, void*))(Il2CppBase() + 0x25A070))(this, value);
	}
	template <typename T = Il2CppVector2> T get_screenPosition() {
		return ((T (*)(SpriteButton*))(Il2CppBase() + 0x25A078))(this);
	}
	template <typename T = void> T set_screenPosition(Il2CppVector2 value) {
		return ((T (*)(SpriteButton*, Il2CppVector2))(Il2CppBase() + 0x25A08C))(this, value);
	}
	template <typename T = Il2CppVector2> T get_RightUp() {
		return ((T (*)(SpriteButton*))(Il2CppBase() + 0x25A098))(this);
	}
	template <typename T = void> T set_RightUp(Il2CppVector2 value) {
		return ((T (*)(SpriteButton*, Il2CppVector2))(Il2CppBase() + 0x25A0AC))(this, value);
	}
	template <typename T = Il2CppVector2> T get_LeftDown() {
		return ((T (*)(SpriteButton*))(Il2CppBase() + 0x25A0B8))(this);
	}
	template <typename T = void> T set_LeftDown(Il2CppVector2 value) {
		return ((T (*)(SpriteButton*, Il2CppVector2))(Il2CppBase() + 0x25A0CC))(this, value);
	}
	template <typename T = bool> T get_Hidden() {
		return ((T (*)(SpriteButton*))(Il2CppBase() + 0x25A0D8))(this);
	}
	template <typename T = void> T set_Hidden(bool value) {
		return ((T (*)(SpriteButton*, bool))(Il2CppBase() + 0x25A0FC))(this, value);
	}
};
