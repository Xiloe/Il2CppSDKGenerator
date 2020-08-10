#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SecretHash
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SecretHash*))(Il2CppBase() + 0x22AAEC))(this);
	}
	template <typename T = int64_t> static T ShiftLeft(int64_t val, int32_t n) {
		return ((T (*)(void *, int64_t, int32_t))(Il2CppBase() + 0x22AAF4))(0, val, n);
	}
	template <typename T = int64_t> static T H(Il2CppArray<void*>* input) {
		return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x22AB24))(0, input);
	}
	template <typename T = int64_t> static T M(int64_t a, int64_t b, int64_t c) {
		return ((T (*)(void *, int64_t, int64_t, int64_t))(Il2CppBase() + 0x22AC20))(0, a, b, c);
	}
	template <typename T = int64_t> static T Hash(Il2CppArray<void*>* input) {
		return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x22AF38))(0, input);
	}
};
