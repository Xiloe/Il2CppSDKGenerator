#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetUserData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78D30);
	}
	// Fields
	template <typename T = Il2CppString*> T& dataID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& dataValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor(void* inUserID, Il2CppString* inDataID, Il2CppString* inDataValue, float inTimeOut) {
		return ((T (*)(SetUserData*, void*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0x233468))(this, inUserID, inDataID, inDataValue, inTimeOut);
	}
	template <typename T = Il2CppString*> T get_dataID() {
		return ((T (*)(SetUserData*))(Il2CppBase() + 0x2334A4))(this);
	}
	template <typename T = void> T set_dataID(Il2CppString* value) {
		return ((T (*)(SetUserData*, Il2CppString*))(Il2CppBase() + 0x233494))(this, value);
	}
	template <typename T = Il2CppString*> T get_dataValue() {
		return ((T (*)(SetUserData*))(Il2CppBase() + 0x2334AC))(this);
	}
	template <typename T = void> T set_dataValue(Il2CppString* value) {
		return ((T (*)(SetUserData*, Il2CppString*))(Il2CppBase() + 0x23349C))(this, value);
	}
	template <typename T = void*> T GetCloudAsyncOp() {
		return ((T (*)(SetUserData*))(Il2CppBase() + 0x2334B4))(this);
	}
};
