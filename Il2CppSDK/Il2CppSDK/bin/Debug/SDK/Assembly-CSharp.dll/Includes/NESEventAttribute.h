#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NESEventAttribute
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79570);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> T& events() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor(Il2CppArray<void*>* inEvents) {
		return ((T (*)(NESEventAttribute*, Il2CppArray<void*>*))(Il2CppBase() + 0x4119CC))(this, inEvents);
	}
};
