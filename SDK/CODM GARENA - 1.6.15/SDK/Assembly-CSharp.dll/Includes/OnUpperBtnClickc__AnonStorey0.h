#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnUpperBtnClickcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnUpperBtnClick>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& itemID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t _item) {
		return ((T (*)(OnUpperBtnClickcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x1B1A6BC))(this, _item);
	}

};

}
