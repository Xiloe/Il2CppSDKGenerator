#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIManagerAdapter
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(UIManagerAdapter*))(Il2CppBase() + 0x27986C))(this);
	}
	template <typename T = void> T OnMouseDown(void* sprite, Il2CppVector2 pos) {
		return ((T (*)(UIManagerAdapter*, void*, Il2CppVector2))(Il2CppBase() + 0x279874))(this, sprite, pos);
	}
	template <typename T = void> T OnMouseUp(void* sprite, Il2CppVector2 pos) {
		return ((T (*)(UIManagerAdapter*, void*, Il2CppVector2))(Il2CppBase() + 0x279878))(this, sprite, pos);
	}
	template <typename T = void> T OnMouseMoved(void* sprite, Il2CppVector2 pos) {
		return ((T (*)(UIManagerAdapter*, void*, Il2CppVector2))(Il2CppBase() + 0x27987C))(this, sprite, pos);
	}
	template <typename T = void> T OnMouseExit(void* sprite) {
		return ((T (*)(UIManagerAdapter*, void*))(Il2CppBase() + 0x279880))(this, sprite);
	}
	template <typename T = void> T OnTouchDown(void* sprite, Il2CppVector2 pos, int32_t touch) {
		return ((T (*)(UIManagerAdapter*, void*, Il2CppVector2, int32_t))(Il2CppBase() + 0x279884))(this, sprite, pos, touch);
	}
	template <typename T = void> T OnTouchUp(void* sprite, Il2CppVector2 pos, int32_t touch) {
		return ((T (*)(UIManagerAdapter*, void*, Il2CppVector2, int32_t))(Il2CppBase() + 0x279888))(this, sprite, pos, touch);
	}
	template <typename T = void> T OnTouchMoved(void* sprite, Il2CppVector2 pos, int32_t touch) {
		return ((T (*)(UIManagerAdapter*, void*, Il2CppVector2, int32_t))(Il2CppBase() + 0x27988C))(this, sprite, pos, touch);
	}
	template <typename T = void> T OnTouchExit(void* sprite, int32_t touch) {
		return ((T (*)(UIManagerAdapter*, void*, int32_t))(Il2CppBase() + 0x279890))(this, sprite, touch);
	}
};
