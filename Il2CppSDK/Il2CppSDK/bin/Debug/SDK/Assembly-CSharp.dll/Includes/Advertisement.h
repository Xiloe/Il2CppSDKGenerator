#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Advertisement
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& IsAnyScreenActive() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = void*> T& LastMissionResult() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, void*>*> T& m_PlacementToReward() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& m_RewardVideoPerPlacementLimit() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& m_RewardVideosSeenTodayPerPlacement() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, void*>*> T& m_LastRewardVideoSeenPerPlacement() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = void*> T& m_PendingReward() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = void*> T& m_LastInterstitialAdShownDate() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& m_Initialized() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& m_PlayerSpentRealMoney() {
		return *(T*)((uintptr_t)this + 0xC9);
	}
	template <typename T = bool> T& m_IsTestingInterstitials() {
		return *(T*)((uintptr_t)this + 0xCA);
	}
	template <typename T = float> T& m_LastInterstitialShownTime() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& m_LastRewardVideoShownTime() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& m_AdsDelay() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& m_InterstitialsSeenToday() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& m_InterstitalsPerDayLimit() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = int32_t> T& m_InterstitalPlayerLevelMin() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& m_FirstInterstitialProbability() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = void*> T& m_HandleInterstital_Coroutine() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Advertisement*))(Il2CppBase() + 0x19806C))(this);
	}
	template <typename T = bool> T get_LastMissionSucceeded() {
		return ((T (*)(Advertisement*))(Il2CppBase() + 0x19807C))(this);
	}
	template <typename T = float> T get_GameplayTime() {
		return ((T (*)(Advertisement*))(Il2CppBase() + 0x198090))(this);
	}
	template <typename T = int32_t> T get_PlayerLevel() {
		return ((T (*)(Advertisement*))(Il2CppBase() + 0x198154))(this);
	}
	template <typename T = int32_t> T get_PlayerGold() {
		return ((T (*)(Advertisement*))(Il2CppBase() + 0x198218))(this);
	}
	template <typename T = int32_t> T get_InterstitialsSeenToday() {
		return ((T (*)(Advertisement*))(Il2CppBase() + 0x1982DC))(this);
	}
	template <typename T = void> T set_InterstitialsSeenToday(int32_t value) {
		return ((T (*)(Advertisement*, int32_t))(Il2CppBase() + 0x19840C))(this, value);
	}
	template <typename T = void> T set_LastInterstitialAdShown(float value) {
		return ((T (*)(Advertisement*, float))(Il2CppBase() + 0x1985C8))(this, value);
	}
	template <typename T = void> T set_LastRewardVideoAdShown(float value) {
		return ((T (*)(Advertisement*, float))(Il2CppBase() + 0x198734))(this, value);
	}
	template <typename T = int32_t> T get_FirstInterstitialProbability() {
		return ((T (*)(Advertisement*))(Il2CppBase() + 0x1987D4))(this);
	}
	template <typename T = void> T set_FirstInterstitialProbability(int32_t value) {
		return ((T (*)(Advertisement*, int32_t))(Il2CppBase() + 0x1987DC))(this, value);
	}
	template <typename T = void> T Init(void* appSettings, bool playerSpentRealMoney) {
		return ((T (*)(Advertisement*, void*, bool))(Il2CppBase() + 0x19887C))(this, appSettings, playerSpentRealMoney);
	}
	template <typename T = void> T CompensateReward() {
		return ((T (*)(Advertisement*))(Il2CppBase() + 0x19A044))(this);
	}
	template <typename T = bool> T CanShowRewardVideo(Il2CppString* placement) {
		return ((T (*)(Advertisement*, Il2CppString*))(Il2CppBase() + 0x19A260))(this, placement);
	}
	template <typename T = void> T TryShowInterstital_old() {
		return ((T (*)(Advertisement*))(Il2CppBase() + 0x19A590))(this);
	}
	template <typename T = void> T TryShowInterstital() {
		return ((T (*)(Advertisement*))(Il2CppBase() + 0x19A980))(this);
	}
	template <typename T = void> T OnPlayerSpentRealMoney() {
		return ((T (*)(Advertisement*))(Il2CppBase() + 0x19AB5C))(this);
	}
	template <typename T = void> T ShowRewardVideoAd(Il2CppString* placement, void* onFinish) {
		return ((T (*)(Advertisement*, Il2CppString*, void*))(Il2CppBase() + 0x19AB68))(this, placement, onFinish);
	}
	template <typename T = void> T ShowOfferWall(Il2CppString* placement, void* onFinish) {
		return ((T (*)(Advertisement*, Il2CppString*, void*))(Il2CppBase() + 0x19ACD8))(this, placement, onFinish);
	}
	template <typename T = void> T EnableAudio(bool enable, float fadeTime) {
		return ((T (*)(Advertisement*, bool, float))(Il2CppBase() + 0x19AEC4))(this, enable, fadeTime);
	}
	template <typename T = void> T BeforeInterstitialEnd(Il2CppString* placement) {
		return ((T (*)(Advertisement*, Il2CppString*))(Il2CppBase() + 0x19AEEC))(this, placement);
	}
	template <typename T = void> T BeforeRewardVideoStart(Il2CppString* placement, Il2CppString* provider, Il2CppString* additionalInfo) {
		return ((T (*)(Advertisement*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x19AF28))(this, placement, provider, additionalInfo);
	}
	template <typename T = void*> T BeforeRewardVideoEnd(Il2CppString* placement, Il2CppString* additionalInfo) {
		return ((T (*)(Advertisement*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x19AF50))(this, placement, additionalInfo);
	}
	template <typename T = void> T FinishRewardVideo(void* adResult, Il2CppString* additionalInfo) {
		return ((T (*)(Advertisement*, void*, Il2CppString*))(Il2CppBase() + 0x19A218))(this, adResult, additionalInfo);
	}
	template <typename T = void> T OnPlayerInfoChanged() {
		return ((T (*)(Advertisement*))(Il2CppBase() + 0x199F38))(this);
	}
	template <typename T = void> T RegisterTapjoy(int32_t weightAndroid, int32_t weightIOS) {
		return ((T (*)(Advertisement*, int32_t, int32_t))(Il2CppBase() + 0x19992C))(this, weightAndroid, weightIOS);
	}
	template <typename T = void> T RegisterSupersonicMediation(int32_t adWeightAndroid, int32_t adWeightIOS, int32_t offerwallWeightAndroid, int32_t offerwallWeightIOS) {
		return ((T (*)(Advertisement*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x19B57C))(this, adWeightAndroid, adWeightIOS, offerwallWeightAndroid, offerwallWeightIOS);
	}
	template <typename T = void> T RegisterUnityAds(int32_t adWeightAndroid, int32_t adWeightIOS) {
		return ((T (*)(Advertisement*, int32_t, int32_t))(Il2CppBase() + 0x199BBC))(this, adWeightAndroid, adWeightIOS);
	}
	template <typename T = void> T AddRewardVideoSeenToday(Il2CppString* placement) {
		return ((T (*)(Advertisement*, Il2CppString*))(Il2CppBase() + 0x19B1E4))(this, placement);
	}
	template <typename T = int32_t> T GetRewardVideosSeenToday(Il2CppString* placement) {
		return ((T (*)(Advertisement*, Il2CppString*))(Il2CppBase() + 0x19A3E0))(this, placement);
	}
	template <typename T = bool> T CanShowInterstitialAd(void** onlyBecauseTimeLimit) {
		return ((T (*)(Advertisement*, void**))(Il2CppBase() + 0x19A780))(this, onlyBecauseTimeLimit);
	}
	template <typename T = void*> T HandleInterstitials_Coroutine() {
		return ((T (*)(Advertisement*))(Il2CppBase() + 0x19AAB8))(this);
	}
	template <typename T = void*> T ShowInterstitial(void* adProvider, Il2CppString* placement) {
		return ((T (*)(Advertisement*, void*, Il2CppString*))(Il2CppBase() + 0x19A8C4))(this, adProvider, placement);
	}
	template <typename T = void*> T ShowOfferWallAdvertisement(void* adProvider, Il2CppString* placement, void* onFinish) {
		return ((T (*)(Advertisement*, void*, Il2CppString*, void*))(Il2CppBase() + 0x19ADFC))(this, adProvider, placement, onFinish);
	}
	template <typename T = void> T AwardUser(void* e, int32_t ammount) {
		return ((T (*)(Advertisement*, void*, int32_t))(Il2CppBase() + 0x19B014))(this, e, ammount);
	}
	template <typename T = void> T OnRewardVideoCompleted(void* sender, void* e) {
		return ((T (*)(Advertisement*, void*, void*))(Il2CppBase() + 0x19B95C))(this, sender, e);
	}
	template <typename T = void> T OnOfferwallAwarded(void* sender, void* e) {
		return ((T (*)(Advertisement*, void*, void*))(Il2CppBase() + 0x19BA7C))(this, sender, e);
	}
	template <typename T = void> T OnApplicationPause(bool paused) {
		return ((T (*)(Advertisement*, bool))(Il2CppBase() + 0x19C138))(this, paused);
	}
};
