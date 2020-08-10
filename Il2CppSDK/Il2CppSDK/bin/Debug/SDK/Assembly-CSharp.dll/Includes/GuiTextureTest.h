#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiTextureTest
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& ScreenObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Obj() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& Widget() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiTextureTest*))(Il2CppBase() + 0x39CB74))(this);
	}
	template <typename T = void> T SetGameObject(void* obj) {
		return ((T (*)(GuiTextureTest*, void*))(Il2CppBase() + 0x39CB7C))(this, obj);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GuiTextureTest*))(Il2CppBase() + 0x39CB84))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(GuiTextureTest*))(Il2CppBase() + 0x39CD74))(this);
	}
};
