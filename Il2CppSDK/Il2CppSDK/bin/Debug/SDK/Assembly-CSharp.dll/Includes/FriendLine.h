#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FriendLine
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& m_FriendName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_Line() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_Status() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_Accept() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_Reject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor(void* inLine) {
		return ((T (*)(FriendLine*, void*))(Il2CppBase() + 0x1EF308))(this, inLine);
	}
	template <typename T = Il2CppVector3> T get_spritePos() {
		return ((T (*)(FriendLine*))(Il2CppBase() + 0x1EF928))(this);
	}
	template <typename T = void> T Update(void* inFriend) {
		return ((T (*)(FriendLine*, void*))(Il2CppBase() + 0x1EF554))(this, inFriend);
	}
	template <typename T = void> T Show() {
		return ((T (*)(FriendLine*))(Il2CppBase() + 0x1EF520))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(FriendLine*))(Il2CppBase() + 0x1EF628))(this);
	}
	template <typename T = void> T Delegate_Accept() {
		return ((T (*)(FriendLine*))(Il2CppBase() + 0x1EF970))(this);
	}
	template <typename T = void> T Delegate_Reject() {
		return ((T (*)(FriendLine*))(Il2CppBase() + 0x1EF9AC))(this);
	}
};
