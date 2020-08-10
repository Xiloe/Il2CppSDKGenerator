#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetUserProductData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78EF0);
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
		return ((T (*)(SetUserProductData*, void*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0x233148))(this, inUserID, inDataID, inDataValue, inTimeOut);
	}
	template <typename T = Il2CppString*> T get_dataID() {
		return ((T (*)(SetUserProductData*))(Il2CppBase() + 0x233554))(this);
	}
	template <typename T = void> T set_dataID(Il2CppString* value) {
		return ((T (*)(SetUserProductData*, Il2CppString*))(Il2CppBase() + 0x233544))(this, value);
	}
	template <typename T = Il2CppString*> T get_dataValue() {
		return ((T (*)(SetUserProductData*))(Il2CppBase() + 0x23355C))(this);
	}
	template <typename T = void> T set_dataValue(Il2CppString* value) {
		return ((T (*)(SetUserProductData*, Il2CppString*))(Il2CppBase() + 0x23354C))(this, value);
	}
	template <typename T = void*> T GetCloudAsyncOp() {
		return ((T (*)(SetUserProductData*))(Il2CppBase() + 0x233564))(this);
	}
};
