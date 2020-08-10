#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FriendInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& m_Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_LastOnline() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_PPIData() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x31D458))(this);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x31ED3C))(this);
	}
	template <typename T = int32_t> T get_Missions() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x31ED5C))(this);
	}
};
