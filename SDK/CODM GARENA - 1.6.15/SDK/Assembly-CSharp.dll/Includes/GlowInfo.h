#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GlowInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GlowInfo"));
	}

	template <typename T = float> T& Time() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
