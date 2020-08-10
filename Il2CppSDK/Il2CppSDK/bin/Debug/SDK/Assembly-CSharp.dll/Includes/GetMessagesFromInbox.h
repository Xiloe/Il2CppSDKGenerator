#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetMessagesFromInbox
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78B9C);
	}
	// Fields
	template <typename T = bool> T& globalInbox() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor(void* inUserID, bool inGlobalInbox, float inTimeOut) {
		return ((T (*)(GetMessagesFromInbox*, void*, bool, float))(Il2CppBase() + 0x339784))(this, inUserID, inGlobalInbox, inTimeOut);
	}
	template <typename T = bool> T get_globalInbox() {
		return ((T (*)(GetMessagesFromInbox*))(Il2CppBase() + 0x3397B0))(this);
	}
	template <typename T = void> T set_globalInbox(bool value) {
		return ((T (*)(GetMessagesFromInbox*, bool))(Il2CppBase() + 0x3397A8))(this, value);
	}
	template <typename T = void*> T GetCloudAsyncOp() {
		return ((T (*)(GetMessagesFromInbox*))(Il2CppBase() + 0x3397B8))(this);
	}
};
