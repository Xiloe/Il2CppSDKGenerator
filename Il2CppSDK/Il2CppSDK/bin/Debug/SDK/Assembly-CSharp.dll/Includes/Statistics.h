#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Statistics
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7982C);
	}
	// Fields
	template <typename T = void*> T& m_CurrentMode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<void*>*> T& m_StatisticsItems() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__am$cache6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& f__am$cache7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = void*> static T& f__am$cache8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& f__am$cache9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = void*> static T& f__am$cacheA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& f__am$cacheB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = void*> static T& f__am$cacheC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& f__am$cacheD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = void*> static T& f__am$cacheE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& f__am$cacheF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = void*> static T& f__am$cache10() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& f__am$cache11() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = void*> static T& f__am$cache12() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& f__am$cache13() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Statistics*))(Il2CppBase() + 0x25EA70))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(Statistics*))(Il2CppBase() + 0x25EB1C))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(Statistics*))(Il2CppBase() + 0x25EBC4))(this);
	}
	template <typename T = void*> T get_Mode() {
		return ((T (*)(Statistics*))(Il2CppBase() + 0x25EC5C))(this);
	}
	template <typename T = void*> T GetItem(int32_t index) {
		return ((T (*)(Statistics*, int32_t))(Il2CppBase() + 0x25EC64))(this, index);
	}
	template <typename T = void> T PrepareFor(void* inMode, Il2CppString* inFriendName) {
		return ((T (*)(Statistics*, void*, Il2CppString*))(Il2CppBase() + 0x25ED04))(this, inMode, inFriendName);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(Statistics*))(Il2CppBase() + 0x25F27C))(this);
	}
	template <typename T = void*> T Range(int32_t inFrom, int32_t inTo) {
		return ((T (*)(Statistics*, int32_t, int32_t))(Il2CppBase() + 0x25F31C))(this, inFrom, inTo);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(Statistics*))(Il2CppBase() + 0x25EB20))(this);
	}
	template <typename T = void> T PrepareFor_Internal(void* inMode, Il2CppString* inFriendName) {
		return ((T (*)(Statistics*, void*, Il2CppString*))(Il2CppBase() + 0x25ED08))(this, inMode, inFriendName);
	}
	template <typename T = Il2CppList<void*>*> static T HarvestStatistics(void* inPlayerData, Il2CppList<void*>* inFriendsData) {
		return ((T (*)(void *, void*, Il2CppList<void*>*))(Il2CppBase() + 0x25F3F8))(0, inPlayerData, inFriendsData);
	}
	template <typename T = void*> static T Get_Experiance(int32_t inItemNameTextID, void* inPlayerData, Il2CppList<void*>* inFriendsData) {
		return ((T (*)(void *, int32_t, void*, Il2CppList<void*>*))(Il2CppBase() + 0x25FBE4))(0, inItemNameTextID, inPlayerData, inFriendsData);
	}
	template <typename T = void*> static T Get_Money(int32_t inItemNameTextID, void* inPlayerData, Il2CppList<void*>* inFriendsData) {
		return ((T (*)(void *, int32_t, void*, Il2CppList<void*>*))(Il2CppBase() + 0x25FCFC))(0, inItemNameTextID, inPlayerData, inFriendsData);
	}
	template <typename T = void*> static T Get_Gold(int32_t inItemNameTextID, void* inPlayerData, Il2CppList<void*>* inFriendsData) {
		return ((T (*)(void *, int32_t, void*, Il2CppList<void*>*))(Il2CppBase() + 0x25FE14))(0, inItemNameTextID, inPlayerData, inFriendsData);
	}
	template <typename T = void*> static T Get_Kills(int32_t inItemNameTextID, void* inPlayerData, Il2CppList<void*>* inFriendsData) {
		return ((T (*)(void *, int32_t, void*, Il2CppList<void*>*))(Il2CppBase() + 0x25FF2C))(0, inItemNameTextID, inPlayerData, inFriendsData);
	}
	template <typename T = void*> static T Get_Deaths(int32_t inItemNameTextID, void* inPlayerData, Il2CppList<void*>* inFriendsData) {
		return ((T (*)(void *, int32_t, void*, Il2CppList<void*>*))(Il2CppBase() + 0x260044))(0, inItemNameTextID, inPlayerData, inFriendsData);
	}
	template <typename T = void*> static T Get_HeadShots(int32_t inItemNameTextID, void* inPlayerData, Il2CppList<void*>* inFriendsData) {
		return ((T (*)(void *, int32_t, void*, Il2CppList<void*>*))(Il2CppBase() + 0x26015C))(0, inItemNameTextID, inPlayerData, inFriendsData);
	}
	template <typename T = void*> static T Get_Carnages(int32_t inItemNameTextID, void* inPlayerData, Il2CppList<void*>* inFriendsData) {
		return ((T (*)(void *, int32_t, void*, Il2CppList<void*>*))(Il2CppBase() + 0x260274))(0, inItemNameTextID, inPlayerData, inFriendsData);
	}
	template <typename T = void*> static T Get_Limbs(int32_t inItemNameTextID, void* inPlayerData, Il2CppList<void*>* inFriendsData) {
		return ((T (*)(void *, int32_t, void*, Il2CppList<void*>*))(Il2CppBase() + 0x26038C))(0, inItemNameTextID, inPlayerData, inFriendsData);
	}
	template <typename T = void*> static T Get_PlayedMissions(int32_t inItemNameTextID, void* inPlayerData, Il2CppList<void*>* inFriendsData) {
		return ((T (*)(void *, int32_t, void*, Il2CppList<void*>*))(Il2CppBase() + 0x2604A4))(0, inItemNameTextID, inPlayerData, inFriendsData);
	}
	template <typename T = void*> static T Get_MissionSuccess(int32_t inItemNameTextID, void* inPlayerData, Il2CppList<void*>* inFriendsData) {
		return ((T (*)(void *, int32_t, void*, Il2CppList<void*>*))(Il2CppBase() + 0x2605BC))(0, inItemNameTextID, inPlayerData, inFriendsData);
	}
	template <typename T = void*> static T _GetIntItem(int32_t inItemNameTextID, void* inPlayerData, Il2CppList<void*>* inFriendsData, void* inBetter, void* inExtractor) {
		return ((T (*)(void *, int32_t, void*, Il2CppList<void*>*, void*, void*))(Il2CppBase() + 0x262AA8))(0, inItemNameTextID, inPlayerData, inFriendsData, inBetter, inExtractor);
	}
	template <typename T = void*> static T _GetIntItem_1(Il2CppString* inItemNameText, void* inPlayerData, Il2CppList<void*>* inFriendsData, void* inBetter, void* inExtractor) {
		return ((T (*)(void *, Il2CppString*, void*, Il2CppList<void*>*, void*, void*))(Il2CppBase() + 0x262F2C))(0, inItemNameText, inPlayerData, inFriendsData, inBetter, inExtractor);
	}
	template <typename T = void*> static T _GetIntItem_2(void* inItem, void* inPlayerData, Il2CppList<void*>* inFriendsData, void* inBetter, void* inExtractor) {
		return ((T (*)(void *, void*, void*, Il2CppList<void*>*, void*, void*))(Il2CppBase() + 0x262BFC))(0, inItem, inPlayerData, inFriendsData, inBetter, inExtractor);
	}
	template <typename T = void*> static T Get_GameTime(int32_t inItemNameTextID, void* inPlayerData, Il2CppList<void*>* inFriendsData, void* inBetter) {
		return ((T (*)(void *, int32_t, void*, Il2CppList<void*>*, void*))(Il2CppBase() + 0x2606D4))(0, inItemNameTextID, inPlayerData, inFriendsData, inBetter);
	}
	template <typename T = void*> static T Get_Arena1_HighScore(Il2CppString* inItemNameText, void* inPlayerData, Il2CppList<void*>* inFriendsData) {
		return ((T (*)(void *, Il2CppString*, void*, Il2CppList<void*>*))(Il2CppBase() + 0x260C44))(0, inItemNameText, inPlayerData, inFriendsData);
	}
	template <typename T = void*> static T Get_Arena1_Played(Il2CppString* inItemNameText, void* inPlayerData, Il2CppList<void*>* inFriendsData) {
		return ((T (*)(void *, Il2CppString*, void*, Il2CppList<void*>*))(Il2CppBase() + 0x2612C0))(0, inItemNameText, inPlayerData, inFriendsData);
	}
	template <typename T = void*> static T Get_Arena1_GameTime(Il2CppString* inItemNameText, void* inPlayerData, Il2CppList<void*>* inFriendsData, void* inBetter) {
		return ((T (*)(void *, Il2CppString*, void*, Il2CppList<void*>*, void*))(Il2CppBase() + 0x260D5C))(0, inItemNameText, inPlayerData, inFriendsData, inBetter);
	}
	template <typename T = void*> static T Get_Arena2_HighScore(Il2CppString* inItemNameText, void* inPlayerData, Il2CppList<void*>* inFriendsData) {
		return ((T (*)(void *, Il2CppString*, void*, Il2CppList<void*>*))(Il2CppBase() + 0x2613D8))(0, inItemNameText, inPlayerData, inFriendsData);
	}
	template <typename T = void*> static T Get_Arena2_Played(Il2CppString* inItemNameText, void* inPlayerData, Il2CppList<void*>* inFriendsData) {
		return ((T (*)(void *, Il2CppString*, void*, Il2CppList<void*>*))(Il2CppBase() + 0x261A54))(0, inItemNameText, inPlayerData, inFriendsData);
	}
	template <typename T = void*> static T Get_Arena2_GameTime(Il2CppString* inItemNameText, void* inPlayerData, Il2CppList<void*>* inFriendsData, void* inBetter) {
		return ((T (*)(void *, Il2CppString*, void*, Il2CppList<void*>*, void*))(Il2CppBase() + 0x2614F0))(0, inItemNameText, inPlayerData, inFriendsData, inBetter);
	}
	template <typename T = void*> static T Get_Arena3_HighScore(Il2CppString* inItemNameText, void* inPlayerData, Il2CppList<void*>* inFriendsData) {
		return ((T (*)(void *, Il2CppString*, void*, Il2CppList<void*>*))(Il2CppBase() + 0x261B6C))(0, inItemNameText, inPlayerData, inFriendsData);
	}
	template <typename T = void*> static T Get_Arena3_Played(Il2CppString* inItemNameText, void* inPlayerData, Il2CppList<void*>* inFriendsData) {
		return ((T (*)(void *, Il2CppString*, void*, Il2CppList<void*>*))(Il2CppBase() + 0x2621E8))(0, inItemNameText, inPlayerData, inFriendsData);
	}
	template <typename T = void*> static T Get_Arena3_GameTime(Il2CppString* inItemNameText, void* inPlayerData, Il2CppList<void*>* inFriendsData, void* inBetter) {
		return ((T (*)(void *, Il2CppString*, void*, Il2CppList<void*>*, void*))(Il2CppBase() + 0x261C84))(0, inItemNameText, inPlayerData, inFriendsData, inBetter);
	}
	template <typename T = void*> static T Get_Arena4_HighScore(Il2CppString* inItemNameText, void* inPlayerData, Il2CppList<void*>* inFriendsData) {
		return ((T (*)(void *, Il2CppString*, void*, Il2CppList<void*>*))(Il2CppBase() + 0x262300))(0, inItemNameText, inPlayerData, inFriendsData);
	}
	template <typename T = void*> static T Get_Arena4_Played(Il2CppString* inItemNameText, void* inPlayerData, Il2CppList<void*>* inFriendsData) {
		return ((T (*)(void *, Il2CppString*, void*, Il2CppList<void*>*))(Il2CppBase() + 0x26297C))(0, inItemNameText, inPlayerData, inFriendsData);
	}
	template <typename T = void*> static T Get_Arena4_GameTime(Il2CppString* inItemNameText, void* inPlayerData, Il2CppList<void*>* inFriendsData, void* inBetter) {
		return ((T (*)(void *, Il2CppString*, void*, Il2CppList<void*>*, void*))(Il2CppBase() + 0x262418))(0, inItemNameText, inPlayerData, inFriendsData, inBetter);
	}
	template <typename T = int32_t> static T Get_Experiancem__23(void* val) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x263120))(0, val);
	}
	template <typename T = int32_t> static T Get_Moneym__24(void* val) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x263140))(0, val);
	}
	template <typename T = int32_t> static T Get_Goldm__25(void* val) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x263160))(0, val);
	}
	template <typename T = int32_t> static T Get_Killsm__26(void* val) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x263180))(0, val);
	}
	template <typename T = int32_t> static T Get_Deathsm__27(void* val) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x2631A0))(0, val);
	}
	template <typename T = int32_t> static T Get_HeadShotsm__28(void* val) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x2631C0))(0, val);
	}
	template <typename T = int32_t> static T Get_Carnagesm__29(void* val) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x2631E0))(0, val);
	}
	template <typename T = int32_t> static T Get_Limbsm__2A(void* val) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x263200))(0, val);
	}
	template <typename T = int32_t> static T Get_PlayedMissionsm__2B(void* val) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x263220))(0, val);
	}
	template <typename T = int32_t> static T Get_MissionSuccessm__2C(void* val) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x263240))(0, val);
	}
	template <typename T = int32_t> static T Get_Arena1_HighScorem__2D(void* val) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x263260))(0, val);
	}
	template <typename T = int32_t> static T Get_Arena1_Playedm__2E(void* val) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x263280))(0, val);
	}
	template <typename T = int32_t> static T Get_Arena2_HighScorem__2F(void* val) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x2632A0))(0, val);
	}
	template <typename T = int32_t> static T Get_Arena2_Playedm__30(void* val) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x2632C0))(0, val);
	}
	template <typename T = int32_t> static T Get_Arena3_HighScorem__31(void* val) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x2632E0))(0, val);
	}
	template <typename T = int32_t> static T Get_Arena3_Playedm__32(void* val) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x263300))(0, val);
	}
	template <typename T = int32_t> static T Get_Arena4_HighScorem__33(void* val) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x263320))(0, val);
	}
	template <typename T = int32_t> static T Get_Arena4_Playedm__34(void* val) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x263340))(0, val);
	}
};
