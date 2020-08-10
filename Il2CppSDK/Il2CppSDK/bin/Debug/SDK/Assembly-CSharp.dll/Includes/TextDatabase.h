#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TextDatabase
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7988C);
	}
	// Fields
	template <typename T = Il2CppDictionary<int32_t, void*>*> T& _DataBase() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _DatabaseLangugae() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _ReloadCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> static T& s_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(TextDatabase*))(Il2CppBase() + 0x26BCE4))(this);
	}
	template <typename T = void*> static T get_instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x257A08))(0);
	}
	template <typename T = int32_t> T get_reloadCount() {
		return ((T (*)(TextDatabase*))(Il2CppBase() + 0x26BF5C))(this);
	}
	template <typename T = void*> T get_databaseLangugae() {
		return ((T (*)(TextDatabase*))(Il2CppBase() + 0x26BF64))(this);
	}
	template <typename T = bool> T Reload() {
		return ((T (*)(TextDatabase*))(Il2CppBase() + 0x26BF6C))(this);
	}
	template <typename T = bool> T Reload_1(void* inLanguage) {
		return ((T (*)(TextDatabase*, void*))(Il2CppBase() + 0x26BFA0))(this, inLanguage);
	}
	template <typename T = Il2CppString*> T get_Item(int32_t i) {
		return ((T (*)(TextDatabase*, int32_t))(Il2CppBase() + 0x257A0C))(this, i);
	}
	template <typename T = bool> T Exists(int32_t i) {
		return ((T (*)(TextDatabase*, int32_t))(Il2CppBase() + 0x26D12C))(this, i);
	}
	template <typename T = Il2CppDictionary<int32_t, void*>*> static T GetDatabase_ForInspector() {
		return ((T (*)(void *))(Il2CppBase() + 0x26D1CC))(0);
	}
	template <typename T = void*> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x26BD98))(0);
	}
	template <typename T = bool> static T GetLanguageFilePostfix(void* inLanguage, void** outlanguagePostfix) {
		return ((T (*)(void *, void*, void**))(Il2CppBase() + 0x26C4B8))(0, inLanguage, outlanguagePostfix);
	}
	template <typename T = bool> T LoadTextFile(Il2CppString* inFileName, Il2CppDictionary<int32_t, void*>* inoutNewDictionary) {
		return ((T (*)(TextDatabase*, Il2CppString*, Il2CppDictionary<int32_t, void*>*))(Il2CppBase() + 0x26C658))(this, inFileName, inoutNewDictionary);
	}
	template <typename T = bool> T ProcessLine(Il2CppString* inLine, void** outTextID, void** outText) {
		return ((T (*)(TextDatabase*, Il2CppString*, void**, void**))(Il2CppBase() + 0x26D1F0))(this, inLine, outTextID, outText);
	}
	template <typename T = Il2CppString*> T RemoveSpacesAroundNewLine(Il2CppString* inText) {
		return ((T (*)(TextDatabase*, Il2CppString*))(Il2CppBase() + 0x26D48C))(this, inText);
	}
};
