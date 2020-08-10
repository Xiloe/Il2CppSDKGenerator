#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiMogaPopup
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79198);
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
	template <typename T = void*> T& m_TextLabel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_initialised() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_HelpLayout() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_HelpCloseButton() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_HelpSwitch() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<void*>*> T& m_TouchWidgets() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_Moga_Widget() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_MogaPro_Widget() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_IsHelpOn() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_PopupHideTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiMogaPopup*))(Il2CppBase() + 0x389DFC))(this);
	}
	template <typename T = bool> T IsShown() {
		return ((T (*)(GuiMogaPopup*))(Il2CppBase() + 0x389E04))(this);
	}
	template <typename T = bool> T IsReady() {
		return ((T (*)(GuiMogaPopup*))(Il2CppBase() + 0x389E1C))(this);
	}
	template <typename T = bool> T IsHelpOn() {
		return ((T (*)(GuiMogaPopup*))(Il2CppBase() + 0x389EF0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GuiMogaPopup*))(Il2CppBase() + 0x389EF8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GuiMogaPopup*))(Il2CppBase() + 0x389F7C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuiMogaPopup*))(Il2CppBase() + 0x38A168))(this);
	}
	template <typename T = void> T Show(int32_t msgId, float hideTime) {
		return ((T (*)(GuiMogaPopup*, int32_t, float))(Il2CppBase() + 0x38A4E0))(this, msgId, hideTime);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(GuiMogaPopup*))(Il2CppBase() + 0x38A018))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(GuiMogaPopup*))(Il2CppBase() + 0x38A690))(this);
	}
	template <typename T = void> T ShowHelp(bool mogaPro) {
		return ((T (*)(GuiMogaPopup*, bool))(Il2CppBase() + 0x38A6A0))(this, mogaPro);
	}
	template <typename T = void> T HideHelp() {
		return ((T (*)(GuiMogaPopup*))(Il2CppBase() + 0x38A970))(this);
	}
	template <typename T = void> T OnCloseButton(bool inside) {
		return ((T (*)(GuiMogaPopup*, bool))(Il2CppBase() + 0x38AB0C))(this, inside);
	}
	template <typename T = void> T OnHelpSwitch(bool val) {
		return ((T (*)(GuiMogaPopup*, bool))(Il2CppBase() + 0x38AB18))(this, val);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GuiMogaPopup*))(Il2CppBase() + 0x38ABCC))(this);
	}
};
