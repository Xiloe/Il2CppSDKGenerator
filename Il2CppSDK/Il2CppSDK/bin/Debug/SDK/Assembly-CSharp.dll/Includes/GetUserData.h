#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetUserData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78E94);
	}
	// Fields
	template <typename T = Il2CppString*> T& dataID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor(void* inUserID, Il2CppString* inDataID, float inTimeOut) {
		return ((T (*)(GetUserData*, void*, Il2CppString*, float))(Il2CppBase() + 0x31E2A4))(this, inUserID, inDataID, inTimeOut);
	}
	template <typename T = Il2CppString*> T get_dataID() {
		return ((T (*)(GetUserData*))(Il2CppBase() + 0x339910))(this);
	}
	template <typename T = void> T set_dataID(Il2CppString* value) {
		return ((T (*)(GetUserData*, Il2CppString*))(Il2CppBase() + 0x339908))(this, value);
	}
	template <typename T = void*> T GetCloudAsyncOp() {
		return ((T (*)(GetUserData*))(Il2CppBase() + 0x339918))(this);
	}
	template <typename T = void> T OnSuccess() {
		return ((T (*)(GetUserData*))(Il2CppBase() + 0x3399A4))(this);
	}
};
