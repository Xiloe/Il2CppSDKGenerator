#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NESUtils
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7957C);
	}
	// Fields
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void*> static T get__commonBindingFlags() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E7B54))(0);
	}
	template <typename T = bool> static T IsWorkAroundComponent(void* inComponent) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E7B5C))(0, inComponent);
	}
	template <typename T = bool> static T IsNESSupportedParamType(void* inType) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E7C14))(0, inType);
	}
	template <typename T = bool> static T HasEvents(void* inObject) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E7C20))(0, inObject);
	}
	template <typename T = bool> static T HasEvents_1(void* inComponent) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E7D0C))(0, inComponent);
	}
	template <typename T = Il2CppArray<void*>*> static T GetEvents(void* inComponent) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E7E38))(0, inComponent);
	}
	template <typename T = bool> static T HasEvent(void* inComponent, Il2CppString* inEvent) {
		return ((T (*)(void *, void*, Il2CppString*))(Il2CppBase() + 0x1E80A0))(0, inComponent, inEvent);
	}
	template <typename T = Il2CppList<void*>*> static T GetGameLogicEventComponents(void* inGameObject) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E8160))(0, inGameObject);
	}
	template <typename T = bool> static T HasActions(void* inObject) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E82B4))(0, inObject);
	}
	template <typename T = bool> static T HasActions_1(void* inObject, bool inAcceptNESWorkAround) {
		return ((T (*)(void *, void*, bool))(Il2CppBase() + 0x1E82BC))(0, inObject, inAcceptNESWorkAround);
	}
	template <typename T = bool> static T HasActions_2(void* inComponent) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E8438))(0, inComponent);
	}
	template <typename T = Il2CppArray<void*>*> static T GetActions(void* inComponent) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E85FC))(0, inComponent);
	}
	template <typename T = bool> static T HasAction(void* inComponent, Il2CppString* inAction) {
		return ((T (*)(void *, void*, Il2CppString*))(Il2CppBase() + 0x1E88A0))(0, inComponent, inAction);
	}
	template <typename T = Il2CppArray<void*>*> static T GetActionNames(void* inComponent) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E8960))(0, inComponent);
	}
	template <typename T = Il2CppList<void*>*> static T GetGameLogicActionComponents(void* inGameObject) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E8CA4))(0, inGameObject);
	}
	template <typename T = Il2CppList<void*>*> static T GetGameLogicActionComponents_1(void* inGameObject, bool inAcceptNESWorkAround) {
		return ((T (*)(void *, void*, bool))(Il2CppBase() + 0x1E8CAC))(0, inGameObject, inAcceptNESWorkAround);
	}
	template <typename T = bool> static T GetAction1stParameterInfo(void* inComponent, Il2CppString* inActionName, void** out1stParamType, Il2CppArray<void*>** outAvailibleNames) {
		return ((T (*)(void *, void*, Il2CppString*, void**, Il2CppArray<void*>**))(Il2CppBase() + 0x1E8E24))(0, inComponent, inActionName, out1stParamType, outAvailibleNames);
	}
	template <typename T = Il2CppArray<void*>*> static T GetDerivedClassTypes(void* inBaseType) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E91FC))(0, inBaseType);
	}
	template <typename T = Il2CppArray<void*>*> static T GetDerivedClassTypes_1(void* inBaseType, Il2CppArray<void*>* inAssemblies) {
		return ((T (*)(void *, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x1E9340))(0, inBaseType, inAssemblies);
	}
	template <typename T = Il2CppArray<void*>*> static T GetDerivedClassTypes_2(void* inBaseType, bool inAcceptAbstract) {
		return ((T (*)(void *, void*, bool))(Il2CppBase() + 0x1E9204))(0, inBaseType, inAcceptAbstract);
	}
	template <typename T = Il2CppArray<void*>*> static T GetDerivedClassTypes_3(void* inBaseType, bool inAcceptAbstract, Il2CppArray<void*>* inAssemblies) {
		return ((T (*)(void *, void*, bool, Il2CppArray<void*>*))(Il2CppBase() + 0x1E9364))(0, inBaseType, inAcceptAbstract, inAssemblies);
	}
	template <typename T = int32_t> static T GetDerivedClassTypesm__5(void* p1, void* p2) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x1E9660))(0, p1, p2);
	}
};
