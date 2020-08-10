#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CityGUIDialogs
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78B04);
	}
	// Fields
	template <typename T = void*> T& m_StoryChapter() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_StoryEvent() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_BuyerReward() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_OneTimeSaleOffer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_TapJoyAdvert() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_HalloweenAdvert() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_ChristmasAdvert() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_DailyReward() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_SiteInfo() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_MissionStart() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_MissionResult() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_Promotion() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_SpecialReward() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& m_Pivot() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CityGUIDialogs*))(Il2CppBase() + 0x29C8D8))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(CityGUIDialogs*))(Il2CppBase() + 0x29CE4C))(this);
	}
	template <typename T = void> T ShowStoryChapter(void* close, void* story, bool isDebriefing) {
		return ((T (*)(CityGUIDialogs*, void*, void*, bool))(Il2CppBase() + 0x29CE54))(this, close, story, isDebriefing);
	}
	template <typename T = void> T HideStoryChapter() {
		return ((T (*)(CityGUIDialogs*))(Il2CppBase() + 0x29D3A4))(this);
	}
	template <typename T = void> T ShowStoryEvent(void* close, int32_t text) {
		return ((T (*)(CityGUIDialogs*, void*, int32_t))(Il2CppBase() + 0x29D3FC))(this, close, text);
	}
	template <typename T = void> T HideStoryEvent() {
		return ((T (*)(CityGUIDialogs*))(Il2CppBase() + 0x29D578))(this);
	}
	template <typename T = void> T ShowBuyerReward(void* close, int32_t numGold, bool alienGun, int32_t numCasinoChips, bool reward180) {
		return ((T (*)(CityGUIDialogs*, void*, int32_t, bool, int32_t, bool))(Il2CppBase() + 0x29D5D0))(this, close, numGold, alienGun, numCasinoChips, reward180);
	}
	template <typename T = void> T HideBuyerReward() {
		return ((T (*)(CityGUIDialogs*))(Il2CppBase() + 0x29DF9C))(this);
	}
	template <typename T = void> T ShowOneTimeSaleOffer(void* close, void* manager) {
		return ((T (*)(CityGUIDialogs*, void*, void*))(Il2CppBase() + 0x29DFF4))(this, close, manager);
	}
	template <typename T = void> T HideOneTimeSaleOffer() {
		return ((T (*)(CityGUIDialogs*))(Il2CppBase() + 0x29E3B4))(this);
	}
	template <typename T = void> T ShowTapJoyAdvert(void* close) {
		return ((T (*)(CityGUIDialogs*, void*))(Il2CppBase() + 0x29E40C))(this, close);
	}
	template <typename T = void> T HideTapJoyAdvert() {
		return ((T (*)(CityGUIDialogs*))(Il2CppBase() + 0x29E46C))(this);
	}
	template <typename T = void> T ShowHalloweenAdvert(void* close) {
		return ((T (*)(CityGUIDialogs*, void*))(Il2CppBase() + 0x29E4C4))(this, close);
	}
	template <typename T = void> T HideHalloweenAdvert() {
		return ((T (*)(CityGUIDialogs*))(Il2CppBase() + 0x29E524))(this);
	}
	template <typename T = void> T ShowChristmasAdvert(void* close) {
		return ((T (*)(CityGUIDialogs*, void*))(Il2CppBase() + 0x29E57C))(this, close);
	}
	template <typename T = void> T HideChristmasAdvert() {
		return ((T (*)(CityGUIDialogs*))(Il2CppBase() + 0x29E5DC))(this);
	}
	template <typename T = void> T ShowDailyReward(void* close, bool arenaUnlocked) {
		return ((T (*)(CityGUIDialogs*, void*, bool))(Il2CppBase() + 0x29E634))(this, close, arenaUnlocked);
	}
	template <typename T = void> T HideDailyReward() {
		return ((T (*)(CityGUIDialogs*))(Il2CppBase() + 0x29EB10))(this);
	}
	template <typename T = void> T ShowSiteInfo(void* close, int32_t text) {
		return ((T (*)(CityGUIDialogs*, void*, int32_t))(Il2CppBase() + 0x29EB68))(this, close, text);
	}
	template <typename T = void> T HideSiteInfo() {
		return ((T (*)(CityGUIDialogs*))(Il2CppBase() + 0x29ECE4))(this);
	}
	template <typename T = void> T ShowMissionStart(void* accept, void* close, void* equip, void* buy, void* ownedEquipped, void* missionInfo) {
		return ((T (*)(CityGUIDialogs*, void*, void*, void*, void*, void*, void*))(Il2CppBase() + 0x29ED3C))(this, accept, close, equip, buy, ownedEquipped, missionInfo);
	}
	template <typename T = void> T MissionStartDisableControls(bool disable) {
		return ((T (*)(CityGUIDialogs*, bool))(Il2CppBase() + 0x2A0460))(this, disable);
	}
	template <typename T = void> T HideMissionStart() {
		return ((T (*)(CityGUIDialogs*))(Il2CppBase() + 0x2A04B8))(this);
	}
	template <typename T = void> T ShowMissionResult(void* close, void* missionInfo) {
		return ((T (*)(CityGUIDialogs*, void*, void*))(Il2CppBase() + 0x2A0510))(this, close, missionInfo);
	}
	template <typename T = void> T HideMissionResult() {
		return ((T (*)(CityGUIDialogs*))(Il2CppBase() + 0x2A0B7C))(this);
	}
	template <typename T = void> T ShowPromotion(void* close, bool newGoodsInShop) {
		return ((T (*)(CityGUIDialogs*, void*, bool))(Il2CppBase() + 0x2A0BD4))(this, close, newGoodsInShop);
	}
	template <typename T = void> T HidePromotion() {
		return ((T (*)(CityGUIDialogs*))(Il2CppBase() + 0x2A153C))(this);
	}
	template <typename T = void> T ShowSpecialReward(void* close, void* reward) {
		return ((T (*)(CityGUIDialogs*, void*, void*))(Il2CppBase() + 0x2A1594))(this, close, reward);
	}
	template <typename T = void> T HideSpecialReward() {
		return ((T (*)(CityGUIDialogs*))(Il2CppBase() + 0x2A18B0))(this);
	}
	template <typename T = void> T EnableScreens() {
		return ((T (*)(CityGUIDialogs*))(Il2CppBase() + 0x2A1908))(this);
	}
	template <typename T = void> T DisableScreens() {
		return ((T (*)(CityGUIDialogs*))(Il2CppBase() + 0x2A190C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CityGUIDialogs*))(Il2CppBase() + 0x29CC58))(this);
	}
	template <typename T = void> T DestroyInternal() {
		return ((T (*)(CityGUIDialogs*))(Il2CppBase() + 0x29CE50))(this);
	}
};
