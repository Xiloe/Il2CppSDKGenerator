#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FriendRequest
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& m_ConfirmCommand() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(FriendRequest*))(Il2CppBase() + 0x2C3F58))(this);
	}
	template <typename T = Il2CppString*> T get_msgType() {
		return ((T (*)(FriendRequest*))(Il2CppBase() + 0x2C4904))(this);
	}
};
