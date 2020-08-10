#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DisplayNameAttribute
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& DisplayName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& ToolTip() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor(Il2CppString* DisplayName) {
		return ((T (*)(DisplayNameAttribute*, Il2CppString*))(Il2CppBase() + 0x3069E0))(this, DisplayName);
	}
	template <typename T = void> T _ctor_1(Il2CppString* DisplayName, Il2CppString* ToolTip) {
		return ((T (*)(DisplayNameAttribute*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x306ABC))(this, DisplayName, ToolTip);
	}
	template <typename T = Il2CppString*> T get_DisplayName() {
		return ((T (*)(DisplayNameAttribute*))(Il2CppBase() + 0x306AE4))(this);
	}
	template <typename T = void> T set_DisplayName(Il2CppString* value) {
		return ((T (*)(DisplayNameAttribute*, Il2CppString*))(Il2CppBase() + 0x306AAC))(this, value);
	}
	template <typename T = Il2CppString*> T get_ToolTip() {
		return ((T (*)(DisplayNameAttribute*))(Il2CppBase() + 0x306AEC))(this);
	}
	template <typename T = void> T set_ToolTip(Il2CppString* value) {
		return ((T (*)(DisplayNameAttribute*, Il2CppString*))(Il2CppBase() + 0x306AB4))(this, value);
	}
};
