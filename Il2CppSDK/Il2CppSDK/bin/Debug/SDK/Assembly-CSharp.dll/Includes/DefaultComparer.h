#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DefaultComparer
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(DefaultComparer*))(Il2CppBase() + 0x3DCA70))(this);
	}
	template <typename T = int32_t> T Compare(void* x, void* y) {
		return ((T (*)(DefaultComparer*, void*, void*))(Il2CppBase() + 0x3DE5A4))(this, x, y);
	}
};
