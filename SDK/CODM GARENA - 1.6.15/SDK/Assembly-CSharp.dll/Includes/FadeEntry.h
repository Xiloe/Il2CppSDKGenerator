#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FadeEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FadeEntry"));
	}

	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& text() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& alpha() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
