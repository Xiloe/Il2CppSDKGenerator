#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OneTimeSaleOfferManager
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78AF8);
	}
	// Fields
	template <typename T = bool> T& m_Initialized() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<void*>*> T& m_Offers() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_ActiveOffer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<void*>*> T& m_UsedOffers() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_NextOfferGameTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_NextOfferGameDeaths() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(OneTimeSaleOfferManager*))(Il2CppBase() + 0x1EC370))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(OneTimeSaleOfferManager*))(Il2CppBase() + 0x1EC450))(this);
	}
	template <typename T = bool> T OneTimeSaleOfferAvailable() {
		return ((T (*)(OneTimeSaleOfferManager*))(Il2CppBase() + 0x1ED530))(this);
	}
	template <typename T = void*> T ActualOneTimeSaleOffer() {
		return ((T (*)(OneTimeSaleOfferManager*))(Il2CppBase() + 0x1ED560))(this);
	}
	template <typename T = float> T ActualOfferDiscount() {
		return ((T (*)(OneTimeSaleOfferManager*))(Il2CppBase() + 0x1ED568))(this);
	}
	template <typename T = int32_t> T ActualOfferOrigPrice() {
		return ((T (*)(OneTimeSaleOfferManager*))(Il2CppBase() + 0x1ED570))(this);
	}
	template <typename T = void> T Save(void* file) {
		return ((T (*)(OneTimeSaleOfferManager*, void*))(Il2CppBase() + 0x1ED61C))(this, file);
	}
	template <typename T = void> T Load(void* file) {
		return ((T (*)(OneTimeSaleOfferManager*, void*))(Il2CppBase() + 0x1EDB98))(this, file);
	}
	template <typename T = float> T GetActualGameTime() {
		return ((T (*)(OneTimeSaleOfferManager*))(Il2CppBase() + 0x1ECFE8))(this);
	}
	template <typename T = int32_t> T GetActualDeaths() {
		return ((T (*)(OneTimeSaleOfferManager*))(Il2CppBase() + 0x1ED180))(this);
	}
};
