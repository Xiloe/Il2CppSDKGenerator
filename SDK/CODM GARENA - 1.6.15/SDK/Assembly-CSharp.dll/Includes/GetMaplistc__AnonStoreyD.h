#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetMaplistcAnonStoreyD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetMaplist>c__AnonStoreyD"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& maplist() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
