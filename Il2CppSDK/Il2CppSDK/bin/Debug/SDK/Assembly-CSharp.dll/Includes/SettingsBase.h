#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SettingsBase
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = bool> T& DISABLED() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& GUID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SettingsBase*))(Il2CppBase() + 0x233174))(this);
	}
	template <typename T = Il2CppString*> T GetSettingsClass() {
		return ((T (*)(SettingsBase*))(Il2CppBase() + 0x233184))(this);
	}
	template <typename T = Il2CppString*> T GetIdAsStr() {
		return ((T (*)(SettingsBase*))(Il2CppBase() + 0x233234))(this);
	}
	template <typename T = int32_t> T CalcGUIDFromID() {
		return ((T (*)(SettingsBase*))(Il2CppBase() + 0x2332E4))(this);
	}
};
