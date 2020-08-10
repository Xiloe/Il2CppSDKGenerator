#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CitySiteInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Slot() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_InfoType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor(void* type) {
		return ((T (*)(CitySiteInfo*, void*))(Il2CppBase() + 0x295E9C))(this, type);
	}
	template <typename T = void> T _ctor_1() {
		return ((T (*)(CitySiteInfo*))(Il2CppBase() + 0x2BB69C))(this);
	}
	template <typename T = void*> T get_infoType() {
		return ((T (*)(CitySiteInfo*))(Il2CppBase() + 0x2BAB7C))(this);
	}
	template <typename T = void*> T get_slot() {
		return ((T (*)(CitySiteInfo*))(Il2CppBase() + 0x2B2954))(this);
	}
	template <typename T = void> T set_slot(void* value) {
		return ((T (*)(CitySiteInfo*, void*))(Il2CppBase() + 0x2BD898))(this, value);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CitySiteInfo*))(Il2CppBase() + 0x2BD8A0))(this);
	}
};
