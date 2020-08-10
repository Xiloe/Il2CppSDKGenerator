#pragma once
#include <Il2Cpp/Il2Cpp.h>

namespace SimpleJson { 
	class PocoJsonSerializerStrategy
	{
	public: 
		static Il2CppClass *StaticClass() {
			return *(Il2CppClass **)(Il2CppBase() + 0xD77D00);
		}
		// Fields
		template <typename T = void*> T& ConstructorCache() {
			return *(T*)((uintptr_t)this + 0x8);
		}
		template <typename T = void*> T& GetCache() {
			return *(T*)((uintptr_t)this + 0xC);
		}
		template <typename T = void*> T& SetCache() {
			return *(T*)((uintptr_t)this + 0x10);
		}
		template <typename T = Il2CppArray<void*>*> static T& EmptyTypes() {
			return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
		}
		template <typename T = Il2CppArray<void*>*> static T& ArrayConstructorParameterTypes() {
			return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
		}
		template <typename T = Il2CppArray<void*>*> static T& Iso8601Format() {
			return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
		}
		// Methods
		template <typename T = void> T _ctor() {
			return ((T (*)(PocoJsonSerializerStrategy*))(Il2CppBase() + 0x8D05F0))(this);
		}
		template <typename T = void> static T _cctor() {
			return ((T (*)(void *))(Il2CppBase() + 0x8D0818))(0);
		}
		template <typename T = Il2CppString*> T MapClrMemberNameToJsonFieldName(Il2CppString* clrPropertyName) {
			return ((T (*)(PocoJsonSerializerStrategy*, Il2CppString*))(Il2CppBase() + 0x8D0B30))(this, clrPropertyName);
		}
		template <typename T = void*> T ContructorDelegateFactory(void* key) {
			return ((T (*)(PocoJsonSerializerStrategy*, void*))(Il2CppBase() + 0x8D0B38))(this, key);
		}
		template <typename T = void*> T GetterValueFactory(void* type) {
			return ((T (*)(PocoJsonSerializerStrategy*, void*))(Il2CppBase() + 0x8D0D48))(this, type);
		}
		template <typename T = void*> T SetterValueFactory(void* type) {
			return ((T (*)(PocoJsonSerializerStrategy*, void*))(Il2CppBase() + 0x8D19E4))(this, type);
		}
		template <typename T = bool> T TrySerializeNonPrimitiveObject(void* input, void** output) {
			return ((T (*)(PocoJsonSerializerStrategy*, void*, void**))(Il2CppBase() + 0x8D26F4))(this, input, output);
		}
		template <typename T = void*> T SerializeEnum(void* p) {
			return ((T (*)(PocoJsonSerializerStrategy*, void*))(Il2CppBase() + 0x8D2784))(this, p);
		}
		template <typename T = bool> T TrySerializeKnownTypes(void* input, void** output) {
			return ((T (*)(PocoJsonSerializerStrategy*, void*, void**))(Il2CppBase() + 0x8D28A8))(this, input, output);
		}
		template <typename T = bool> T TrySerializeUnknownTypes(void* input, void** output) {
			return ((T (*)(PocoJsonSerializerStrategy*, void*, void**))(Il2CppBase() + 0x8D2D0C))(this, input, output);
		}
	};
}
