#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentActionGoToByAnim
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD786F4);
	}
	// Fields
	template <typename T = Il2CppVector3> T& FinalPosition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& MoveType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& MinDistance() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& UseNavMeshAgentRotation() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AgentActionGoToByAnim*))(Il2CppBase() + 0x19E3D0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AgentActionGoToByAnim*))(Il2CppBase() + 0x19E83C))(this);
	}
};
