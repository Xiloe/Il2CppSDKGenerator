#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NearPositionData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppVector3> T& Position() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& Distance() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& SeeEnemy() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& DistanceToNearestEnemy() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(NearPositionData*))(Il2CppBase() + 0x1A9FAC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(NearPositionData*))(Il2CppBase() + 0x1AA1F4))(this);
	}
};
