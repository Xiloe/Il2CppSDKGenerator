#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MainScreen
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD793D8);
	}
	// Fields
	template <typename T = Il2CppString*> static T& s_PivotName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& s_ScreenLayoutName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& s_PlayButtonName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& s_EquipButtonName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> static T& s_OptButtonName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& s_HelpButtonName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppString*> static T& s_ExitButtonName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> T& m_ScreenPivot() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_ScreenLayout() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MainScreen*))(Il2CppBase() + 0x3E1848))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E1850))(0);
	}
	template <typename T = void> T OnGUI_Init() {
		return ((T (*)(MainScreen*))(Il2CppBase() + 0x3E1988))(this);
	}
	template <typename T = void> T OnGUI_Show() {
		return ((T (*)(MainScreen*))(Il2CppBase() + 0x3E1E74))(this);
	}
	template <typename T = void> T OnGUI_Hide() {
		return ((T (*)(MainScreen*))(Il2CppBase() + 0x3E1FA4))(this);
	}
	template <typename T = void> T OnGUI_Update() {
		return ((T (*)(MainScreen*))(Il2CppBase() + 0x3E2084))(this);
	}
	template <typename T = void> T OnGUI_Destroy() {
		return ((T (*)(MainScreen*))(Il2CppBase() + 0x3E208C))(this);
	}
	template <typename T = void> T OnPlay(void* inWidget) {
		return ((T (*)(MainScreen*, void*))(Il2CppBase() + 0x3E2094))(this, inWidget);
	}
	template <typename T = void> T OnTouchButtonOpt(void* inWidget) {
		return ((T (*)(MainScreen*, void*))(Il2CppBase() + 0x3E21B8))(this, inWidget);
	}
	template <typename T = void> T OnTouchButtonEquip(void* inWidget) {
		return ((T (*)(MainScreen*, void*))(Il2CppBase() + 0x3E22DC))(this, inWidget);
	}
	template <typename T = void> T OnTouchButtonHelp(void* inWidget) {
		return ((T (*)(MainScreen*, void*))(Il2CppBase() + 0x3E2400))(this, inWidget);
	}
	template <typename T = void> T OnTouchButtonExit(void* inWidget) {
		return ((T (*)(MainScreen*, void*))(Il2CppBase() + 0x3E2524))(this, inWidget);
	}
};
