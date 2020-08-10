#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ESensorType
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78D08);
	}
	// Fields
	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
};
