#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CloudActionSerial
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& m_Actions() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor(void* inUserID, float inTimeOut, Il2CppArray<void*>* inActions) {
		return ((T (*)(CloudActionSerial*, void*, float, Il2CppArray<void*>*))(Il2CppBase() + 0x2C1CDC))(this, inUserID, inTimeOut, inActions);
	}
	template <typename T = void*> T PPIManager_Update() {
		return ((T (*)(CloudActionSerial*))(Il2CppBase() + 0x2C1DE4))(this);
	}
	template <typename T = void> T OnSuccess() {
		return ((T (*)(CloudActionSerial*))(Il2CppBase() + 0x2C207C))(this);
	}
	template <typename T = void> T OnFailed() {
		return ((T (*)(CloudActionSerial*))(Il2CppBase() + 0x2C2080))(this);
	}
};
