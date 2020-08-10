#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SendMessage
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78B84);
	}
	// Fields
	template <typename T = Il2CppString*> T& recipient() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& message() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& globalInbox() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	// Methods
	template <typename T = void> T _ctor(void* inUserID, Il2CppString* inRecipient, Il2CppString* inMessage, bool inGlobalInbox, float inTimeOut) {
		return ((T (*)(SendMessage*, void*, Il2CppString*, Il2CppString*, bool, float))(Il2CppBase() + 0x22E4B8))(this, inUserID, inRecipient, inMessage, inGlobalInbox, inTimeOut);
	}
	template <typename T = Il2CppString*> T get_recipient() {
		return ((T (*)(SendMessage*))(Il2CppBase() + 0x22E574))(this);
	}
	template <typename T = void> T set_recipient(Il2CppString* value) {
		return ((T (*)(SendMessage*, Il2CppString*))(Il2CppBase() + 0x22E584))(this, value);
	}
	template <typename T = Il2CppString*> T get_message() {
		return ((T (*)(SendMessage*))(Il2CppBase() + 0x22E57C))(this);
	}
	template <typename T = void> T set_message(Il2CppString* value) {
		return ((T (*)(SendMessage*, Il2CppString*))(Il2CppBase() + 0x22E58C))(this, value);
	}
	template <typename T = bool> T get_globalInbox() {
		return ((T (*)(SendMessage*))(Il2CppBase() + 0x22E594))(this);
	}
	template <typename T = void> T set_globalInbox(bool value) {
		return ((T (*)(SendMessage*, bool))(Il2CppBase() + 0x22E59C))(this, value);
	}
	template <typename T = void*> T GetCloudAsyncOp() {
		return ((T (*)(SendMessage*))(Il2CppBase() + 0x22E5A4))(this);
	}
};
