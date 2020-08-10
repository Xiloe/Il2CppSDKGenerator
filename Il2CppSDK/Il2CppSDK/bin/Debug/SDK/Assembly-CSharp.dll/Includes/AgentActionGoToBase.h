#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentActionGoToBase
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppVector3> T& FinalPosition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& MoveType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& Motion() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& LookTarget() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& MinDistance() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& DontChangeParameters() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& UseNavMeshAgentRotation() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	// Methods
	template <typename T = void> T _ctor(void* type) {
		return ((T (*)(AgentActionGoToBase*, void*))(Il2CppBase() + 0x19D83C))(this, type);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AgentActionGoToBase*))(Il2CppBase() + 0x19E814))(this);
	}
};
