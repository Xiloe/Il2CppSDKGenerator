#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetSeqFromLoadoutPosTypecAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetSeqFromLoadoutPosType>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& loadoutIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetSeqFromLoadoutPosTypecAnonStorey0*, uintptr_t))(Il2CppBase() + 0x41EDBC8))(this, it);
	}

};

}
