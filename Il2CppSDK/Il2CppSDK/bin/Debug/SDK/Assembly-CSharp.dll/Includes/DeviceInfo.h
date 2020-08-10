#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DeviceInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD787E0);
	}
	// Fields
	template <typename T = void*> static T& m_CurrentGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& m_DetectedGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& m_IsTVDeviceWithAndroidOS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	// Methods
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x304DB4))(0);
	}
	template <typename T = void*> static T get_PerformanceGrade() {
		return ((T (*)(void *))(Il2CppBase() + 0x304E44))(0);
	}
	template <typename T = void*> static T get_DetectedPerformanceGrade() {
		return ((T (*)(void *))(Il2CppBase() + 0x304EF4))(0);
	}
	template <typename T = void> static T Initialize(void* suggestion) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3050BC))(0, suggestion);
	}
	template <typename T = void> static T ApplyPerformanceSettings() {
		return ((T (*)(void *))(Il2CppBase() + 0x305438))(0);
	}
	template <typename T = void*> static T GetDetectedGrade() {
		return ((T (*)(void *))(Il2CppBase() + 0x304F8C))(0);
	}
	template <typename T = void*> static T DetectectPerformanceGrade() {
		return ((T (*)(void *))(Il2CppBase() + 0x3054EC))(0);
	}
	template <typename T = void> static T SetPerformanceGrade(void* grade) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x305194))(0, grade);
	}
	template <typename T = bool> static T IsTVDeviceWithAndroidOS() {
		return ((T (*)(void *))(Il2CppBase() + 0x305564))(0);
	}
};
