#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CombatSettings
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = bool> T& DontFireWhenRunning() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& RageMin() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& RageMax() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& RageModificator() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& DodgeMin() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& DodgeMax() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& DodgeModificator() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& FearMin() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& FearMax() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& FearModificator() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& RageInjuryModificator() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& DodgeInjuryModificator() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& FearInjuryModificator() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& RageAttackModificator() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& DodgeAttackModificator() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& FearAttackModificator() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& FearFriendDeathModificator() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& RageFriendDeathModificator() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& FearFriendInjuryModificator() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& RageFriendInjuryModificator() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CombatSettings*))(Il2CppBase() + 0x1DB318))(this);
	}
};
