#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SnapShotEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "", "SnapShotEntry"));
	}

	template <typename T = uintptr_t> T& camera() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& listener() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& state() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
