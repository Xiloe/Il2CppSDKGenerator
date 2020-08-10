#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GraphicsDetailsUtl
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GraphicsDetailsUtl*))(Il2CppBase() + 0x354124))(this);
	}
	template <typename T = bool> static T IsTegra3() {
		return ((T (*)(void *))(Il2CppBase() + 0x35412C))(0);
	}
	template <typename T = void> static T AutoSetupShaderQuality() {
		return ((T (*)(void *))(Il2CppBase() + 0x354268))(0);
	}
	template <typename T = void> static T SetShaderQuality(void* quality) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3543A8))(0, quality);
	}
	template <typename T = void> static T EnableShaderKeyword(Il2CppString* keyword) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x35450C))(0, keyword);
	}
	template <typename T = void> static T DisableShaderKeyword(Il2CppString* keyword) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x354500))(0, keyword);
	}
};
