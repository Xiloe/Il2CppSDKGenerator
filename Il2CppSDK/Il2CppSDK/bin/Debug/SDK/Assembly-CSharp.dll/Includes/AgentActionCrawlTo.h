#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentActionCrawlTo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD786F0);
	}
	// Fields
	template <typename T = void*> T& MotionSide() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AgentActionCrawlTo*))(Il2CppBase() + 0x19D7D4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AgentActionCrawlTo*))(Il2CppBase() + 0x19D878))(this);
	}
};
