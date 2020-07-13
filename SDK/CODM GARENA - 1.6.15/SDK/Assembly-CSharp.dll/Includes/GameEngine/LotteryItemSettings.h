#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LotteryItemSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LotteryItemSettings"));
	}

	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& LotteryPercentage() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& LotteryCount() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
