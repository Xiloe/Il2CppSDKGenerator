#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RedDotInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RedDotInfo"));
	}

	template <typename T = uintptr_t> T& gameType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& matchType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& tag() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& serverTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
