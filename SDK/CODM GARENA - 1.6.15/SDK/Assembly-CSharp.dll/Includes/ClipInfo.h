#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClipInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClipInfo"));
	}

	template <typename T = uintptr_t> T& Clip() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& PositionX() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& PositionY() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
