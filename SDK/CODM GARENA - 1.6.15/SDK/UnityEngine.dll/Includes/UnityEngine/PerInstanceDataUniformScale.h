#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class PerInstanceDataUniformScale
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "PerInstanceDataUniformScale"));
	}

	template <typename T = Il2CppVector3> T& LocalPosition() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& LocalEulerAngles() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& LocalScale() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
