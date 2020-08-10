#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EAgentTypeComparer
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD787CC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EAgentTypeComparer*))(Il2CppBase() + 0x30D6F0))(this);
	}
	template <typename T = bool> T Equals(void* x, void* y) {
		return ((T (*)(EAgentTypeComparer*, void*, void*))(Il2CppBase() + 0x30D6F8))(this, x, y);
	}
	template <typename T = int32_t> T GetHashCode(void* x) {
		return ((T (*)(EAgentTypeComparer*, void*))(Il2CppBase() + 0x30D708))(this, x);
	}
};
