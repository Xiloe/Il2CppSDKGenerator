#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Events {

class UnityAction1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Events", "UnityAction`1"));
	}


	template <typename T = void> T Invoke(uintptr_t arg0) {
		return ((T (*)(UnityAction1*, uintptr_t))(Il2CppBase() + 0x511A518))(this, arg0);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t arg0, uintptr_t callback, uintptr_t object) {
		return ((T (*)(UnityAction1*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x511A5B0))(this, arg0, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(UnityAction1*, uintptr_t))(Il2CppBase() + 0x511A5DC))(this, result);
	}

};

}
