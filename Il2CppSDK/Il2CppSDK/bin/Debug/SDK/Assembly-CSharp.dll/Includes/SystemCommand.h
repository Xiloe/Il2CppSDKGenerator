#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SystemCommand
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& m_TargetSystem() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SystemCommand*))(Il2CppBase() + 0x2C49F4))(this);
	}
	template <typename T = Il2CppString*> T get_msgType() {
		return ((T (*)(SystemCommand*))(Il2CppBase() + 0x2C49FC))(this);
	}
	template <typename T = bool> T get_isSpecialMessage() {
		return ((T (*)(SystemCommand*))(Il2CppBase() + 0x2C4A6C))(this);
	}
};
