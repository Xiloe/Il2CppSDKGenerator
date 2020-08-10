#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GoapSettings
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& DodgeRelevancy() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& MoveRelevancy() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& GoToRelevancy() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& AdvanceRelevancy() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& AdvanceToEnemyCoverRelevancy() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& FallbackRelevancy() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& RunAwayRelevancy() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& KeepCombatRangeRelevancy() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& KeepCombatRangeTargetCoveredRelevancy() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& HideInCoverRelevancy() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& LookAtTargetRelevancy() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& CheckEventRelevancy() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& KillTargetRelevancy() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& SuppressiveFireRelevancy() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& PlayAnimRelevancy() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& UseWorlObjectRelevancy() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& IdleActionRelevancy() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& SuppressedRelevancy() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& CoverRelevancy() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& ReloadRelevancy() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& TeleportRelevancy() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& WeaponChangeRelevancy() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& CriticalInjuryRelevancy() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& CheckBaitRelevancy() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& DestroyObjectRelevancy() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& ContestRelevancy() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& DodgeDelay() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& MoveDelay() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& GoToDelay() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& AdvanceDelay() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& AdvanceToEnemyCoverDelay() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& FallbackDelay() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& RunAwayDelay() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& KeepCombatRangeDelay() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& KeepCombatRangeTargetCoveredDelay() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& HideInCoverDelay() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& HideInCoverRelevancyDelay() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& LookAtTargetDelay() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& CheckEventDelay() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& KillTargetDelay() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& SuppressiveFireDelay() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& CriticalInjuryDelay() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& UseWorlObjectDelay() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& IdleActionDelay() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& SuppressedDelay() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& CoverDelay() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& ReloadDelay() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& TeleportDelay() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& WeaponChangeDelay() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GoapSettings*))(Il2CppBase() + 0x1DB150))(this);
	}
};
