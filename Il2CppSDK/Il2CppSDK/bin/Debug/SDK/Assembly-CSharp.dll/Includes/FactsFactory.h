#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FactsFactory
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD787C0);
	}
	// Fields
	template <typename T = void*> static T& m_Unused() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x318964))(0);
	}
	template <typename T = void*> static T Create(void* eventType) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x318A14))(0, eventType);
	}
	template <typename T = void> static T Return(void* f) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x318BF8))(0, f);
	}
	template <typename T = void> static T Clear() {
		return ((T (*)(void *))(Il2CppBase() + 0x318CF4))(0);
	}
};
