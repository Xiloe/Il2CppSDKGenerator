#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PendingFriendInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& m_Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_CloudCommand() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PendingFriendInfo*))(Il2CppBase() + 0x31B208))(this);
	}
	template <typename T = bool> T get_isItRequest() {
		return ((T (*)(PendingFriendInfo*))(Il2CppBase() + 0x31BBCC))(this);
	}
};
