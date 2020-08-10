#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameCloudManager
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78EF8);
	}
	// Fields
	template <typename T = void*> static T& m_sInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& PendingActions() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& ActiveAction() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_FriendList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_CloudMailbox() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_CloudPPI() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_CloudProgress() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_LastDownloadTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& m_TotalTapjoyOfferwallCredits() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& m_TotalSupersonicOfferwallCredits() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GameCloudManager*))(Il2CppBase() + 0x329218))(this);
	}
	template <typename T = Il2CppString*> static T get_productID() {
		return ((T (*)(void *))(Il2CppBase() + 0x3292C4))(0);
	}
	template <typename T = void*> static T get_friendList() {
		return ((T (*)(void *))(Il2CppBase() + 0x31F240))(0);
	}
	template <typename T = void*> static T get_mailbox() {
		return ((T (*)(void *))(Il2CppBase() + 0x31B1E4))(0);
	}
	template <typename T = void*> static T get_cloudPPI() {
		return ((T (*)(void *))(Il2CppBase() + 0x329340))(0);
	}
	template <typename T = void*> static T get_instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x32933C))(0);
	}
	template <typename T = void> static T AddAction(void* inAction) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x319A60))(0, inAction);
	}
	template <typename T = void*> static T SendPPIToCloud(Il2CppString* inPPIInJSON) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3294B8))(0, inPPIInJSON);
	}
	template <typename T = void*> static T BackupProgressToCloud() {
		return ((T (*)(void *))(Il2CppBase() + 0x32968C))(0);
	}
	template <typename T = void*> static T RetrieveProgressFromCloud(bool inSkipTimeOutCheck) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x329D48))(0, inSkipTimeOutCheck);
	}
	template <typename T = bool> static T CanRestoreProgressFromCloud() {
		return ((T (*)(void *))(Il2CppBase() + 0x32A154))(0);
	}
	template <typename T = bool> static T RestoreProgressFromCloud() {
		return ((T (*)(void *))(Il2CppBase() + 0x32A1A0))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GameCloudManager*))(Il2CppBase() + 0x32A798))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GameCloudManager*))(Il2CppBase() + 0x32A874))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GameCloudManager*))(Il2CppBase() + 0x32A9A4))(this);
	}
	template <typename T = void*> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x329364))(0);
	}
	template <typename T = void> T UpdateCloudActions() {
		return ((T (*)(GameCloudManager*))(Il2CppBase() + 0x32A878))(this);
	}
	template <typename T = void*> T BackupProgressToCloud_Corutine(void* inAction, Il2CppString* inPPI, Il2CppString* inProgress) {
		return ((T (*)(GameCloudManager*, void*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x329C80))(this, inAction, inPPI, inProgress);
	}
	template <typename T = void*> T RetrieveProgressFromCloud_Corutine(void* inAction) {
		return ((T (*)(GameCloudManager*, void*))(Il2CppBase() + 0x32A0A4))(this, inAction);
	}
	template <typename T = bool> T SetCloudProgressData(Il2CppString* inPPIJSON, Il2CppString* inProgressJSON) {
		return ((T (*)(GameCloudManager*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x32AA54))(this, inPPIJSON, inProgressJSON);
	}
	template <typename T = void> static T OnBeforeDataRestore() {
		return ((T (*)(void *))(Il2CppBase() + 0x32A3E0))(0);
	}
	template <typename T = void> static T OnAfterDataRestore() {
		return ((T (*)(void *))(Il2CppBase() + 0x32A4F8))(0);
	}
};
