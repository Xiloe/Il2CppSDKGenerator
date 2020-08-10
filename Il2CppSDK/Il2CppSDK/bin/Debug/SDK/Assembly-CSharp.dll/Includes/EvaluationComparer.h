#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EvaluationComparer
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EvaluationComparer*))(Il2CppBase() + 0x24E84C))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x24E854))(0);
	}
	template <typename T = int32_t> T Compare(void* x, void* y) {
		return ((T (*)(EvaluationComparer*, void*, void*))(Il2CppBase() + 0x24E8E8))(this, x, y);
	}
};
