#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FoliageTypeRuntimeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FoliageTypeRuntimeData"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& lodData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
