#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrecedenceComparer
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD788DC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PrecedenceComparer*))(Il2CppBase() + 0x20A8C4))(this);
	}
	template <typename T = int32_t> T Compare(void* x, void* y) {
		return ((T (*)(PrecedenceComparer*, void*, void*))(Il2CppBase() + 0x20A8CC))(this, x, y);
	}
};
