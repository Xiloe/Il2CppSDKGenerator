#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AndroidRewardSystem
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AndroidRewardSystem*))(Il2CppBase() + 0x1AB7DC))(this);
	}
	template <typename T = Il2CppString*> static T Modify(Il2CppString* input) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1AB7E4))(0, input);
	}
	template <typename T = bool> static T CanReceiveReward() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB94C))(0);
	}
	template <typename T = bool> static T ByteArrayCompare(Il2CppArray<void*>* a1, Il2CppArray<void*>* a2) {
		return ((T (*)(void *, Il2CppArray<void*>*, Il2CppArray<void*>*))(Il2CppBase() + 0x1AB954))(0, a1, a2);
	}
};
