#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentActionMove
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD786E8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AgentActionMove*))(Il2CppBase() + 0x19E378))(this);
	}
};
