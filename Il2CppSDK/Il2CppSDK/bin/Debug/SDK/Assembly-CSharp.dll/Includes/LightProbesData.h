#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LightProbesData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> T& Positions() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<void*>*> T& Coefficients() {
		return *(T*)((uintptr_t)this + 0x4);
	}
};
