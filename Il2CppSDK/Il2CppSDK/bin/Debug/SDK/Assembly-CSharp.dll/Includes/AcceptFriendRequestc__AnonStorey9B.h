#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AcceptFriendRequestcAnonStorey9B
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
		return ((T (*)(AcceptFriendRequestcAnonStorey9B*))(Il2CppBase() + 0x31B83C))(this);
	}
	template <typename T = bool> T m__10(void* f) {
		return ((T (*)(AcceptFriendRequestcAnonStorey9B*, void*))(Il2CppBase() + 0x31DD28))(this, f);
	}
};
