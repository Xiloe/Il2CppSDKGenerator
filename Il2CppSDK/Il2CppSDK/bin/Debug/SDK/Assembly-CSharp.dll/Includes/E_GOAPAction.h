#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EGOAPAction
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7875C);
	}
	// Fields
	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
};
