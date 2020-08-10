#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentActionFactory
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD786DC);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> static T& m_UnusedActions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x19D92C))(0);
	}
	template <typename T = void*> static T Create(void* type) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x19DA80))(0, type);
	}
	template <typename T = void> static T Return(void* action) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x19E5AC))(0, action);
	}
	template <typename T = void> static T Clear() {
		return ((T (*)(void *))(Il2CppBase() + 0x19E6D0))(0);
	}
};
