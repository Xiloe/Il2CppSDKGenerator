#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdIDRefs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdIDRefs"));
	}


	template <typename T = uintptr_t> T get_TokenizedType() {
		return ((T (*)(XsdIDRefs*))(Il2CppBase() + 0x4E259DC))(this);
	}
	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdIDRefs*))(Il2CppBase() + 0x4E259E4))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* value, uintptr_t nt, uintptr_t nsmgr) {
		return ((T (*)(XsdIDRefs*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E259EC))(this, value, nt, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdIDRefs*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E25AF8))(this, s, nameTable, nsmgr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetValidatedArray(Il2CppString* value, uintptr_t nt) {
		return ((T (*)(XsdIDRefs*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4E259F0))(this, value, nt);
	}

};

}
