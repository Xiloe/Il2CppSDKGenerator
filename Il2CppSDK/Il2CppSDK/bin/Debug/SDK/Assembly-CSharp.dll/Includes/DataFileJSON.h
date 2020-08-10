#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DataFileJSON
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78B0C);
	}
	// Fields
	template <typename T = Il2CppDictionary<Il2CppString*, void*>*> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor(Il2CppString* data) {
		return ((T (*)(DataFileJSON*, Il2CppString*))(Il2CppBase() + 0x2F59E0))(this, data);
	}
	template <typename T = void> T SetInt(Il2CppString* key, int32_t value) {
		return ((T (*)(DataFileJSON*, Il2CppString*, int32_t))(Il2CppBase() + 0x2F5B10))(this, key, value);
	}
	template <typename T = int32_t> T GetInt(Il2CppString* key, int32_t defaultValue) {
		return ((T (*)(DataFileJSON*, Il2CppString*, int32_t))(Il2CppBase() + 0x2F5BEC))(this, key, defaultValue);
	}
	template <typename T = void> T SetFloat(Il2CppString* key, float value) {
		return ((T (*)(DataFileJSON*, Il2CppString*, float))(Il2CppBase() + 0x2F5CEC))(this, key, value);
	}
	template <typename T = float> T GetFloat(Il2CppString* key, float defaultValue) {
		return ((T (*)(DataFileJSON*, Il2CppString*, float))(Il2CppBase() + 0x2F5DD0))(this, key, defaultValue);
	}
	template <typename T = void> T SetString(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(DataFileJSON*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2F5F14))(this, key, value);
	}
	template <typename T = Il2CppString*> T GetString(Il2CppString* key, Il2CppString* defaultValue) {
		return ((T (*)(DataFileJSON*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2F5FBC))(this, key, defaultValue);
	}
	template <typename T = bool> T KeyExists(Il2CppString* key) {
		return ((T (*)(DataFileJSON*, Il2CppString*))(Il2CppBase() + 0x2F60B4))(this, key);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(DataFileJSON*))(Il2CppBase() + 0x2F6154))(this);
	}
	template <typename T = bool> T InitFromString(Il2CppString* inJSON) {
		return ((T (*)(DataFileJSON*, Il2CppString*))(Il2CppBase() + 0x2F6200))(this, inJSON);
	}
};
