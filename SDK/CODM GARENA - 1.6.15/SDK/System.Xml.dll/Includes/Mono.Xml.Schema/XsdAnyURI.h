#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdAnyURI
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdAnyURI"));
	}


	template <typename T = uintptr_t> T get_TokenizedType() {
		return ((T (*)(XsdAnyURI*))(Il2CppBase() + 0x4E1EC48))(this);
	}
	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdAnyURI*))(Il2CppBase() + 0x4E1EC50))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdAnyURI*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E1EC58))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdAnyURI*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E1ED10))(this, s, nameTable, nsmgr);
	}

};

}
