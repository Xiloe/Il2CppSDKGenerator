#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RejectFriendRequestcAnonStorey9C
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
		return ((T (*)(RejectFriendRequestcAnonStorey9C*))(Il2CppBase() + 0x31BBC4))(this);
	}
	template <typename T = bool> T m__11(void* f) {
		return ((T (*)(RejectFriendRequestcAnonStorey9C*, void*))(Il2CppBase() + 0x31E8A8))(this, f);
	}
};
