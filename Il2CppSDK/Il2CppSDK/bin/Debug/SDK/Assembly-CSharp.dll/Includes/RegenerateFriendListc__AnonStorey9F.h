#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RegenerateFriendListcAnonStorey9F
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& f__ref$158() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(RegenerateFriendListcAnonStorey9F*))(Il2CppBase() + 0x31D450))(this);
	}
	template <typename T = bool> T m__15(void* friend_) {
		return ((T (*)(RegenerateFriendListcAnonStorey9F*, void*))(Il2CppBase() + 0x31E6B0))(this, friend_);
	}
	template <typename T = bool> T m__16(void* friend_) {
		return ((T (*)(RegenerateFriendListcAnonStorey9F*, void*))(Il2CppBase() + 0x31E7AC))(this, friend_);
	}
};
