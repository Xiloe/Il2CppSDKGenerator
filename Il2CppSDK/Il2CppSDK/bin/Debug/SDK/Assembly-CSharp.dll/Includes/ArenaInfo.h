#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArenaInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& Accept() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& Caption() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& Score() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Preview() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ArenaInfo*))(Il2CppBase() + 0x29B0AC))(this);
	}
	template <typename T = void> T Init(void* parent) {
		return ((T (*)(ArenaInfo*, void*))(Il2CppBase() + 0x29B0B4))(this, parent);
	}
};
