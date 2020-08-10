#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CloudServices
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78BA4);
	}
	// Fields
	template <typename T = bool> T& m_EnableEncryption() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_EnableStoreKitSandbox() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = void*> T& m_RSA() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_SymmetricEnc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_SymmetricEncEncryptor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_RndGen() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<void*>*> T& m_SymmetricEncPassword() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<void*>*> T& m_SymmetricEncIV() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& m_SymmetricEncPasswordBase64() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& m_SymmetricEncIVBase64() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_LastPasswordChangeTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_DbgIntroducedFailureRate() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> static T& ms_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CloudServices*))(Il2CppBase() + 0x2C4A74))(this);
	}
	template <typename T = Il2CppString*> T get_AppVersion() {
		return ((T (*)(CloudServices*))(Il2CppBase() + 0x2C4B6C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(CloudServices*))(Il2CppBase() + 0x2C4D3C))(this);
	}
	template <typename T = void*> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x2C4DC0))(0);
	}
	template <typename T = void> T InitEncryption() {
		return ((T (*)(CloudServices*))(Il2CppBase() + 0x2C4F3C))(this);
	}
	template <typename T = void> T RefreshSymmetricEncParams() {
		return ((T (*)(CloudServices*))(Il2CppBase() + 0x2C5060))(this);
	}
	template <typename T = Il2CppString*> static T CalcPasswordHash(Il2CppString* password) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2C5314))(0, password);
	}
	template <typename T = Il2CppArray<void*>*> static T CalcSHA1Hash(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2C5468))(0, str);
	}
	template <typename T = void*> T CreateUser(Il2CppString* uniqueUserID, Il2CppString* productID, Il2CppString* passwordHash, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x2C558C))(this, uniqueUserID, productID, passwordHash, listener);
	}
	template <typename T = void*> T UserNameExists(Il2CppString* userId, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, void*))(Il2CppBase() + 0x2C5834))(this, userId, listener);
	}
	template <typename T = void*> T UserExists(Il2CppString* userId, Il2CppString* productId, Il2CppString* password, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x2C5A34))(this, userId, productId, password, listener);
	}
	template <typename T = void*> T ValidateUserAccount(Il2CppString* userId, Il2CppString* productId, Il2CppString* password, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x2C5B08))(this, userId, productId, password, listener);
	}
	template <typename T = void*> T UserSetPerProductData(Il2CppString* userId, Il2CppString* productId, Il2CppString* key, Il2CppString* val, Il2CppString* passwordHash, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x2C5CC4))(this, userId, productId, key, val, passwordHash, listener);
	}
	template <typename T = void*> T UserGetPerProductData(Il2CppString* userId, Il2CppString* productId, Il2CppString* key, Il2CppString* passwordHash, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x2C5EB4))(this, userId, productId, key, passwordHash, listener);
	}
	template <typename T = void*> T UserSetPerProductDataSection(Il2CppString* userId, Il2CppString* productId, Il2CppString* key, Il2CppString* sectionId, Il2CppString* val, Il2CppString* passwordHash, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x2C6084))(this, userId, productId, key, sectionId, val, passwordHash, listener);
	}
	template <typename T = void*> T UserUpdatePerProductDataSection(Il2CppString* userId, Il2CppString* productId, Il2CppString* key, Il2CppString* sectionId, Il2CppString* val, Il2CppString* passwordHash, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x2C6284))(this, userId, productId, key, sectionId, val, passwordHash, listener);
	}
	template <typename T = void*> T UserSetData(Il2CppString* userId, Il2CppString* key, Il2CppString* val, Il2CppString* passwordHash, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x2C6484))(this, userId, key, val, passwordHash, listener);
	}
	template <typename T = void*> T UserGetData(Il2CppString* userId, Il2CppString* key, Il2CppString* passwordHash, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x2C6668))(this, userId, key, passwordHash, listener);
	}
	template <typename T = void*> T BuyItem(Il2CppString* userId, Il2CppString* productId, int32_t itemID, Il2CppString* passwordHash, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, void*))(Il2CppBase() + 0x2C6810))(this, userId, productId, itemID, passwordHash, listener);
	}
	template <typename T = void*> T EquipItem(Il2CppString* userId, Il2CppString* productId, int32_t itemID, int32_t teamIdx, int32_t slotIdx, Il2CppString* passwordHash, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, int32_t, int32_t, int32_t, Il2CppString*, void*))(Il2CppBase() + 0x2C69F4))(this, userId, productId, itemID, teamIdx, slotIdx, passwordHash, listener);
	}
	template <typename T = void*> T UnEquipItem(Il2CppString* userId, Il2CppString* productId, int32_t itemID, int32_t teamIdx, int32_t slotIdx, Il2CppString* passwordHash, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, int32_t, int32_t, int32_t, Il2CppString*, void*))(Il2CppBase() + 0x2C6BF4))(this, userId, productId, itemID, teamIdx, slotIdx, passwordHash, listener);
	}
	template <typename T = void*> T ModifyItem(Il2CppString* userId, Il2CppString* productId, int32_t itemID, Il2CppString* key, Il2CppString* val, Il2CppString* passwordHash, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x2C6DF4))(this, userId, productId, itemID, key, val, passwordHash, listener);
	}
	template <typename T = void*> T ModifyItems(Il2CppString* userId, Il2CppString* productId, Il2CppArray<void*>* items, Il2CppString* passwordHash, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppArray<void*>*, Il2CppString*, void*))(Il2CppBase() + 0x2C7028))(this, userId, productId, items, passwordHash, listener);
	}
	template <typename T = void*> T CreateProduct(Il2CppString* productID, Il2CppString* passwordHash, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x2C7120))(this, productID, passwordHash, listener);
	}
	template <typename T = void*> T ProductSetParam(Il2CppString* productID, Il2CppString* paramId, Il2CppString* paramVal, Il2CppString* passwordHash, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x2C72C8))(this, productID, paramId, paramVal, passwordHash, listener);
	}
	template <typename T = void*> T ProductGetParam(Il2CppString* productID, Il2CppString* paramId, Il2CppString* passwordHash, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x2C74AC))(this, productID, paramId, passwordHash, listener);
	}
	template <typename T = void*> T QueryFriendsInfo(Il2CppString* userId, Il2CppString* productId, Il2CppString* friendsListJSON, Il2CppString* passwordHash, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x2C7654))(this, userId, productId, friendsListJSON, passwordHash, listener);
	}
	template <typename T = void*> T RequestAddFriend(Il2CppString* userId, Il2CppString* friendUserId, Il2CppString* infoMessage, Il2CppString* passwordHash, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x2C7824))(this, userId, friendUserId, infoMessage, passwordHash, listener);
	}
	template <typename T = void*> T FetchInboxMessages(Il2CppString* userId, Il2CppString* productId, Il2CppString* passwordHash, int32_t startMsgIdx, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, void*))(Il2CppBase() + 0x2C7A08))(this, userId, productId, passwordHash, startMsgIdx, listener);
	}
	template <typename T = void*> T FetchProductInboxMessages(Il2CppString* productId, Il2CppString* passwordHash, int32_t startMsgIdx, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, int32_t, void*))(Il2CppBase() + 0x2C7BD0))(this, productId, passwordHash, startMsgIdx, listener);
	}
	template <typename T = void*> T InboxRemoveMessages(Il2CppString* userId, Il2CppString* productId, int32_t lastMessageIdx, Il2CppString* passwordHash, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, void*))(Il2CppBase() + 0x2C7CFC))(this, userId, productId, lastMessageIdx, passwordHash, listener);
	}
	template <typename T = void*> T ProductInboxRemoveMessages(Il2CppString* productId, int32_t lastMessageIdx, Il2CppString* passwordHash, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, int32_t, Il2CppString*, void*))(Il2CppBase() + 0x2C7ED8))(this, productId, lastMessageIdx, passwordHash, listener);
	}
	template <typename T = void*> T InboxAddMsg(Il2CppString* userId, Il2CppString* targetUserId, Il2CppString* productId, Il2CppString* msg, Il2CppString* passwordHash, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x2C800C))(this, userId, targetUserId, productId, msg, passwordHash, listener);
	}
	template <typename T = void*> T ProductInboxAddMsg(Il2CppString* productId, Il2CppString* msg, Il2CppString* passwordHash, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x2C81F4))(this, productId, msg, passwordHash, listener);
	}
	template <typename T = void*> T ProcessResponseCmd(Il2CppString* cmdData, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, void*))(Il2CppBase() + 0x2C832C))(this, cmdData, listener);
	}
	template <typename T = void*> T RequestResetPassword(Il2CppString* userId, Il2CppString* msgBody, Il2CppString* msgSubject, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x2C8510))(this, userId, msgBody, msgSubject, listener);
	}
	template <typename T = void*> T VerifyStoreKitReceipt(Il2CppString* transactionId, Il2CppString* receiptData, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x2C8720))(this, transactionId, receiptData, listener);
	}
	template <typename T = void*> T GetEigcData(Il2CppString* userid, Il2CppString* productID, Il2CppString* passwordHash, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x2C891C))(this, userid, productID, passwordHash, listener);
	}
	template <typename T = void*> T GetEigcPassword(Il2CppString* userid, Il2CppString* productID, Il2CppString* passwordHash, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x2C8AC4))(this, userid, productID, passwordHash, listener);
	}
	template <typename T = void*> T RegisterForPushNotifications(Il2CppString* userID, Il2CppString* productID, Il2CppString* provider, Il2CppString* registrationID, bool register_, Il2CppString* passwordHash, void* listener) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, bool, Il2CppString*, void*))(Il2CppBase() + 0x2C8C6C))(this, userID, productID, provider, registrationID, register_, passwordHash, listener);
	}
	template <typename T = void*> T CreateProduct_1(Il2CppString* productID, Il2CppString* password, void* result, int32_t numRetries) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C71F4))(this, productID, password, result, numRetries);
	}
	template <typename T = void*> T ProductSetParam_1(Il2CppString* productID, Il2CppString* paramId, Il2CppString* paramVal, Il2CppString* password, void* result, int32_t numRetries) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C73C0))(this, productID, paramId, paramVal, password, result, numRetries);
	}
	template <typename T = void*> T ProductGetParam_1(Il2CppString* productID, Il2CppString* paramId, Il2CppString* password, void* result, int32_t numRetries) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C7580))(this, productID, paramId, password, result, numRetries);
	}
	template <typename T = void*> T SetUserData(Il2CppString* userId, Il2CppString* fieldId, Il2CppString* data, Il2CppString* password, void* result, int32_t numRetries) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C657C))(this, userId, fieldId, data, password, result, numRetries);
	}
	template <typename T = void*> T GetUserData(Il2CppString* userId, Il2CppString* fieldId, Il2CppString* password, void* result) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x2C673C))(this, userId, fieldId, password, result);
	}
	template <typename T = void*> T UserExists_1(Il2CppString* userId, Il2CppString* productId, Il2CppString* password, void* result) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x2C5960))(this, userId, productId, password, result);
	}
	template <typename T = void*> T CreateUser_1(Il2CppString* userId, Il2CppString* productId, Il2CppString* password, void* result, int32_t numRetries) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C5760))(this, userId, productId, password, result, numRetries);
	}
	template <typename T = void*> T CreateUser_2(Il2CppString* userId, Il2CppString* password, void* result, int32_t numRetries) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C8EA4))(this, userId, password, result, numRetries);
	}
	template <typename T = void*> T ValidateUserAccount_1(Il2CppString* userId, Il2CppString* productId, Il2CppString* password, void* result, int32_t numRetries) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C5BE4))(this, userId, productId, password, result, numRetries);
	}
	template <typename T = void*> T UserAddProductData(Il2CppString* userId, Il2CppString* productId, Il2CppString* password, void* result, int32_t numRetries) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C8F88))(this, userId, productId, password, result, numRetries);
	}
	template <typename T = void*> T UserSetProductSpecificData(Il2CppString* userId, Il2CppString* productId, Il2CppString* key, Il2CppString* val, Il2CppString* password, void* result, int32_t numRetries) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C5DBC))(this, userId, productId, key, val, password, result, numRetries);
	}
	template <typename T = void*> T UserGetProductSpecificData(Il2CppString* userId, Il2CppString* productId, Il2CppString* paramId, Il2CppString* password, void* result, int32_t numRetries) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C5FA4))(this, userId, productId, paramId, password, result, numRetries);
	}
	template <typename T = void*> T UserSetPerProductDataSection_1(Il2CppString* userId, Il2CppString* productId, Il2CppString* key, Il2CppString* sectionId, Il2CppString* data, Il2CppString* password, void* result, int32_t numRetries) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C6180))(this, userId, productId, key, sectionId, data, password, result, numRetries);
	}
	template <typename T = void*> T UserUpdatePerProductDataSection_1(Il2CppString* userId, Il2CppString* productId, Il2CppString* key, Il2CppString* sectionId, Il2CppString* data, Il2CppString* password, void* result, int32_t numRetries) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C6380))(this, userId, productId, key, sectionId, data, password, result, numRetries);
	}
	template <typename T = void*> T BuyItem_1(Il2CppString* userId, Il2CppString* productId, int32_t itemID, Il2CppString* password, void* result, int32_t numRetries) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C6908))(this, userId, productId, itemID, password, result, numRetries);
	}
	template <typename T = void*> T EquipItem_1(Il2CppString* userId, Il2CppString* productId, int32_t itemID, int32_t teamIdx, int32_t slotIdx, Il2CppString* password, void* result, int32_t numRetries) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, int32_t, int32_t, int32_t, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C6AF0))(this, userId, productId, itemID, teamIdx, slotIdx, password, result, numRetries);
	}
	template <typename T = void*> T UnEquipItem_1(Il2CppString* userId, Il2CppString* productId, int32_t itemID, int32_t teamIdx, int32_t slotIdx, Il2CppString* password, void* result, int32_t numRetries) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, int32_t, int32_t, int32_t, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C6CF0))(this, userId, productId, itemID, teamIdx, slotIdx, password, result, numRetries);
	}
	template <typename T = void*> T ModifyItem_1(Il2CppString* userId, Il2CppString* productId, int32_t itemID, Il2CppString* key, Il2CppString* val, Il2CppString* password, void* result, int32_t numRetries) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C90A8))(this, userId, productId, itemID, key, val, password, result, numRetries);
	}
	template <typename T = void*> T QueryFriendsInfo_1(Il2CppString* userId, Il2CppString* productId, Il2CppString* friendsListJSON, Il2CppString* passwordHash, void* result, int32_t numRetries) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C7744))(this, userId, productId, friendsListJSON, passwordHash, result, numRetries);
	}
	template <typename T = void*> T RequestAddFriend_1(Il2CppString* userId, Il2CppString* friendUserId, Il2CppString* infoMessage, Il2CppString* passwordHash, void* result, int32_t numRetries) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C791C))(this, userId, friendUserId, infoMessage, passwordHash, result, numRetries);
	}
	template <typename T = void*> T ModifyItems_1(Il2CppString* userId, Il2CppString* productId, Il2CppArray<void*>* items, Il2CppString* password, void* result, int32_t numRetries) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppArray<void*>*, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C6F3C))(this, userId, productId, items, password, result, numRetries);
	}
	template <typename T = void*> T GetEigcData_1(Il2CppString* UserId, Il2CppString* productId, Il2CppString* password, void* result, int32_t numRetries) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C89F0))(this, UserId, productId, password, result, numRetries);
	}
	template <typename T = void*> T GetEigcPassword_1(Il2CppString* UserId, Il2CppString* productId, Il2CppString* password, void* result, int32_t numRetries) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C8B98))(this, UserId, productId, password, result, numRetries);
	}
	template <typename T = void*> T InboxAddMsg_1(Il2CppString* userId, Il2CppString* targetUserId, Il2CppString* productId, Il2CppString* msg, Il2CppString* passwordHash, void* result, int32_t numRetries) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C8104))(this, userId, targetUserId, productId, msg, passwordHash, result, numRetries);
	}
	template <typename T = void*> T FetchInboxMessages_1(int32_t startMsgIdx, Il2CppString* userId, Il2CppString* productId, Il2CppString* passwordHash, void* result, int32_t numRetries) {
		return ((T (*)(CloudServices*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C7AF0))(this, startMsgIdx, userId, productId, passwordHash, result, numRetries);
	}
	template <typename T = void*> T InboxRemoveMessages_1(Il2CppString* userId, Il2CppString* productId, int32_t lastMessageIdx, Il2CppString* passwordHash, void* result, int32_t numRetries) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C7DF4))(this, userId, productId, lastMessageIdx, passwordHash, result, numRetries);
	}
	template <typename T = void*> T RequestResetPassword_1(Il2CppString* userId, Il2CppString* message, Il2CppString* subjectMsg, void* result, int32_t numRetries) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C8640))(this, userId, message, subjectMsg, result, numRetries);
	}
	template <typename T = void*> T RequestResetPasswordWithEmail(Il2CppString* userId, Il2CppString* userEmail, Il2CppString* message, Il2CppString* subjectMsg, void* result, int32_t numRetries) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C91FC))(this, userId, userEmail, message, subjectMsg, result, numRetries);
	}
	template <typename T = void*> T VerifyStoreKitReceipt_1(Il2CppString* transactionId, Il2CppString* receiptData, void* result, int32_t numRetries) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C8848))(this, transactionId, receiptData, result, numRetries);
	}
	template <typename T = void*> T RegisterForPushNotifications_1(Il2CppString* userID, Il2CppString* productID, Il2CppString* provider, Il2CppString* registrationID, bool register_, Il2CppString* passwordHash, void* res, int32_t numRetries) {
		return ((T (*)(CloudServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, bool, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C8D68))(this, userID, productID, provider, registrationID, register_, passwordHash, res, numRetries);
	}
	template <typename T = void*> T ProcessResponseCmd_1(Il2CppString* cmdData, void* result, int32_t numRetries) {
		return ((T (*)(CloudServices*, Il2CppString*, void*, int32_t))(Il2CppBase() + 0x2C8448))(this, cmdData, result, numRetries);
	}
	template <typename T = Il2CppString*> T BuildURLFromParams(void* httpData, Il2CppString* cmdURL) {
		return ((T (*)(CloudServices*, void*, Il2CppString*))(Il2CppBase() + 0x2C9308))(this, httpData, cmdURL);
	}
	template <typename T = void*> T ProcessGetWebRequest(Il2CppString* url, void* result) {
		return ((T (*)(CloudServices*, Il2CppString*, void*))(Il2CppBase() + 0x2C9894))(this, url, result);
	}
	template <typename T = void*> T CreateWWWForm(Il2CppString* data, bool forceDisableEncryption) {
		return ((T (*)(CloudServices*, Il2CppString*, bool))(Il2CppBase() + 0x2C9958))(this, data, forceDisableEncryption);
	}
	template <typename T = void*> T ProcessWebRequest(void* httpData, void* result, int32_t numRetries, Il2CppString* cmdURL) {
		return ((T (*)(CloudServices*, void*, void*, int32_t, Il2CppString*))(Il2CppBase() + 0x2C9D80))(this, httpData, result, numRetries, cmdURL);
	}
	template <typename T = Il2CppArray<void*>*> T AsymmetricEncrypt(Il2CppArray<void*>* input) {
		return ((T (*)(CloudServices*, Il2CppArray<void*>*))(Il2CppBase() + 0x2C52C0))(this, input);
	}
	template <typename T = Il2CppString*> T EncodeURLParam(Il2CppString* str) {
		return ((T (*)(CloudServices*, Il2CppString*))(Il2CppBase() + 0x2C94C4))(this, str);
	}
	template <typename T = Il2CppString*> T EncryptStr(Il2CppString* str) {
		return ((T (*)(CloudServices*, Il2CppString*))(Il2CppBase() + 0x2C9B90))(this, str);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CloudServices*))(Il2CppBase() + 0x2C9E54))(this);
	}
};
