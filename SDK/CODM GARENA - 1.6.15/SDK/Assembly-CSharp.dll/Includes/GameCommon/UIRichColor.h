#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class UIRichColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "UIRichColor"));
	}

	template <typename T = uintptr_t> T& NormalColor() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& HighlightedColor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& LockedColor() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRichState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetRichState(uintptr_t rstate) {
		return ((T (*)(UIRichColor*, uintptr_t))(Il2CppBase() + 0x49FA4E0))(this, rstate);
	}

};

}
