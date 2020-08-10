#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnigueUserID
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78C5C);
	}
	// Fields
	template <typename T = Il2CppString*> T& userName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& passwordHash() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& productID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor(Il2CppString* inUserName, Il2CppString* inPasswordHash, Il2CppString* inProductID) {
		return ((T (*)(UnigueUserID*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2798BC))(this, inUserName, inPasswordHash, inProductID);
	}
	template <typename T = Il2CppString*> T get_userName() {
		return ((T (*)(UnigueUserID*))(Il2CppBase() + 0x279924))(this);
	}
	template <typename T = void> T set_userName(Il2CppString* value) {
		return ((T (*)(UnigueUserID*, Il2CppString*))(Il2CppBase() + 0x27990C))(this, value);
	}
	template <typename T = Il2CppString*> T get_passwordHash() {
		return ((T (*)(UnigueUserID*))(Il2CppBase() + 0x27992C))(this);
	}
	template <typename T = void> T set_passwordHash(Il2CppString* value) {
		return ((T (*)(UnigueUserID*, Il2CppString*))(Il2CppBase() + 0x279914))(this, value);
	}
	template <typename T = Il2CppString*> T get_productID() {
		return ((T (*)(UnigueUserID*))(Il2CppBase() + 0x279934))(this);
	}
	template <typename T = void> T set_productID(Il2CppString* value) {
		return ((T (*)(UnigueUserID*, Il2CppString*))(Il2CppBase() + 0x27991C))(this, value);
	}
};
