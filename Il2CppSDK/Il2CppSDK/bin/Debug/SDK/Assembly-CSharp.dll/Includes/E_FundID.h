#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EFundID
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7971C);
	}
	// Fields
	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
};
