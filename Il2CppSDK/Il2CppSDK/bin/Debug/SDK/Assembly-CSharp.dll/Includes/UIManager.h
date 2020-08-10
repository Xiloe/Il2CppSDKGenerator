#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIManager
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T OnMouseDown(void* sprite, Il2CppVector2 pos) {
		return ((T (*)(UIManager*, void*, Il2CppVector2))(Il2CppBase() + 0x0))(this, sprite, pos);
	}
	template <typename T = void> T OnMouseUp(void* sprite, Il2CppVector2 pos) {
		return ((T (*)(UIManager*, void*, Il2CppVector2))(Il2CppBase() + 0x0))(this, sprite, pos);
	}
	template <typename T = void> T OnMouseMoved(void* sprite, Il2CppVector2 pos) {
		return ((T (*)(UIManager*, void*, Il2CppVector2))(Il2CppBase() + 0x0))(this, sprite, pos);
	}
	template <typename T = void> T OnMouseExit(void* sprite) {
		return ((T (*)(UIManager*, void*))(Il2CppBase() + 0x0))(this, sprite);
	}
	template <typename T = void> T OnTouchDown(void* sprite, Il2CppVector2 pos, int32_t touch) {
		return ((T (*)(UIManager*, void*, Il2CppVector2, int32_t))(Il2CppBase() + 0x0))(this, sprite, pos, touch);
	}
	template <typename T = void> T OnTouchUp(void* sprite, Il2CppVector2 pos, int32_t touch) {
		return ((T (*)(UIManager*, void*, Il2CppVector2, int32_t))(Il2CppBase() + 0x0))(this, sprite, pos, touch);
	}
	template <typename T = void> T OnTouchMoved(void* sprite, Il2CppVector2 pos, int32_t touch) {
		return ((T (*)(UIManager*, void*, Il2CppVector2, int32_t))(Il2CppBase() + 0x0))(this, sprite, pos, touch);
	}
	template <typename T = void> T OnTouchExit(void* sprite, int32_t touch) {
		return ((T (*)(UIManager*, void*, int32_t))(Il2CppBase() + 0x0))(this, sprite, touch);
	}
};
