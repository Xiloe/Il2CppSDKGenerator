#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CityManager
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD789E8);
	}
	// Fields
	template <typename T = void*> T& guiNumberLoop() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& guiShowItem() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& guiResultStar() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& guiZoomIn() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& guiZoomOut() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& guiReward() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& guiPromoted() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_CityCameraObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_CasinoCameraObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> static T& _Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& m_SiteManager() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_MissionManager() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& m_GuiResources() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& m_GuiDialogs() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& m_GuiArena() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& m_Input() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& m_CityCamera() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& m_Casino() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& m_OneTimeSaleOfferManager() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& m_LateInitialize() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& m_ActiveIcon() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = void*> T& m_HudUtility() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& m_ActiveHelicopterSlot() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = void*> T& m_ActiveHelicopter() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& m_Promoted() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = void*> T& m_CityScreenTracker() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = void*> T& m_OtherScreens() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = void*> T& m_AudioMain() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = void*> T& m_AudioSecond() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& m_DisableNextSuspend() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& m_DisableNextResume() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& m_ScheduledChopperDrop() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& m_SafeHavenIntroduced() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& m_ShopIntroduced() {
		return *(T*)((uintptr_t)this + 0x8D);
	}
	template <typename T = bool> T& m_EquipIntroduced() {
		return *(T*)((uintptr_t)this + 0x8E);
	}
	template <typename T = bool> T& m_SafeHavenTutorialIntroduced() {
		return *(T*)((uintptr_t)this + 0x8F);
	}
	template <typename T = bool> T& m_ShopTutorialIntroduced() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& m_EquipTutorialIntroduced() {
		return *(T*)((uintptr_t)this + 0x91);
	}
	template <typename T = bool> T& m_BankIntroduced() {
		return *(T*)((uintptr_t)this + 0x92);
	}
	template <typename T = bool> T& m_MissionIntroduced() {
		return *(T*)((uintptr_t)this + 0x93);
	}
	template <typename T = bool> T& m_ArenaIntroduced() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& m_HalloweenAdvertShown() {
		return *(T*)((uintptr_t)this + 0x95);
	}
	template <typename T = bool> T& m_TapJoyAdvertShown() {
		return *(T*)((uintptr_t)this + 0x96);
	}
	template <typename T = bool> T& m_ChristmasAdvertShown() {
		return *(T*)((uintptr_t)this + 0x97);
	}
	template <typename T = bool> T& m_SpentRealMoney() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& m_BuyerReward_Checked() {
		return *(T*)((uintptr_t)this + 0x99);
	}
	template <typename T = bool> T& m_BuyerReward_CanReceive() {
		return *(T*)((uintptr_t)this + 0x9A);
	}
	template <typename T = bool> T& m_BuyerReward_ReceivedFirst() {
		return *(T*)((uintptr_t)this + 0x9B);
	}
	template <typename T = bool> T& m_BuyerReward_Received() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& m_Reward_CanReceive_180() {
		return *(T*)((uintptr_t)this + 0x9D);
	}
	template <typename T = bool> T& m_Reward_Received_180() {
		return *(T*)((uintptr_t)this + 0x9E);
	}
	template <typename T = bool> T& m_WasUserBefore111() {
		return *(T*)((uintptr_t)this + 0x9F);
	}
	template <typename T = Il2CppString*> static T& PLAYER_PREFS_SAVEGAME_KEYID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& tmpCounter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2AD19C))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2AD240))(0);
	}
	template <typename T = void*> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x28F790))(0);
	}
	template <typename T = void*> T get_ScreenTracker() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2975DC))(this);
	}
	template <typename T = void> T PlaySound(void* soundType, bool loop) {
		return ((T (*)(CityManager*, void*, bool))(Il2CppBase() + 0x2A2E5C))(this, soundType, loop);
	}
	template <typename T = void> T StopSound(void* sound) {
		return ((T (*)(CityManager*, void*))(Il2CppBase() + 0x29B400))(this, sound);
	}
	template <typename T = bool> T get_hasSpentRealMoney() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2AD2D0))(this);
	}
	template <typename T = void> T set_hasSpentRealMoney(bool value) {
		return ((T (*)(CityManager*, bool))(Il2CppBase() + 0x2AD2D8))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2AD2E0))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2AD50C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2AD730))(this);
	}
	template <typename T = bool> T get_guiInitialized() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2AE3B8))(this);
	}
	template <typename T = void> T LateInit() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2AE3CC))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B1448))(this);
	}
	template <typename T = void*> T GetCityProgress() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B1FD4))(this);
	}
	template <typename T = Il2CppString*> T GetCityProgressAsJSON() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B2960))(this);
	}
	template <typename T = void> T Save() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x28F840))(this);
	}
	template <typename T = void> T Load() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2AF93C))(this);
	}
	template <typename T = void> T ShowDialogForFirstMission() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B3314))(this);
	}
	template <typename T = void> T SpawnNewMissions() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B3110))(this);
	}
	template <typename T = void> T SpawnChopperMission() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B4108))(this);
	}
	template <typename T = void> T FocusOnMostImportantMission() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B3820))(this);
	}
	template <typename T = void> T UpdateObjective() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B2C50))(this);
	}
	template <typename T = void> T ProgressDialogsClosed() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B4518))(this);
	}
	template <typename T = void> T MissionFinished() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B4F40))(this);
	}
	template <typename T = void> T NextStoryChapter() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B0C1C))(this);
	}
	template <typename T = void> T StoryChapterClose() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B5C24))(this);
	}
	template <typename T = void> T ShowChapterDebriefing() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B58FC))(this);
	}
	template <typename T = void> T ChapterDebriefingClose() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B5C68))(this);
	}
	template <typename T = void> T AfterChapterObjectiveCompleted() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B5A50))(this);
	}
	template <typename T = void> T MissionStartAccept() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B5C9C))(this);
	}
	template <typename T = void> T ArenaStartAccept(int32_t arenaIndex) {
		return ((T (*)(CityManager*, int32_t))(Il2CppBase() + 0x2B6260))(this, arenaIndex);
	}
	template <typename T = void> T ArenaStartClose() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B6AD8))(this);
	}
	template <typename T = void> T MissionStartClose() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B6B20))(this);
	}
	template <typename T = void> T MissionStartEquip() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B6B68))(this);
	}
	template <typename T = void> T MissionEquipCancel() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B6C70))(this);
	}
	template <typename T = void> T MissionStartBuy(bool inside) {
		return ((T (*)(CityManager*, bool))(Il2CppBase() + 0x2B6C9C))(this, inside);
	}
	template <typename T = void> T MissionStartEquippedOwned() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B6EC4))(this);
	}
	template <typename T = void> T DisableNextSuspendAndResume() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2A5DE4))(this);
	}
	template <typename T = void> T TutorialProgress(bool gameLoad) {
		return ((T (*)(CityManager*, bool))(Il2CppBase() + 0x2B3CEC))(this, gameLoad);
	}
	template <typename T = void> T OnCityMapSuspend() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B72F4))(this);
	}
	template <typename T = void> T OnCityMapResume() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B7380))(this);
	}
	template <typename T = bool> T ShowAdditionalInfo() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B496C))(this);
	}
	template <typename T = void> T AdditionalInfoClose() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B761C))(this);
	}
	template <typename T = void> T OneTimeSaleOfferClose() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B7798))(this);
	}
	template <typename T = void> T ShowMissionResult() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B3090))(this);
	}
	template <typename T = void> T MissionResult_Show() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B77E0))(this);
	}
	template <typename T = void> T MissionResult_Close() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B7DCC))(this);
	}
	template <typename T = void> T ArenaResult_Show() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B64DC))(this);
	}
	template <typename T = void> T ArenaResult_Close() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B84F0))(this);
	}
	template <typename T = void> T Result_Close(int32_t totalMoney, int32_t totalExperience, int32_t bonusXp, void* bonus) {
		return ((T (*)(CityManager*, int32_t, int32_t, int32_t, void*))(Il2CppBase() + 0x2B8090))(this, totalMoney, totalExperience, bonusXp, bonus);
	}
	template <typename T = bool> T CanShowBuyerReward() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B1E08))(this);
	}
	template <typename T = void> T ShowBuyerReward() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B1E30))(this);
	}
	template <typename T = void> T BuyerRewardClose() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B8628))(this);
	}
	template <typename T = bool> T CanShowDailyReward() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B896C))(this);
	}
	template <typename T = void> T ShowDailyReward() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B1B38))(this);
	}
	template <typename T = void> T DailyRewardClose() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B8AA4))(this);
	}
	template <typename T = void> T ShowHalloweenAdvert() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B1C68))(this);
	}
	template <typename T = void> T HalloweenAdvertClose() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B8EA8))(this);
	}
	template <typename T = void> T ShowTapJoyAdvert() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B8F00))(this);
	}
	template <typename T = void> T TapJoyAdvertClose() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B8FD0))(this);
	}
	template <typename T = void> T ShowChristmasAdvert() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B1D38))(this);
	}
	template <typename T = void> T ChristmasAdvertClose() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B9028))(this);
	}
	template <typename T = void> T ShowStoryEvent() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B9080))(this);
	}
	template <typename T = void> T StoryEventClose() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B9150))(this);
	}
	template <typename T = void> T SpecialRewardClose() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B9184))(this);
	}
	template <typename T = void> T PromotionClose() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B935C))(this);
	}
	template <typename T = void> T ShopActivated() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B9450))(this);
	}
	template <typename T = void> T SafeHavenActivated() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B95FC))(this);
	}
	template <typename T = void> T MoneyIconActivated() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B9708))(this);
	}
	template <typename T = void> T ArenaActivated() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B97CC))(this);
	}
	template <typename T = void> T EquipActivated() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B994C))(this);
	}
	template <typename T = void> T BankActivated() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B9B00))(this);
	}
	template <typename T = void> T FreeGoldActivated() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B9BF8))(this);
	}
	template <typename T = void> T CasinoActivated() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B8D8C))(this);
	}
	template <typename T = void> T CasinoDectivated() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B9EBC))(this);
	}
	template <typename T = void> T SwitchCameras(void* camera) {
		return ((T (*)(CityManager*, void*))(Il2CppBase() + 0x2B9CF0))(this, camera);
	}
	template <typename T = void> T UpdateMissionHudIndicators(bool onlyCameraMoved) {
		return ((T (*)(CityManager*, bool))(Il2CppBase() + 0x2AED1C))(this, onlyCameraMoved);
	}
	template <typename T = void> T IndicatorPressed(int32_t index) {
		return ((T (*)(CityManager*, int32_t))(Il2CppBase() + 0x2B9F30))(this, index);
	}
	template <typename T = void> T Indicator1Pressed() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2BA3B8))(this);
	}
	template <typename T = void> T Indicator2Pressed() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2BA3C0))(this);
	}
	template <typename T = void> T Indicator3Pressed() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2BA3C8))(this);
	}
	template <typename T = void> T Indicator4Pressed() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2BA3D0))(this);
	}
	template <typename T = void> T Indicator5Pressed() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2BA3D8))(this);
	}
	template <typename T = void> T Indicator6Pressed() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2BA3E0))(this);
	}
	template <typename T = void> T Indicator7Pressed() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2BA3E8))(this);
	}
	template <typename T = void> T Indicator8Pressed() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2BA3F0))(this);
	}
	template <typename T = void> T Indicator9Pressed() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2BA3F8))(this);
	}
	template <typename T = void> T Indicator10Pressed() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2BA400))(this);
	}
	template <typename T = void> T IndicatorHideoutPressed() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2BA408))(this);
	}
	template <typename T = void> T IndicatorShopPressed() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2BA40C))(this);
	}
	template <typename T = void> T IndicatorEquipPressed() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2BA410))(this);
	}
	template <typename T = void> T IndicatorFreeGoldPressed() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2BA414))(this);
	}
	template <typename T = void> T IndicatorCasinoPressed() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2BA418))(this);
	}
	template <typename T = void> T StatusBarBackPressed() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2BA41C))(this);
	}
	template <typename T = void> T StatusBarGoldPressed() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2BA420))(this);
	}
	template <typename T = void> T StatusBarMoneyPressed() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2BA57C))(this);
	}
	template <typename T = void> T StatusBarXpPressed() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2BA6D8))(this);
	}
	template <typename T = void> T StatusBarOptionsPressed() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2BA6E8))(this);
	}
	template <typename T = void> T CameraMoveEvent(Il2CppVector3 camPos) {
		return ((T (*)(CityManager*, Il2CppVector3))(Il2CppBase() + 0x2BA7D8))(this, camPos);
	}
	template <typename T = void> T TouchEvent(void* collider) {
		return ((T (*)(CityManager*, void*))(Il2CppBase() + 0x2BA7E0))(this, collider);
	}
	template <typename T = void> T DisableInputForShortTime() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2BA2E0))(this);
	}
	template <typename T = void> T EnableInput() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B6F0C))(this);
	}
	template <typename T = void> T DisableInput() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2BAB84))(this);
	}
	template <typename T = void> T EnableInputAndIndicators(bool enable) {
		return ((T (*)(CityManager*, bool))(Il2CppBase() + 0x2B30D8))(this, enable);
	}
	template <typename T = void> T StopHelicopterCoroutine() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B5FE8))(this);
	}
	template <typename T = void*> T SpawnHelicopterCoroutine() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2BAC04))(this);
	}
	template <typename T = void*> T LoadMission(void* info) {
		return ((T (*)(CityManager*, void*))(Il2CppBase() + 0x2B61B8))(this, info);
	}
	template <typename T = void*> T LoadArena(Il2CppString* levelName) {
		return ((T (*)(CityManager*, Il2CppString*))(Il2CppBase() + 0x2B6A30))(this, levelName);
	}
	template <typename T = void> T OnExitButton() {
		return ((T (*)(CityManager*))(Il2CppBase() + 0x2B1850))(this);
	}
	template <typename T = void> T ExitResultHandler(void* inPopup, void* inResult) {
		return ((T (*)(CityManager*, void*, void*))(Il2CppBase() + 0x2BACC0))(this, inPopup, inResult);
	}
	template <typename T = void> T EnableStatusBarButtons(bool hidden) {
		return ((T (*)(CityManager*, bool))(Il2CppBase() + 0x2BAD94))(this, hidden);
	}
};
