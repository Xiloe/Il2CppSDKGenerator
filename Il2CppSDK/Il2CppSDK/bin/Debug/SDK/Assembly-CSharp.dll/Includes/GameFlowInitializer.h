#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameFlowInitializer
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& DynamicObstacles() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<void*>*> T& SpawnZones() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<void*>*> T& PickupZones() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<void*>*> T& Objects() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& FirstUpdate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GameFlowInitializer*))(Il2CppBase() + 0x32BDB4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GameFlowInitializer*))(Il2CppBase() + 0x32BDBC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GameFlowInitializer*))(Il2CppBase() + 0x32C5CC))(this);
	}
};
