#pragma once
#include <Il2Cpp/Il2Cpp.h>

namespace SimpleJson { 
	class JsonObject
	{
	public: 
		static Il2CppClass *StaticClass() {
			return *(Il2CppClass **)(Il2CppBase() + 0xD77D28);
		}
		// Fields
		template <typename T = Il2CppDictionary<Il2CppString*, void*>*> T& _members() {
			return *(T*)((uintptr_t)this + 0x8);
		}
		// Methods
		template <typename T = void> T _ctor() {
			return ((T (*)(JsonObject*))(Il2CppBase() + 0x8CF6F4))(this);
		}
		template <typename T = void*> T System_Collections_IEnumerable_GetEnumerator() {
			return ((T (*)(JsonObject*))(Il2CppBase() + 0x8CF7A0))(this);
		}
		template <typename T = void> T Add(Il2CppString* key, void* value) {
			return ((T (*)(JsonObject*, Il2CppString*, void*))(Il2CppBase() + 0x8CF860))(this, key, value);
		}
		template <typename T = bool> T ContainsKey(Il2CppString* key) {
			return ((T (*)(JsonObject*, Il2CppString*))(Il2CppBase() + 0x8CF908))(this, key);
		}
		template <typename T = void*> T get_Keys() {
			return ((T (*)(JsonObject*))(Il2CppBase() + 0x8CF9A8))(this);
		}
		template <typename T = bool> T Remove(Il2CppString* key) {
			return ((T (*)(JsonObject*, Il2CppString*))(Il2CppBase() + 0x8CFA40))(this, key);
		}
		template <typename T = bool> T TryGetValue(Il2CppString* key, void** value) {
			return ((T (*)(JsonObject*, Il2CppString*, void**))(Il2CppBase() + 0x8CFAE0))(this, key, value);
		}
		template <typename T = void*> T get_Values() {
			return ((T (*)(JsonObject*))(Il2CppBase() + 0x8CFB88))(this);
		}
		template <typename T = void*> T get_Item(Il2CppString* key) {
			return ((T (*)(JsonObject*, Il2CppString*))(Il2CppBase() + 0x8CFC20))(this, key);
		}
		template <typename T = void> T set_Item(Il2CppString* key, void* value) {
			return ((T (*)(JsonObject*, Il2CppString*, void*))(Il2CppBase() + 0x8CFCC0))(this, key, value);
		}
		template <typename T = void> T Add_1(void* item) {
			return ((T (*)(JsonObject*, void*))(Il2CppBase() + 0x8CFD68))(this, item);
		}
		template <typename T = void> T Clear() {
			return ((T (*)(JsonObject*))(Il2CppBase() + 0x8CFE5C))(this);
		}
		template <typename T = bool> T Contains(void* item) {
			return ((T (*)(JsonObject*, void*))(Il2CppBase() + 0x8CFEF4))(this, item);
		}
		template <typename T = void> T CopyTo(Il2CppArray<void*>* array, int32_t arrayIndex) {
			return ((T (*)(JsonObject*, Il2CppArray<void*>*, int32_t))(Il2CppBase() + 0x8D0050))(this, array, arrayIndex);
		}
		template <typename T = int32_t> T get_Count() {
			return ((T (*)(JsonObject*))(Il2CppBase() + 0x8D03A0))(this);
		}
		template <typename T = bool> T get_IsReadOnly() {
			return ((T (*)(JsonObject*))(Il2CppBase() + 0x8D04F8))(this);
		}
		template <typename T = bool> T Remove_1(void* item) {
			return ((T (*)(JsonObject*, void*))(Il2CppBase() + 0x8D0500))(this, item);
		}
		template <typename T = void*> T GetEnumerator() {
			return ((T (*)(JsonObject*))(Il2CppBase() + 0x8D0438))(this);
		}
		template <typename T = Il2CppString*> T ToString() {
			return ((T (*)(JsonObject*))(Il2CppBase() + 0x8D05D0))(this);
		}
	};
}
