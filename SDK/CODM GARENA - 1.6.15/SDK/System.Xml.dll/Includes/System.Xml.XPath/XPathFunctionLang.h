#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathFunctionLang
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathFunctionLang"));
	}

	template <typename T = uintptr_t> T& arg0() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_ReturnType() {
		return ((T (*)(XPathFunctionLang*))(Il2CppBase() + 0x4D12544))(this);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(XPathFunctionLang*))(Il2CppBase() + 0x4D1254C))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(XPathFunctionLang*, uintptr_t))(Il2CppBase() + 0x4D12580))(this, iter);
	}
	template <typename T = bool> T EvaluateBoolean(uintptr_t iter) {
		return ((T (*)(XPathFunctionLang*, uintptr_t))(Il2CppBase() + 0x4D1262C))(this, iter);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(XPathFunctionLang*))(Il2CppBase() + 0x4D128B4))(this);
	}

};

}
