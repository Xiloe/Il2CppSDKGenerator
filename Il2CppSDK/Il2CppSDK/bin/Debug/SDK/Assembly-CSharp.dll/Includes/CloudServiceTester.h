#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CloudServiceTester
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& m_UserID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_FriendID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& m_ProductID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& m_ProductDataID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& m_ProductData() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& m_UserDataID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& m_UserData() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& m_ItemDataID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& m_ItemData() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& m_InitialPlayerData() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& m_Password() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& m_ItemID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& m_SlotIdx() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& m_Message() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& m_TransactionId() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& m_ReceiptData() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CloudServiceTester*))(Il2CppBase() + 0x2D1798))(this);
	}
	template <typename T = void> T CreateUsers(int32_t numUsers) {
		return ((T (*)(CloudServiceTester*, int32_t))(Il2CppBase() + 0x2D18F0))(this, numUsers);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(CloudServiceTester*))(Il2CppBase() + 0x2D1AC8))(this);
	}
	template <typename T = void> T AsyncOpFinished(void* res) {
		return ((T (*)(CloudServiceTester*, void*))(Il2CppBase() + 0x2D3258))(this, res);
	}
	template <typename T = void> T FetchMessagesAsyncOpFinished(void* res) {
		return ((T (*)(CloudServiceTester*, void*))(Il2CppBase() + 0x2D3318))(this, res);
	}
};
