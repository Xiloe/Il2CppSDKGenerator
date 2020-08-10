#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameplayData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7878C);
	}
	// Fields
	template <typename T = void*> static T& m_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& m_PlayerLevelData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_EnemySettings() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_PlayerLevelInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_MoneyModifierByItems() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_CurrentRank() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_StrongerWave() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GameplayData*))(Il2CppBase() + 0x3346E4))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x3346FC))(0);
	}
	template <typename T = void*> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x314BC4))(0);
	}
	template <typename T = int32_t> T XpPerZombie() {
		return ((T (*)(GameplayData*))(Il2CppBase() + 0x33480C))(this);
	}
	template <typename T = int32_t> T XpCompletionBonus() {
		return ((T (*)(GameplayData*))(Il2CppBase() + 0x334A40))(this);
	}
	template <typename T = int32_t> T MoneyPerZombie() {
		return ((T (*)(GameplayData*))(Il2CppBase() + 0x334B14))(this);
	}
	template <typename T = int32_t> T MoneyCompletionBonus() {
		return ((T (*)(GameplayData*))(Il2CppBase() + 0x334D2C))(this);
	}
	template <typename T = int32_t> T MoneyPerSpecialEnemy() {
		return ((T (*)(GameplayData*))(Il2CppBase() + 0x334E14))(this);
	}
	template <typename T = int32_t> T MoneyPerHead() {
		return ((T (*)(GameplayData*))(Il2CppBase() + 0x334ED8))(this);
	}
	template <typename T = int32_t> T MoneyPerLimb() {
		return ((T (*)(GameplayData*))(Il2CppBase() + 0x334FF8))(this);
	}
	template <typename T = int32_t> T MoneyPerCarnage() {
		return ((T (*)(GameplayData*))(Il2CppBase() + 0x335118))(this);
	}
	template <typename T = int32_t> T EnemyHealth() {
		return ((T (*)(GameplayData*))(Il2CppBase() + 0x314CE8))(this);
	}
	template <typename T = int32_t> T EnemyAttack() {
		return ((T (*)(GameplayData*))(Il2CppBase() + 0x3353C8))(this);
	}
	template <typename T = void*> T get_playerLevelData() {
		return ((T (*)(GameplayData*))(Il2CppBase() + 0x3355F0))(this);
	}
	template <typename T = void*> T get_enemySettings() {
		return ((T (*)(GameplayData*))(Il2CppBase() + 0x333854))(this);
	}
	template <typename T = void> T RecomputeItemModifiers() {
		return ((T (*)(GameplayData*))(Il2CppBase() + 0x3355F8))(this);
	}
	template <typename T = void> T ResetStrongerWave() {
		return ((T (*)(GameplayData*))(Il2CppBase() + 0x33597C))(this);
	}
	template <typename T = void> T SetStrongerWave() {
		return ((T (*)(GameplayData*))(Il2CppBase() + 0x335988))(this);
	}
	template <typename T = void*> T GetPlayerInfo() {
		return ((T (*)(GameplayData*))(Il2CppBase() + 0x3348E0))(this);
	}
	template <typename T = float> T GetMoneyModifier() {
		return ((T (*)(GameplayData*))(Il2CppBase() + 0x334C00))(this);
	}
	template <typename T = float> T GetXpModifier() {
		return ((T (*)(GameplayData*))(Il2CppBase() + 0x334A38))(this);
	}
	template <typename T = float> T GetEnemyHealthModifier() {
		return ((T (*)(GameplayData*))(Il2CppBase() + 0x335238))(this);
	}
	template <typename T = float> T GetEnemyAttackModifier() {
		return ((T (*)(GameplayData*))(Il2CppBase() + 0x3354B0))(this);
	}
	template <typename T = void> static T CreateInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x334700))(0);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GameplayData*))(Il2CppBase() + 0x335998))(this);
	}
};
