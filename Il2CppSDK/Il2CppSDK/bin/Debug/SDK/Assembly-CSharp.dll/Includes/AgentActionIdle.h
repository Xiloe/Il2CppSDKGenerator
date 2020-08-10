#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentActionIdle
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD786E4);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AgentActionIdle*))(Il2CppBase() + 0x19E358))(this);
	}
};
