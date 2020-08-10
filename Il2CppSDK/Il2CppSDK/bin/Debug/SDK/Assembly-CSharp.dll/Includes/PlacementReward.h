#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlacementReward
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& RewardType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Ammount() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	// Methods
	template <typename T = void> T _ctor(int32_t ammount, void* rewardType) {
		return ((T (*)(PlacementReward*, int32_t, void*))(Il2CppBase() + 0x19CE94))(this, ammount, rewardType);
	}
	template <typename T = void*> T get_RewardType() {
		return ((T (*)(PlacementReward*))(Il2CppBase() + 0x19CEA0))(this);
	}
	template <typename T = void> T set_RewardType(void* value) {
		return ((T (*)(PlacementReward*, void*))(Il2CppBase() + 0x19CEA8))(this, value);
	}
	template <typename T = int32_t> T get_Ammount() {
		return ((T (*)(PlacementReward*))(Il2CppBase() + 0x19CEB0))(this);
	}
	template <typename T = void> T set_Ammount(int32_t value) {
		return ((T (*)(PlacementReward*, int32_t))(Il2CppBase() + 0x19CEB8))(this, value);
	}
};
