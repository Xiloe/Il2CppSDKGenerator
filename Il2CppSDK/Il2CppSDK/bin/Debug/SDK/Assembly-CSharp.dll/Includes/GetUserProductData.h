#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetUserProductData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78EF4);
	}
	// Fields
	template <typename T = Il2CppString*> T& dataID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor(void* inUserID, Il2CppString* inDataID, float inTimeOut) {
		return ((T (*)(GetUserProductData*, void*, Il2CppString*, float))(Il2CppBase() + 0x32A080))(this, inUserID, inDataID, inTimeOut);
	}
	template <typename T = Il2CppString*> T get_dataID() {
		return ((T (*)(GetUserProductData*))(Il2CppBase() + 0x339AC0))(this);
	}
	template <typename T = void> T set_dataID(Il2CppString* value) {
		return ((T (*)(GetUserProductData*, Il2CppString*))(Il2CppBase() + 0x339AB8))(this, value);
	}
	template <typename T = void*> T GetCloudAsyncOp() {
		return ((T (*)(GetUserProductData*))(Il2CppBase() + 0x339AC8))(this);
	}
	template <typename T = void> T OnSuccess() {
		return ((T (*)(GetUserProductData*))(Il2CppBase() + 0x339B6C))(this);
	}
};
