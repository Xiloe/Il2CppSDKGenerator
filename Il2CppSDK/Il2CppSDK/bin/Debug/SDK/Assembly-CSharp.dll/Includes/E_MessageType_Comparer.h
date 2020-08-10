#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EMessageTypeComparer
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EMessageTypeComparer*))(Il2CppBase() + 0x3A2F70))(this);
	}
	template <typename T = bool> T Equals(void* x, void* y) {
		return ((T (*)(EMessageTypeComparer*, void*, void*))(Il2CppBase() + 0x3A2F78))(this, x, y);
	}
	template <typename T = int32_t> T GetHashCode(void* x) {
		return ((T (*)(EMessageTypeComparer*, void*))(Il2CppBase() + 0x3A2F88))(this, x);
	}
};
