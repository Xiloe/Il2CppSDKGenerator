#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TutorialFinal {

class TutorialFinalTipsAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TutorialFinal", "TutorialFinalTipsAction"));
	}

	template <typename T = bool> T& Show() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = Il2CppString*> T& TipsLocID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(TutorialFinalTipsAction*))(Il2CppBase() + 0x424BAB0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(TutorialFinalTipsAction*))(Il2CppBase() + 0x424BC8C))(this);
	}

};

}
