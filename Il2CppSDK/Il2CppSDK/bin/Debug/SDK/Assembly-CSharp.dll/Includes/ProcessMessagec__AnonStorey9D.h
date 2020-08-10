#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProcessMessagecAnonStorey9D
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& inMessage() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ProcessMessagecAnonStorey9D*))(Il2CppBase() + 0x31C634))(this);
	}
	template <typename T = bool> T m__12(void* f) {
		return ((T (*)(ProcessMessagecAnonStorey9D*, void*))(Il2CppBase() + 0x31E434))(this, f);
	}
	template <typename T = bool> T m__13(void* f) {
		return ((T (*)(ProcessMessagecAnonStorey9D*, void*))(Il2CppBase() + 0x31E508))(this, f);
	}
	template <typename T = bool> T m__14(void* friend_) {
		return ((T (*)(ProcessMessagecAnonStorey9D*, void*))(Il2CppBase() + 0x31E5DC))(this, friend_);
	}
};
