#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.SceneManagement {

class LoadSceneMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.SceneManagement", "LoadSceneMode"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Single() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Additive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
