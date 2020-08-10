#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Property
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> static T& m_DefaultName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& m_Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_InitValue() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_TargetValue() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& m_ActualValue() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Property*))(Il2CppBase() + 0x412A6C))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x412B38))(0);
	}
};
