#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementTopLeftPlayAgainPopWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementTopLeftPlayAgainPopWindowController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettlementTopLeftPlayAgainPopWindowController*))(Il2CppBase() + 0x297F770))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettlementTopLeftPlayAgainPopWindowController*))(Il2CppBase() + 0x297F814))(this);
	}

};

}
