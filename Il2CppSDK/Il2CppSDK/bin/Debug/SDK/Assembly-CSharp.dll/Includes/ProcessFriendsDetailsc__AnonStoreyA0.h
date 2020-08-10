#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProcessFriendsDetailscAnonStoreyA0
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ProcessFriendsDetailscAnonStoreyA0*))(Il2CppBase() + 0x31DAD0))(this);
	}
	template <typename T = bool> T m__17(void* friend_) {
		return ((T (*)(ProcessFriendsDetailscAnonStoreyA0*, void*))(Il2CppBase() + 0x31E368))(this, friend_);
	}
};
