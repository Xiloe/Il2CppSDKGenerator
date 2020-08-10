#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CacheData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& GameObject() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<void*>*> T& Emitters() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& Transform() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CacheData*))(Il2CppBase() + 0x2D7418))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(CacheData*))(Il2CppBase() + 0x2D7420))(this);
	}
};
