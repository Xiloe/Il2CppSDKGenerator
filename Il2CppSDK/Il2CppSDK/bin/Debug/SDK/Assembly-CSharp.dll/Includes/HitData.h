#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HitData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppVector3> T& hitPos() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& hitObj() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& distance() {
		return *(T*)((uintptr_t)this + 0x10);
	}
};
