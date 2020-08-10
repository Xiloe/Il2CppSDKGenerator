#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDataFile
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(IDataFile*))(Il2CppBase() + 0x3C18B8))(this);
	}
	template <typename T = void> T SetInt(Il2CppString* key, int32_t value) {
		return ((T (*)(IDataFile*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = int32_t> T GetInt(Il2CppString* key, int32_t defaultValue) {
		return ((T (*)(IDataFile*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, key, defaultValue);
	}
	template <typename T = void> T SetFloat(Il2CppString* key, float value) {
		return ((T (*)(IDataFile*, Il2CppString*, float))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = float> T GetFloat(Il2CppString* key, float defaultValue) {
		return ((T (*)(IDataFile*, Il2CppString*, float))(Il2CppBase() + 0x0))(this, key, defaultValue);
	}
	template <typename T = void> T SetString(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(IDataFile*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = Il2CppString*> T GetString(Il2CppString* key, Il2CppString* defaultValue) {
		return ((T (*)(IDataFile*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, key, defaultValue);
	}
	template <typename T = bool> T KeyExists(Il2CppString* key) {
		return ((T (*)(IDataFile*, Il2CppString*))(Il2CppBase() + 0x0))(this, key);
	}
};
