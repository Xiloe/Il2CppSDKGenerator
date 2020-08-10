#pragma once
#include <Il2Cpp/Il2Cpp.h>

namespace SimpleJson { 
	class SimpleJson
	{
	public: 
		static Il2CppClass *StaticClass() {
			return *(Il2CppClass **)(Il2CppBase() + 0xD77D70);
		}
		// Fields
		template <typename T = void*> static T& _currentJsonSerializerStrategy() {
			return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
		}
		template <typename T = void*> static T& _pocoJsonSerializerStrategy() {
			return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
		}
		// Methods
		template <typename T = bool> static T TryDeserializeObject(Il2CppString* json, void** obj) {
			return ((T (*)(void *, Il2CppString*, void**))(Il2CppBase() + 0x8D449C))(0, json, obj);
		}
		template <typename T = Il2CppString*> static T SerializeObject(void* json, void* jsonSerializerStrategy) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8D46B0))(0, json, jsonSerializerStrategy);
		}
		template <typename T = Il2CppString*> static T SerializeObject_1(void* json) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8CF6D4))(0, json);
		}
		template <typename T = void*> static T ParseObject(Il2CppArray<void*>* json, void* index, void* success) {
			return ((T (*)(void *, Il2CppArray<void*>*, void*, void*))(Il2CppBase() + 0x8D4D24))(0, json, index, success);
		}
		template <typename T = void*> static T ParseArray(Il2CppArray<void*>* json, void* index, void* success) {
			return ((T (*)(void *, Il2CppArray<void*>*, void*, void*))(Il2CppBase() + 0x8D5880))(0, json, index, success);
		}
		template <typename T = void*> static T ParseValue(Il2CppArray<void*>* json, void* index, void* success) {
			return ((T (*)(void *, Il2CppArray<void*>*, void*, void*))(Il2CppBase() + 0x8D4504))(0, json, index, success);
		}
		template <typename T = Il2CppString*> static T ParseString(Il2CppArray<void*>* json, void* index, void* success) {
			return ((T (*)(void *, Il2CppArray<void*>*, void*, void*))(Il2CppBase() + 0x8D52B8))(0, json, index, success);
		}
		template <typename T = Il2CppString*> static T ConvertFromUtf32(int32_t utf32) {
			return ((T (*)(void *, int32_t))(Il2CppBase() + 0x8D5D78))(0, utf32);
		}
		template <typename T = void*> static T ParseNumber(Il2CppArray<void*>* json, void* index, void* success) {
			return ((T (*)(void *, Il2CppArray<void*>*, void*, void*))(Il2CppBase() + 0x8D59E0))(0, json, index, success);
		}
		template <typename T = int32_t> static T GetLastIndexOfNumber(Il2CppArray<void*>* json, int32_t index) {
			return ((T (*)(void *, Il2CppArray<void*>*, int32_t))(Il2CppBase() + 0x8D5F44))(0, json, index);
		}
		template <typename T = void> static T EatWhitespace(Il2CppArray<void*>* json, void* index) {
			return ((T (*)(void *, Il2CppArray<void*>*, void*))(Il2CppBase() + 0x8D5C94))(0, json, index);
		}
		template <typename T = int32_t> static T LookAhead(Il2CppArray<void*>* json, int32_t index) {
			return ((T (*)(void *, Il2CppArray<void*>*, int32_t))(Il2CppBase() + 0x8D5298))(0, json, index);
		}
		template <typename T = int32_t> static T NextToken(Il2CppArray<void*>* json, void* index) {
			return ((T (*)(void *, Il2CppArray<void*>*, void*))(Il2CppBase() + 0x8D4F40))(0, json, index);
		}
		template <typename T = bool> static T SerializeValue(void* jsonSerializerStrategy, void* value, void* builder) {
			return ((T (*)(void *, void*, void*, void*))(Il2CppBase() + 0x8D4790))(0, jsonSerializerStrategy, value, builder);
		}
		template <typename T = bool> static T SerializeObject_2(void* jsonSerializerStrategy, void* keys, void* values, void* builder) {
			return ((T (*)(void *, void*, void*, void*, void*))(Il2CppBase() + 0x8D62B4))(0, jsonSerializerStrategy, keys, values, builder);
		}
		template <typename T = bool> static T SerializeArray(void* jsonSerializerStrategy, void* anArray, void* builder) {
			return ((T (*)(void *, void*, void*, void*))(Il2CppBase() + 0x8D6820))(0, jsonSerializerStrategy, anArray, builder);
		}
		template <typename T = bool> static T SerializeString(Il2CppString* aString, void* builder) {
			return ((T (*)(void *, Il2CppString*, void*))(Il2CppBase() + 0x8D6024))(0, aString, builder);
		}
		template <typename T = bool> static T SerializeNumber(void* number, void* builder) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8D6DA0))(0, number, builder);
		}
		template <typename T = bool> static T IsNumeric(void* value) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8D6C1C))(0, value);
		}
		template <typename T = void*> static T get_CurrentJsonSerializerStrategy() {
			return ((T (*)(void *))(Il2CppBase() + 0x8D4C7C))(0);
		}
		template <typename T = void*> static T get_PocoJsonSerializerStrategy() {
			return ((T (*)(void *))(Il2CppBase() + 0x8D7280))(0);
		}
	};
}
