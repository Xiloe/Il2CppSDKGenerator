#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NESActionParamInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_Value_String() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_Value_Float() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_Value_Int() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_Value_Bool() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_Value_UnityObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(NESActionParamInfo*))(Il2CppBase() + 0x40F1A0))(this);
	}
	template <typename T = void> T _ctor_1(void* inType) {
		return ((T (*)(NESActionParamInfo*, void*))(Il2CppBase() + 0x40F1A8))(this, inType);
	}
	template <typename T = void> T SetValue(void* inValue) {
		return ((T (*)(NESActionParamInfo*, void*))(Il2CppBase() + 0x40F514))(this, inValue);
	}
	template <typename T = void*> T GetValue() {
		return ((T (*)(NESActionParamInfo*))(Il2CppBase() + 0x40F838))(this);
	}
	template <typename T = void*> T GetValueType() {
		return ((T (*)(NESActionParamInfo*))(Il2CppBase() + 0x40F9DC))(this);
	}
	template <typename T = bool> static T IsAccaplableType(void* inType) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x40FC6C))(0, inType);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(NESActionParamInfo*))(Il2CppBase() + 0x40F1E8))(this);
	}
	template <typename T = void*> static T GetValueType_1(void* inValue) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x40F80C))(0, inValue);
	}
	template <typename T = void*> static T Convert(void* inType) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x40F9E4))(0, inType);
	}
	template <typename T = void*> static T Convert_1(void* inType) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x40F204))(0, inType);
	}
};
