#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CloudMailbox
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78B90);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& m_Inbox() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<void*>*> T& m_Outbox() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_MessageFetchInProggres() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_LastSyncTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CloudMailbox*))(Il2CppBase() + 0x2C208C))(this);
	}
	template <typename T = void> T FetchMessages(bool inSkipTimeOutCheck) {
		return ((T (*)(CloudMailbox*, bool))(Il2CppBase() + 0x2C2150))(this, inSkipTimeOutCheck);
	}
	template <typename T = void> T SendMessage(Il2CppString* inRecipient, Il2CppString* inMessageBody, void* inMailbox) {
		return ((T (*)(CloudMailbox*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x2C24CC))(this, inRecipient, inMessageBody, inMailbox);
	}
	template <typename T = void> T SendMessage_1(Il2CppString* inRecipient, void* inMessage) {
		return ((T (*)(CloudMailbox*, Il2CppString*, void*))(Il2CppBase() + 0x2C2844))(this, inRecipient, inMessage);
	}
	template <typename T = void> T OnUserAuthenticate() {
		return ((T (*)(CloudMailbox*))(Il2CppBase() + 0x2C2EB4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CloudMailbox*))(Il2CppBase() + 0x2C3320))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(CloudMailbox*))(Il2CppBase() + 0x2C3324))(this);
	}
	template <typename T = void*> T FetchMessages_Corutine() {
		return ((T (*)(CloudMailbox*))(Il2CppBase() + 0x2C2428))(this);
	}
	template <typename T = void*> T FetchMessages_Corutine_1(bool inGlobalInbox, bool inRemoveMessagesFromServer) {
		return ((T (*)(CloudMailbox*, bool, bool))(Il2CppBase() + 0x2C3338))(this, inGlobalInbox, inRemoveMessagesFromServer);
	}
	template <typename T = int32_t> T ProcessMessages(Il2CppString* inRawMessageFromCloud, bool inGlobalInbox) {
		return ((T (*)(CloudMailbox*, Il2CppString*, bool))(Il2CppBase() + 0x2C33FC))(this, inRawMessageFromCloud, inGlobalInbox);
	}
	template <typename T = void*> T ProcessMessage(Il2CppString* inRawMessage, bool inGlobalInbox) {
		return ((T (*)(CloudMailbox*, Il2CppString*, bool))(Il2CppBase() + 0x2C35C8))(this, inRawMessage, inGlobalInbox);
	}
	template <typename T = void> T SaveInbox() {
		return ((T (*)(CloudMailbox*))(Il2CppBase() + 0x2C3F68))(this);
	}
	template <typename T = void> T SaveOutbox() {
		return ((T (*)(CloudMailbox*))(Il2CppBase() + 0x2C2CE0))(this);
	}
	template <typename T = void> T LoadInbox() {
		return ((T (*)(CloudMailbox*))(Il2CppBase() + 0x2C2ED0))(this);
	}
	template <typename T = void> T LoadOutbox() {
		return ((T (*)(CloudMailbox*))(Il2CppBase() + 0x2C30F8))(this);
	}
};
