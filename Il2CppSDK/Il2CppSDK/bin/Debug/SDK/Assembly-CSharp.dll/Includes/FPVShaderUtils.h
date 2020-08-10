#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FPVShaderUtils
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(FPVShaderUtils*))(Il2CppBase() + 0x31A20C))(this);
	}
	template <typename T = void> static T SetFPVProjectionParams(float mainCamFOVRad, float FPVCamFOVRad, float aspectRatio, float depthOffs) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x31A214))(0, mainCamFOVRad, FPVCamFOVRad, aspectRatio, depthOffs);
	}
};
