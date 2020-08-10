#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentActioCombatMove
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD786F8);
	}
	// Fields
	template <typename T = void*> T& Target() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& DistanceToMove() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& MinDistanceToTarget() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& MoveType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& MotionType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AgentActioCombatMove*))(Il2CppBase() + 0x19D3AC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AgentActioCombatMove*))(Il2CppBase() + 0x19D3F8))(this);
	}
};
