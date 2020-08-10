#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ThreadSafeDictionary2
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& _lock() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& _valueFactory() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppDictionary<void*, void*>*> T& _dictionary() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* valueFactory) {
		return ((T (*)(ThreadSafeDictionary2*, void*))(Il2CppBase() + 0x43D7C4))(this, valueFactory);
	}
	template <typename T = void*> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(ThreadSafeDictionary2*))(Il2CppBase() + 0x43D87C))(this);
	}
	template <typename T = void*> T Get(void* key) {
		return ((T (*)(ThreadSafeDictionary2*, void*))(Il2CppBase() + 0x43D8FC))(this, key);
	}
	template <typename T = void*> T AddValue(void* key) {
		return ((T (*)(ThreadSafeDictionary2*, void*))(Il2CppBase() + 0x43D994))(this, key);
	}
	template <typename T = void> T Add(void* key, void* value) {
		return ((T (*)(ThreadSafeDictionary2*, void*, void*))(Il2CppBase() + 0x43DB74))(this, key, value);
	}
	template <typename T = bool> T ContainsKey(void* key) {
		return ((T (*)(ThreadSafeDictionary2*, void*))(Il2CppBase() + 0x43DC08))(this, key);
	}
	template <typename T = void*> T get_Keys() {
		return ((T (*)(ThreadSafeDictionary2*))(Il2CppBase() + 0x43DC40))(this);
	}
	template <typename T = bool> T Remove(void* key) {
		return ((T (*)(ThreadSafeDictionary2*, void*))(Il2CppBase() + 0x43DC78))(this, key);
	}
	template <typename T = bool> T TryGetValue(void* key, void** value) {
		return ((T (*)(ThreadSafeDictionary2*, void*, void**))(Il2CppBase() + 0x43DD0C))(this, key, value);
	}
	template <typename T = void*> T get_Values() {
		return ((T (*)(ThreadSafeDictionary2*))(Il2CppBase() + 0x43DD4C))(this);
	}
	template <typename T = void*> T get_Item(void* key) {
		return ((T (*)(ThreadSafeDictionary2*, void*))(Il2CppBase() + 0x43DD84))(this, key);
	}
	template <typename T = void> T set_Item(void* key, void* value) {
		return ((T (*)(ThreadSafeDictionary2*, void*, void*))(Il2CppBase() + 0x43DDB8))(this, key, value);
	}
	template <typename T = void> T Add_1(void* item) {
		return ((T (*)(ThreadSafeDictionary2*, void*))(Il2CppBase() + 0x43DE4C))(this, item);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ThreadSafeDictionary2*))(Il2CppBase() + 0x43DEE0))(this);
	}
	template <typename T = bool> T Contains(void* item) {
		return ((T (*)(ThreadSafeDictionary2*, void*))(Il2CppBase() + 0x43DF74))(this, item);
	}
	template <typename T = void> T CopyTo(Il2CppArray<void*>* array, int32_t arrayIndex) {
		return ((T (*)(ThreadSafeDictionary2*, Il2CppArray<void*>*, int32_t))(Il2CppBase() + 0x43E008))(this, array, arrayIndex);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(ThreadSafeDictionary2*))(Il2CppBase() + 0x43E09C))(this);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(ThreadSafeDictionary2*))(Il2CppBase() + 0x43E0D4))(this);
	}
	template <typename T = bool> T Remove_1(void* item) {
		return ((T (*)(ThreadSafeDictionary2*, void*))(Il2CppBase() + 0x43E168))(this, item);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(ThreadSafeDictionary2*))(Il2CppBase() + 0x43E1FC))(this);
	}
};
