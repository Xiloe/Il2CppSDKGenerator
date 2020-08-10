#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ObjectInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& Obj() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& Enabled() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ObjectInfo*))(Il2CppBase() + 0x32CAB4))(this);
	}
};
