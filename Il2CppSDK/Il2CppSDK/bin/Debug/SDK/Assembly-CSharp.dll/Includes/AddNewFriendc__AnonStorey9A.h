#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddNewFriendcAnonStorey9A
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& inFriendName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AddNewFriendcAnonStorey9A*))(Il2CppBase() + 0x31B1DC))(this);
	}
	template <typename T = bool> T m__E(void* f) {
		return ((T (*)(AddNewFriendcAnonStorey9A*, void*))(Il2CppBase() + 0x31DE10))(this, f);
	}
	template <typename T = bool> T m__F(void* f) {
		return ((T (*)(AddNewFriendcAnonStorey9A*, void*))(Il2CppBase() + 0x31DEDC))(this, f);
	}
};
