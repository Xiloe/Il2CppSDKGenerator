#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VehicleFixedSpawnSpot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VehicleFixedSpawnSpot"));
	}

	template <typename T = int32_t> T& fixedVehicleId() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& recoverTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
