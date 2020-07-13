#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class FrontEndGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "FrontEndGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(FrontEndGameBuilder*))(Il2CppBase() + 0x51C2A6C))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(FrontEndGameBuilder*))(Il2CppBase() + 0x51C2A74))(this);
	}

};

}
