#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StepsSettings
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& RunMinDelay() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& RunMaxDelay() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& WalkMinDelay() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& WalkMaxDelay() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& AnimMinDelay() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& AnimMaxDelay() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(StepsSettings*))(Il2CppBase() + 0x1DB3B8))(this);
	}
};
