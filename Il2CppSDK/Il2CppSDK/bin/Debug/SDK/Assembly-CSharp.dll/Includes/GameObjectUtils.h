#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameObjectUtils
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GameObjectUtils*))(Il2CppBase() + 0x3346DC))(this);
	}
	template <typename T = void*> static T GetFirstComponentUpward(void* gameObject) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0xA08880))(0, gameObject);
	}
	template <typename T = void*> static T GetComponentWithInterface(void* gameObject) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0xA086BC))(0, gameObject);
	}
	template <typename T = void*> static T GetFirstComponentUpwardWithInterface(void* gameObject) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0xA08A0C))(0, gameObject);
	}
	template <typename T = Il2CppArray<void*>*> static T GetComponentsInChildrenWithInterface(void* gameObject, bool includeInactive) {
		return ((T (*)(void *, void*, bool))(Il2CppBase() + 0xA13ABC))(0, gameObject, includeInactive);
	}
	template <typename T = Il2CppString*> static T GetFullName(void* gameObject) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x334358))(0, gameObject);
	}
	template <typename T = Il2CppArray<void*>*> static T ToArray(Il2CppList<void*>* list) {
		return ((T (*)(void *, Il2CppList<void*>*))(Il2CppBase() + 0xA13CE8))(0, list);
	}
};
