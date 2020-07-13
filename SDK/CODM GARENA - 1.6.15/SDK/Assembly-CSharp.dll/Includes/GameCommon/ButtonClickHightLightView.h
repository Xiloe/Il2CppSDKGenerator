#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class ButtonClickHightLightView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "ButtonClickHightLightView"));
	}

	template <typename T = bool> T& IsUpdatePressState() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& targetBtn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PressShowObjs() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PressHideObjs() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPressObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ButtonClickHightLightView*))(Il2CppBase() + 0x49EF494))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ButtonClickHightLightView*))(Il2CppBase() + 0x49EF52C))(this);
	}
	template <typename T = void> T OnPress(bool isPressed) {
		return ((T (*)(ButtonClickHightLightView*, bool))(Il2CppBase() + 0x49EF954))(this, isPressed);
	}
	template <typename T = void> T ShowPressObj(bool isShow) {
		return ((T (*)(ButtonClickHightLightView*, bool))(Il2CppBase() + 0x49EF668))(this, isShow);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ButtonClickHightLightView*))(Il2CppBase() + 0x49EFA10))(this);
	}

};

}
