#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GUIBaseSprite
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& Widget() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GUIBaseSprite*))(Il2CppBase() + 0x366E04))(this);
	}
	template <typename T = void*> T get_Widget() {
		return ((T (*)(GUIBaseSprite*))(Il2CppBase() + 0x365B64))(this);
	}
	template <typename T = void> T set_Widget(void* value) {
		return ((T (*)(GUIBaseSprite*, void*))(Il2CppBase() + 0x366E0C))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GUIBaseSprite*))(Il2CppBase() + 0x366E14))(this);
	}
};
