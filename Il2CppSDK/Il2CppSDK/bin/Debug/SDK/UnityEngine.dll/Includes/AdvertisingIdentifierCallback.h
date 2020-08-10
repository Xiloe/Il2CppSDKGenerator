#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AdvertisingIdentifierCallback
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(AdvertisingIdentifierCallback*, void*, void*))(Il2CppBase() + 0x8EDA88))(this, object, method);
	}
	template <typename T = void> T Invoke(Il2CppString* advertisingId, bool trackingEnabled, Il2CppString* errorMsg) {
		return ((T (*)(AdvertisingIdentifierCallback*, Il2CppString*, bool, Il2CppString*))(Il2CppBase() + 0x8EDA9C))(this, advertisingId, trackingEnabled, errorMsg);
	}
	template <typename T = void*> T BeginInvoke(Il2CppString* advertisingId, bool trackingEnabled, Il2CppString* errorMsg, void* callback, void* object) {
		return ((T (*)(AdvertisingIdentifierCallback*, Il2CppString*, bool, Il2CppString*, void*, void*))(Il2CppBase() + 0x8EDBCC))(this, advertisingId, trackingEnabled, errorMsg, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(AdvertisingIdentifierCallback*, void*))(Il2CppBase() + 0x8EDC94))(this, result);
	}
};
