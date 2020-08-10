#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MissionData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& mission() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& levelPreview() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& texts() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& difficulty() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MissionData*))(Il2CppBase() + 0x40B83C))(this);
	}
};
