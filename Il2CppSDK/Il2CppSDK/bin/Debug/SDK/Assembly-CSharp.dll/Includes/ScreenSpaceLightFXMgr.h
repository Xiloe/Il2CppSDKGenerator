#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScreenSpaceLightFXMgr
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ScreenSpaceLightFXMgr*))(Il2CppBase() + 0x22A8D0))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(ScreenSpaceLightFXMgr*))(Il2CppBase() + 0x22A8D8))(this);
	}
};
