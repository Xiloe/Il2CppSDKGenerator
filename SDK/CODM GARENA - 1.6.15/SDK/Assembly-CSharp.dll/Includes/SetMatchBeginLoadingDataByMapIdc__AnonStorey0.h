#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetMatchBeginLoadingDataByMapIdcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetMatchBeginLoadingDataByMapId>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& targetMapId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& targetList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
