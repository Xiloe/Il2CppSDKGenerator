#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GpadConfig
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& idName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<void*>*> T& defaults() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	// Methods
	template <typename T = void> T _ctor(Il2CppString* _idName, Il2CppArray<void*>* _defaults) {
		return ((T (*)(GpadConfig*, Il2CppString*, Il2CppArray<void*>*))(Il2CppBase() + 0x2EF4B0))(this, _idName, _defaults);
	}
};
