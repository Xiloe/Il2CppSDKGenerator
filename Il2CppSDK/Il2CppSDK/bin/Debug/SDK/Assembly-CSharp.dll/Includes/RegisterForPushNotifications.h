#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RegisterForPushNotifications
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& provider() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& registrationId() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& register_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	// Methods
	template <typename T = void> T _ctor(void* inUserID, void* provider, Il2CppString* registrationId, bool register_, float inTimeOut) {
		return ((T (*)(RegisterForPushNotifications*, void*, void*, Il2CppString*, bool, float))(Il2CppBase() + 0x21BD18))(this, inUserID, provider, registrationId, register_, inTimeOut);
	}
	template <typename T = void*> T GetCloudAsyncOp() {
		return ((T (*)(RegisterForPushNotifications*))(Il2CppBase() + 0x21BD64))(this);
	}
	template <typename T = void> T OnSuccess() {
		return ((T (*)(RegisterForPushNotifications*))(Il2CppBase() + 0x21BEF0))(this);
	}
	template <typename T = void*> T get_provider() {
		return ((T (*)(RegisterForPushNotifications*))(Il2CppBase() + 0x21BED8))(this);
	}
	template <typename T = void> T set_provider(void* value) {
		return ((T (*)(RegisterForPushNotifications*, void*))(Il2CppBase() + 0x21BD4C))(this, value);
	}
	template <typename T = Il2CppString*> T get_registrationId() {
		return ((T (*)(RegisterForPushNotifications*))(Il2CppBase() + 0x21BEE0))(this);
	}
	template <typename T = void> T set_registrationId(Il2CppString* value) {
		return ((T (*)(RegisterForPushNotifications*, Il2CppString*))(Il2CppBase() + 0x21BD54))(this, value);
	}
	template <typename T = bool> T get_register() {
		return ((T (*)(RegisterForPushNotifications*))(Il2CppBase() + 0x21BEE8))(this);
	}
	template <typename T = void> T set_register(bool value) {
		return ((T (*)(RegisterForPushNotifications*, bool))(Il2CppBase() + 0x21BD5C))(this, value);
	}
};
