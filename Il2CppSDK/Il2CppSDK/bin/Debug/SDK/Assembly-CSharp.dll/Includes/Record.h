#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Record
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Collider() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_HitZone() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Record*))(Il2CppBase() + 0x30A558))(this);
	}
};
