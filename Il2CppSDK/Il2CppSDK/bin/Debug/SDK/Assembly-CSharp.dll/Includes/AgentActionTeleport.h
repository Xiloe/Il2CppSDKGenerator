#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentActionTeleport
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7873C);
	}
	// Fields
	template <typename T = Il2CppVector3> T& Destination() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppQuaternion> T& Rotation() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AgentActionTeleport*))(Il2CppBase() + 0x19E54C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AgentActionTeleport*))(Il2CppBase() + 0x19E864))(this);
	}
};
