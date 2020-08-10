#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetAppSettings
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7966C);
	}
	// Fields
	template <typename T = int32_t> T& AdGoldReward() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& AdCasinoReward() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& AdGoldPerDay() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& AdCasinoPerDay() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& AdsDelayMinInSeconds() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& AdsDelayMaxInSeconds() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& PromotedPlacementInterval() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& InterstitialsPerDayLimit() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& InterstitialsPlayerLevelMin() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& IronSourceVideoWeightAndroid() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& IronSourceVideoWeightIOS() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& UnityAdsVideoWeightAndroid() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& UnityAdsVideoWeightIOS() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& IronSourceOfferwallWeightAndroid() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& IronSourceOfferwallWeightIOS() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& TapjoyOfferwallWeightAndroid() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& TapjoyOfferwallWeightIOS() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	// Methods
	template <typename T = void> T _ctor(float inTimeOut) {
		return ((T (*)(GetAppSettings*, float))(Il2CppBase() + 0x3389B4))(this, inTimeOut);
	}
	template <typename T = Il2CppString*> T get_productID() {
		return ((T (*)(GetAppSettings*))(Il2CppBase() + 0x338ABC))(this);
	}
	template <typename T = int32_t> T get_AdGoldReward() {
		return ((T (*)(GetAppSettings*))(Il2CppBase() + 0x338B34))(this);
	}
	template <typename T = void> T set_AdGoldReward(int32_t value) {
		return ((T (*)(GetAppSettings*, int32_t))(Il2CppBase() + 0x338A34))(this, value);
	}
	template <typename T = int32_t> T get_AdCasinoReward() {
		return ((T (*)(GetAppSettings*))(Il2CppBase() + 0x338B3C))(this);
	}
	template <typename T = void> T set_AdCasinoReward(int32_t value) {
		return ((T (*)(GetAppSettings*, int32_t))(Il2CppBase() + 0x338A3C))(this, value);
	}
	template <typename T = int32_t> T get_AdGoldPerDay() {
		return ((T (*)(GetAppSettings*))(Il2CppBase() + 0x338B44))(this);
	}
	template <typename T = void> T set_AdGoldPerDay(int32_t value) {
		return ((T (*)(GetAppSettings*, int32_t))(Il2CppBase() + 0x338A44))(this, value);
	}
	template <typename T = int32_t> T get_AdCasinoPerDay() {
		return ((T (*)(GetAppSettings*))(Il2CppBase() + 0x338B4C))(this);
	}
	template <typename T = void> T set_AdCasinoPerDay(int32_t value) {
		return ((T (*)(GetAppSettings*, int32_t))(Il2CppBase() + 0x338A4C))(this, value);
	}
	template <typename T = int32_t> T get_AdsDelayMinInSeconds() {
		return ((T (*)(GetAppSettings*))(Il2CppBase() + 0x338B54))(this);
	}
	template <typename T = void> T set_AdsDelayMinInSeconds(int32_t value) {
		return ((T (*)(GetAppSettings*, int32_t))(Il2CppBase() + 0x338A54))(this, value);
	}
	template <typename T = int32_t> T get_AdsDelayMaxInSeconds() {
		return ((T (*)(GetAppSettings*))(Il2CppBase() + 0x338B5C))(this);
	}
	template <typename T = void> T set_AdsDelayMaxInSeconds(int32_t value) {
		return ((T (*)(GetAppSettings*, int32_t))(Il2CppBase() + 0x338A5C))(this, value);
	}
	template <typename T = int32_t> T get_PromotedPlacementInterval() {
		return ((T (*)(GetAppSettings*))(Il2CppBase() + 0x338B64))(this);
	}
	template <typename T = void> T set_PromotedPlacementInterval(int32_t value) {
		return ((T (*)(GetAppSettings*, int32_t))(Il2CppBase() + 0x338A64))(this, value);
	}
	template <typename T = int32_t> T get_InterstitialsPerDayLimit() {
		return ((T (*)(GetAppSettings*))(Il2CppBase() + 0x338B6C))(this);
	}
	template <typename T = void> T set_InterstitialsPerDayLimit(int32_t value) {
		return ((T (*)(GetAppSettings*, int32_t))(Il2CppBase() + 0x338A6C))(this, value);
	}
	template <typename T = int32_t> T get_InterstitialsPlayerLevelMin() {
		return ((T (*)(GetAppSettings*))(Il2CppBase() + 0x338B74))(this);
	}
	template <typename T = void> T set_InterstitialsPlayerLevelMin(int32_t value) {
		return ((T (*)(GetAppSettings*, int32_t))(Il2CppBase() + 0x338A74))(this, value);
	}
	template <typename T = int32_t> T get_IronSourceVideoWeightAndroid() {
		return ((T (*)(GetAppSettings*))(Il2CppBase() + 0x338B7C))(this);
	}
	template <typename T = void> T set_IronSourceVideoWeightAndroid(int32_t value) {
		return ((T (*)(GetAppSettings*, int32_t))(Il2CppBase() + 0x338A8C))(this, value);
	}
	template <typename T = int32_t> T get_IronSourceVideoWeightIOS() {
		return ((T (*)(GetAppSettings*))(Il2CppBase() + 0x338B84))(this);
	}
	template <typename T = void> T set_IronSourceVideoWeightIOS(int32_t value) {
		return ((T (*)(GetAppSettings*, int32_t))(Il2CppBase() + 0x338A94))(this, value);
	}
	template <typename T = int32_t> T get_UnityAdsVideoWeightAndroid() {
		return ((T (*)(GetAppSettings*))(Il2CppBase() + 0x338B8C))(this);
	}
	template <typename T = void> T set_UnityAdsVideoWeightAndroid(int32_t value) {
		return ((T (*)(GetAppSettings*, int32_t))(Il2CppBase() + 0x338A9C))(this, value);
	}
	template <typename T = int32_t> T get_UnityAdsVideoWeightIOS() {
		return ((T (*)(GetAppSettings*))(Il2CppBase() + 0x338B94))(this);
	}
	template <typename T = void> T set_UnityAdsVideoWeightIOS(int32_t value) {
		return ((T (*)(GetAppSettings*, int32_t))(Il2CppBase() + 0x338AA4))(this, value);
	}
	template <typename T = int32_t> T get_IronSourceOfferwallWeightAndroid() {
		return ((T (*)(GetAppSettings*))(Il2CppBase() + 0x338B9C))(this);
	}
	template <typename T = void> T set_IronSourceOfferwallWeightAndroid(int32_t value) {
		return ((T (*)(GetAppSettings*, int32_t))(Il2CppBase() + 0x338A7C))(this, value);
	}
	template <typename T = int32_t> T get_IronSourceOfferwallWeightIOS() {
		return ((T (*)(GetAppSettings*))(Il2CppBase() + 0x338BA4))(this);
	}
	template <typename T = void> T set_IronSourceOfferwallWeightIOS(int32_t value) {
		return ((T (*)(GetAppSettings*, int32_t))(Il2CppBase() + 0x338A84))(this, value);
	}
	template <typename T = int32_t> T get_TapjoyOfferwallWeightAndroid() {
		return ((T (*)(GetAppSettings*))(Il2CppBase() + 0x338BAC))(this);
	}
	template <typename T = void> T set_TapjoyOfferwallWeightAndroid(int32_t value) {
		return ((T (*)(GetAppSettings*, int32_t))(Il2CppBase() + 0x338AAC))(this, value);
	}
	template <typename T = int32_t> T get_TapjoyOfferwallWeightIOS() {
		return ((T (*)(GetAppSettings*))(Il2CppBase() + 0x338BB4))(this);
	}
	template <typename T = void> T set_TapjoyOfferwallWeightIOS(int32_t value) {
		return ((T (*)(GetAppSettings*, int32_t))(Il2CppBase() + 0x338AB4))(this, value);
	}
	template <typename T = void*> T GetCloudAsyncOp() {
		return ((T (*)(GetAppSettings*))(Il2CppBase() + 0x338BBC))(this);
	}
	template <typename T = void> T OnSuccess() {
		return ((T (*)(GetAppSettings*))(Il2CppBase() + 0x338D18))(this);
	}
};
