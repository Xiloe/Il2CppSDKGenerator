#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutPVPGameViewSAS
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutPVPGameView_SAS"));
	}

	template <typename T = uintptr_t> T& Melee_Normal() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& Melee_Random() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
