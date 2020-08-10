#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RemoveMessagesFromInbox
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78BA0);
	}
	// Fields
	template <typename T = bool> T& globalInbox() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& lastMsgIndex() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor(void* inUserID, bool inGlobalInbox, int32_t inLastMsgIndex, float inTimeOut) {
		return ((T (*)(RemoveMessagesFromInbox*, void*, bool, int32_t, float))(Il2CppBase() + 0x21FE5C))(this, inUserID, inGlobalInbox, inLastMsgIndex, inTimeOut);
	}
	template <typename T = bool> T get_globalInbox() {
		return ((T (*)(RemoveMessagesFromInbox*))(Il2CppBase() + 0x21FE98))(this);
	}
	template <typename T = void> T set_globalInbox(bool value) {
		return ((T (*)(RemoveMessagesFromInbox*, bool))(Il2CppBase() + 0x21FE88))(this, value);
	}
	template <typename T = int32_t> T get_lastMsgIndex() {
		return ((T (*)(RemoveMessagesFromInbox*))(Il2CppBase() + 0x21FEA0))(this);
	}
	template <typename T = void> T set_lastMsgIndex(int32_t value) {
		return ((T (*)(RemoveMessagesFromInbox*, int32_t))(Il2CppBase() + 0x21FE90))(this, value);
	}
	template <typename T = void*> T GetCloudAsyncOp() {
		return ((T (*)(RemoveMessagesFromInbox*))(Il2CppBase() + 0x21FEA8))(this);
	}
};
