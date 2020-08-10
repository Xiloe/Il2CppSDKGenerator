#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SettingsManager2
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppDictionary<void*, void*>*> T& Objects() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SettingsManager2*))(Il2CppBase() + 0x43CE68))(this);
	}
	template <typename T = void*> T Get(void* key) {
		return ((T (*)(SettingsManager2*, void*))(Il2CppBase() + 0x43CED8))(this, key);
	}
	template <typename T = Il2CppArray<void*>*> T GetAll() {
		return ((T (*)(SettingsManager2*))(Il2CppBase() + 0x43D050))(this);
	}
	template <typename T = void> T LoadShopWidgets() {
		return ((T (*)(SettingsManager2*))(Il2CppBase() + 0x43D108))(this);
	}
	template <typename T = bool> T Init(Il2CppString* resourcePath) {
		return ((T (*)(SettingsManager2*, Il2CppString*))(Il2CppBase() + 0x43D13C))(this, resourcePath);
	}
	template <typename T = void> T InternalLoadShopWidgets() {
		return ((T (*)(SettingsManager2*))(Il2CppBase() + 0x43D474))(this);
	}
};
