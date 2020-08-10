#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuildInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78994);
	}
	// Fields
	template <typename T = void*> T& versionInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& dateInfo() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> static T& infoPrinted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(BuildInfo*))(Il2CppBase() + 0x1E5200))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E5208))(0);
	}
	template <typename T = void*> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E520C))(0);
	}
	template <typename T = void*> T get_Version() {
		return ((T (*)(BuildInfo*))(Il2CppBase() + 0x1E52F4))(this);
	}
	template <typename T = void*> T get_Date() {
		return ((T (*)(BuildInfo*))(Il2CppBase() + 0x1E52FC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BuildInfo*))(Il2CppBase() + 0x1E5304))(this);
	}
	template <typename T = Il2CppString*> T FormatBuildInfo() {
		return ((T (*)(BuildInfo*))(Il2CppBase() + 0x1E56FC))(this);
	}
	template <typename T = Il2CppString*> T FormatSystemInfo() {
		return ((T (*)(BuildInfo*))(Il2CppBase() + 0x1E59E8))(this);
	}
	template <typename T = void> T Print() {
		return ((T (*)(BuildInfo*))(Il2CppBase() + 0x1E5418))(this);
	}
};
