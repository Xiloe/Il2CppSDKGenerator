#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class ActivityRedData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "ActivityRedData"));
	}

	template <typename T = int32_t> T& RedFlag() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& IsNewActivity() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}


};

}
