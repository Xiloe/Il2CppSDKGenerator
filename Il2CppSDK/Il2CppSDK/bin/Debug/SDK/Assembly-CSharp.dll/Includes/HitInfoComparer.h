#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HitInfoComparer
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79234);
	}
	// Fields
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(HitInfoComparer*))(Il2CppBase() + 0x39E5CC))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x39E5D4))(0);
	}
	template <typename T = int32_t> T Compare(void* a, void* b) {
		return ((T (*)(HitInfoComparer*, void*, void*))(Il2CppBase() + 0x39E668))(this, a, b);
	}
};
