#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseItem1
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_PlayerValue() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& m_SecondValue() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& m_SecondValueFriendName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& m_HighlightPlayer() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& m_HighlightFriend() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(BaseItem1*))(Il2CppBase() + 0x43E388))(this);
	}
};
