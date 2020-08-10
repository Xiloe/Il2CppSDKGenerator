#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Product
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& Id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& Price() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Title() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Description() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& FormattedPrice() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Product*))(Il2CppBase() + 0x3C1868))(this);
	}
	template <typename T = Il2CppString*> T get_Id() {
		return ((T (*)(Product*))(Il2CppBase() + 0x3BE3CC))(this);
	}
	template <typename T = void> T set_Id(Il2CppString* value) {
		return ((T (*)(Product*, Il2CppString*))(Il2CppBase() + 0x3C1870))(this, value);
	}
	template <typename T = float> T get_Price() {
		return ((T (*)(Product*))(Il2CppBase() + 0x3C1878))(this);
	}
	template <typename T = void> T set_Price(float value) {
		return ((T (*)(Product*, float))(Il2CppBase() + 0x3C1880))(this, value);
	}
	template <typename T = Il2CppString*> T get_Title() {
		return ((T (*)(Product*))(Il2CppBase() + 0x3C1888))(this);
	}
	template <typename T = void> T set_Title(Il2CppString* value) {
		return ((T (*)(Product*, Il2CppString*))(Il2CppBase() + 0x3C1890))(this, value);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(Product*))(Il2CppBase() + 0x3C1898))(this);
	}
	template <typename T = void> T set_Description(Il2CppString* value) {
		return ((T (*)(Product*, Il2CppString*))(Il2CppBase() + 0x3C18A0))(this, value);
	}
	template <typename T = Il2CppString*> T get_FormattedPrice() {
		return ((T (*)(Product*))(Il2CppBase() + 0x3C18A8))(this);
	}
	template <typename T = void> T set_FormattedPrice(Il2CppString* value) {
		return ((T (*)(Product*, Il2CppString*))(Il2CppBase() + 0x3C18B0))(this, value);
	}
};
