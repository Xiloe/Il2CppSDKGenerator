#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USToggleAnimatorApplyRootMotion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USToggleAnimatorApplyRootMotion"));
	}

	template <typename T = bool> T& applyRootMotion() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& prevApplyRootMotion() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UndoEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T FireEvent() {
		return ((T (*)(USToggleAnimatorApplyRootMotion*))(Il2CppBase() + 0x4A4B8BC))(this);
	}
	template <typename T = void> T ProcessEvent(float runningTime) {
		return ((T (*)(USToggleAnimatorApplyRootMotion*, float))(Il2CppBase() + 0x4A4BA70))(this, runningTime);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USToggleAnimatorApplyRootMotion*))(Il2CppBase() + 0x4A4BB10))(this);
	}
	template <typename T = void> T UndoEvent() {
		return ((T (*)(USToggleAnimatorApplyRootMotion*))(Il2CppBase() + 0x4A4BBC0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USToggleAnimatorApplyRootMotion*))(Il2CppBase() + 0x4A4BCFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UndoEvent() {
		return ((T (*)(USToggleAnimatorApplyRootMotion*))(Il2CppBase() + 0x4A4BD04))(this);
	}

};

}
