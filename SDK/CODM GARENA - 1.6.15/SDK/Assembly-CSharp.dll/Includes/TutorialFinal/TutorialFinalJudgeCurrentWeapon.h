#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TutorialFinal {

class TutorialFinalJudgeCurrentWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TutorialFinal", "TutorialFinalJudgeCurrentWeapon"));
	}

	template <typename T = int32_t> T& WeaponId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& UpdateCheck() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Judge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(TutorialFinalJudgeCurrentWeapon*))(Il2CppBase() + 0x4249F98))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(TutorialFinalJudgeCurrentWeapon*))(Il2CppBase() + 0x424A31C))(this);
	}
	template <typename T = bool> T Judge() {
		return ((T (*)(TutorialFinalJudgeCurrentWeapon*))(Il2CppBase() + 0x424A0B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(TutorialFinalJudgeCurrentWeapon*))(Il2CppBase() + 0x424A3E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdate() {
		return ((T (*)(TutorialFinalJudgeCurrentWeapon*))(Il2CppBase() + 0x424A3EC))(this);
	}

};

}
