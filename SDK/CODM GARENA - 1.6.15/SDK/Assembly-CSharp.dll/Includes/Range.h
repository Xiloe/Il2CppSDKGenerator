#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Range
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Range"));
	}

	template <typename T = float> T& From() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& To() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
