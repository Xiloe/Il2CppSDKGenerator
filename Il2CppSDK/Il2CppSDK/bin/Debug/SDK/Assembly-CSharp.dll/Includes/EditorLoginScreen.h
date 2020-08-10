#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EditorLoginScreen
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_CloudActionUserName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_CloudActionCreateUser() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& userAuthenticationinProgress() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& userNameExist() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = void*> T& infoStyle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& infoString() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& nickName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& userName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& testedUserName() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& password() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EditorLoginScreen*))(Il2CppBase() + 0x30D898))(this);
	}
};
