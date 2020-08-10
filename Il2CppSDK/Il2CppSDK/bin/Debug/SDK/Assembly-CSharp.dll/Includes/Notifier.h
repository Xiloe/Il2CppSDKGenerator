#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Notifier
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79584);
	}
	// Fields
	template <typename T = void*> static T& m_PushNotifications() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Notifier*))(Il2CppBase() + 0x1EA3E0))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA3E8))(0);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Notifier*))(Il2CppBase() + 0x1EA3EC))(this);
	}
	template <typename T = void> T OnApplicationPause(bool paused) {
		return ((T (*)(Notifier*, bool))(Il2CppBase() + 0x1EA548))(this, paused);
	}
	template <typename T = bool> T IsInitializedAndSupported() {
		return ((T (*)(Notifier*))(Il2CppBase() + 0x1EA740))(this);
	}
	template <typename T = void> T ScheduleLocalNotifications() {
		return ((T (*)(Notifier*))(Il2CppBase() + 0x1EA674))(this);
	}
	template <typename T = void*> T TimeAtPrimeTime(int32_t dayOffset) {
		return ((T (*)(Notifier*, int32_t))(Il2CppBase() + 0x1EA8C4))(this, dayOffset);
	}
	template <typename T = void> T ScheduleLocalNotification(Il2CppString* text, void* date) {
		return ((T (*)(Notifier*, Il2CppString*, void*))(Il2CppBase() + 0x1EAA34))(this, text, date);
	}
	template <typename T = void> T ClearLocalNotifications() {
		return ((T (*)(Notifier*))(Il2CppBase() + 0x1EA570))(this);
	}
};
