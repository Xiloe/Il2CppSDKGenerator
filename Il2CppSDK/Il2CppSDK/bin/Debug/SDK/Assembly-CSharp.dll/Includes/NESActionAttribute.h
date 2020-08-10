#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NESActionAttribute
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79574);
	}
	// Fields
	template <typename T = Il2CppString*> T& m_Argument() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_Name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(NESActionAttribute*))(Il2CppBase() + 0x40EF74))(this);
	}
	template <typename T = Il2CppString*> T get_Argument1() {
		return ((T (*)(NESActionAttribute*))(Il2CppBase() + 0x40EF7C))(this);
	}
	template <typename T = void> T set_Argument1(Il2CppString* value) {
		return ((T (*)(NESActionAttribute*, Il2CppString*))(Il2CppBase() + 0x40EF84))(this, value);
	}
	template <typename T = Il2CppString*> T get_DisplayName() {
		return ((T (*)(NESActionAttribute*))(Il2CppBase() + 0x40EF8C))(this);
	}
	template <typename T = void> T set_DisplayName(Il2CppString* value) {
		return ((T (*)(NESActionAttribute*, Il2CppString*))(Il2CppBase() + 0x40EF94))(this, value);
	}
};
