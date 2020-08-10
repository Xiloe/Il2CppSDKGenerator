#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SParams
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& Experience() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Money() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& Gold() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_StoryId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_ChapterProgress() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_TotalMissionsPlayed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_StoryMissionsPlayed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Kills() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Deaths() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& HeadShots() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Limbs() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Carnage() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& TotalGold() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& TotalMoney() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& MissionCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& MissionSuccess() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& GameTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& Arena1Played() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& Arena1HiMoney() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& Arena1HiScore() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& Arena1Time() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& Arena2Played() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& Arena2HiMoney() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& Arena2HiScore() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& Arena2Time() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& Arena3Played() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& Arena3HiMoney() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& Arena3HiScore() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& Arena3Time() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& Arena4Played() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& Arena4HiMoney() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& Arena4HiScore() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& Arena4Time() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = void*> T& LastBonusTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& GoldForGoldMission() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& Tickets() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& ProtectObjectsTutorial() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& OpenedOfferwall() {
		return *(T*)((uintptr_t)this + 0xA1);
	}
	template <typename T = int32_t> T& TotalTapjoyOfferwallCredits() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& TotalSupersonicOfferwallCredits() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
};
