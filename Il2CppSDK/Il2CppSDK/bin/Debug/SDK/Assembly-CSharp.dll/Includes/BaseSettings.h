#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseSettings
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& SightRangeInCombat() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& SightFovInCombat() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& MaxRunSpeed() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& MaxWalkSpeed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& MaxCrawlSpeed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& MaxCoverSpeed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& MaxHealth() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& SpeedSmooth() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& RollDistance() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& MaxCrawlTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& ContestDelay() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(BaseSettings*))(Il2CppBase() + 0x1DB2A0))(this);
	}
};
