#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrepareForInternalcAnonStoreyA1
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
		return ((T (*)(PrepareForInternalcAnonStoreyA1*))(Il2CppBase() + 0x25F3F0))(this);
	}
	template <typename T = bool> T m__22(void* f) {
		return ((T (*)(PrepareForInternalcAnonStoreyA1*, void*))(Il2CppBase() + 0x263540))(this, f);
	}
};
