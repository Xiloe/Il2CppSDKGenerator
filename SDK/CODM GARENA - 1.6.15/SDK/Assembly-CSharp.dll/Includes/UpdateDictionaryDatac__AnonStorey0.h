#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateDictionaryDatacAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdateDictionaryData>c__AnonStorey0"));
	}

	template <typename T = uint32_t> T& playerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(UpdateDictionaryDatacAnonStorey0*, uintptr_t))(Il2CppBase() + 0x2D8B88C))(this, it);
	}

};

}
