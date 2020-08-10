#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TimeUtils
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(TimeUtils*))(Il2CppBase() + 0x26FB14))(this);
	}
	template <typename T = double> static T GetCurrentTimeInSeconds() {
		return ((T (*)(void *))(Il2CppBase() + 0x26FB1C))(0);
	}
	template <typename T = Il2CppString*> static T SecondsToString_HHMMSS(float timeSeconds) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x26FC00))(0, timeSeconds);
	}
	template <typename T = Il2CppString*> static T SecondsToString_MMSS(float timeSeconds) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x27000C))(0, timeSeconds);
	}
};
