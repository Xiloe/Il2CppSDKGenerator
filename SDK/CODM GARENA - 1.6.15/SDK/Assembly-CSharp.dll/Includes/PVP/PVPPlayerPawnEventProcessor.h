#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class PVPPlayerPawnEventProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "PVPPlayerPawnEventProcessor"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigNetSyncModuleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T ConfigNetSyncModuleList() {
		return ((T (*)(PVPPlayerPawnEventProcessor*))(Il2CppBase() + 0x2B0C5E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ConfigNetSyncModuleList() {
		return ((T (*)(PVPPlayerPawnEventProcessor*))(Il2CppBase() + 0x2B0C7AC))(this);
	}

};

}
