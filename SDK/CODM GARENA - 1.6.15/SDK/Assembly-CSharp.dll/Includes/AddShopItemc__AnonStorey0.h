#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddShopItemcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AddShopItem>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& shopCfg() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t item) {
		return ((T (*)(AddShopItemcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x236A8A0))(this, item);
	}

};

}
