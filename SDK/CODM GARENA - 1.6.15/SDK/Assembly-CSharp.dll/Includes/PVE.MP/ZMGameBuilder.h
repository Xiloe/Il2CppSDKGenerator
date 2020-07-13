#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class ZMGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "ZMGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(ZMGameBuilder*))(Il2CppBase() + 0x435F30C))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(ZMGameBuilder*))(Il2CppBase() + 0x435F314))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(ZMGameBuilder*))(Il2CppBase() + 0x435F3D0))(this);
	}
	template <typename T = uintptr_t> T get_m_GameEventChannelType() {
		return ((T (*)(ZMGameBuilder*))(Il2CppBase() + 0x435F48C))(this);
	}

};

}
