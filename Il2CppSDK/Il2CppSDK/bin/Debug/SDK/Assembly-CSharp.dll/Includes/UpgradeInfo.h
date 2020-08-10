#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpgradeInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& MaxLevel() {
		return *(T*)((uintptr_t)this + 0x8);
	}
};
