#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameObjectExtension
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78788);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> static T& m_TempList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x3342A0))(0);
	}
	template <typename T = void*> static T GetComponentNoAlloc(void* inGameObject) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0xA0846C))(0, inGameObject);
	}
	template <typename T = void*> static T GetFirstComponentUpwardWithInterface(void* inGameObject) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0xA086A8))(0, inGameObject);
	}
	template <typename T = void*> static T GetFirstComponentUpward(void* inGameObject) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0xA08694))(0, inGameObject);
	}
	template <typename T = void*> static T GetComponentWithInterface(void* inGameObject) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0xA08680))(0, inGameObject);
	}
	template <typename T = Il2CppString*> static T GetFullName(void* inGameObject) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x334354))(0, inGameObject);
	}
	template <typename T = Il2CppArray<void*>*> static T GetComponentsInChildrenWithInterface(void* inGameObject) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0xA139F0))(0, inGameObject);
	}
	template <typename T = Il2CppArray<void*>*> static T GetComponentsInChildrenWithInterface_1(void* inGameObject, bool inIncludeInactive) {
		return ((T (*)(void *, void*, bool))(Il2CppBase() + 0xA13AA8))(0, inGameObject, inIncludeInactive);
	}
	template <typename T = void> static T _SetActiveRecursively(void* inGameObject, bool inActive) {
		return ((T (*)(void *, void*, bool))(Il2CppBase() + 0x314710))(0, inGameObject, inActive);
	}
	template <typename T = void> static T _SetActiveRecursively_1(void* inTransform, bool inActive) {
		return ((T (*)(void *, void*, bool))(Il2CppBase() + 0x334558))(0, inTransform, inActive);
	}
	template <typename T = void> static T SetActive(void* inGameObject, bool inActive) {
		return ((T (*)(void *, void*, bool))(Il2CppBase() + 0x33468C))(0, inGameObject, inActive);
	}
};
