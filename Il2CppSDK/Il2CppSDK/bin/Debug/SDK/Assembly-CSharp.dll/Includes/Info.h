#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Info
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& agentType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& sincePlayerRank() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& healthModif() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& attackModif() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<void*>*> T& prefabs() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Info*))(Il2CppBase() + 0x3122C0))(this);
	}
};
