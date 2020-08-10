#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AwardMoney
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& m_MoneyRangeMin() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& m_MoneyRangeMax() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AwardMoney*))(Il2CppBase() + 0x1D5BA4))(this);
	}
	template <typename T = void> T OnPickedUp() {
		return ((T (*)(AwardMoney*))(Il2CppBase() + 0x1D5BC4))(this);
	}
};
