#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiNvidiaShieldHelp
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79180);
	}
	// Fields
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& m_Pivot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_Layout() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_CloseButton() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_BackButton() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_BlackBg() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_OnClose() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_Initialised() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& IsShown() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiNvidiaShieldHelp*))(Il2CppBase() + 0x38B07C))(this);
	}
	template <typename T = bool> T get_IsShown() {
		return ((T (*)(GuiNvidiaShieldHelp*))(Il2CppBase() + 0x38B084))(this);
	}
	template <typename T = void> T set_IsShown(bool value) {
		return ((T (*)(GuiNvidiaShieldHelp*, bool))(Il2CppBase() + 0x38B08C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GuiNvidiaShieldHelp*))(Il2CppBase() + 0x38B094))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GuiNvidiaShieldHelp*))(Il2CppBase() + 0x38B120))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuiNvidiaShieldHelp*))(Il2CppBase() + 0x38B304))(this);
	}
	template <typename T = void> T Show(void* onClose, bool showBlackBg) {
		return ((T (*)(GuiNvidiaShieldHelp*, void*, bool))(Il2CppBase() + 0x38580C))(this, onClose, showBlackBg);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(GuiNvidiaShieldHelp*))(Il2CppBase() + 0x38B1B0))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(GuiNvidiaShieldHelp*))(Il2CppBase() + 0x38B56C))(this);
	}
	template <typename T = void> T OnCloseButton(bool inside) {
		return ((T (*)(GuiNvidiaShieldHelp*, bool))(Il2CppBase() + 0x38B688))(this, inside);
	}
};
