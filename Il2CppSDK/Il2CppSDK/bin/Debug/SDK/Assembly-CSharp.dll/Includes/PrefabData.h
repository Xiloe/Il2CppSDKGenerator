#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrefabData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& m_Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_Count() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_Cache() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PrefabData*))(Il2CppBase() + 0x1A9E38))(this);
	}
};
