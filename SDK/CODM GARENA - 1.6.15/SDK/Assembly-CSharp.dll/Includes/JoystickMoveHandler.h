#pragma once
#include <Il2Cpp/Il2Cpp.h>

class JoystickMoveHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "JoystickMoveHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t move) {
		return ((T (*)(JoystickMoveHandler*, uintptr_t))(Il2CppBase() + 0x4BAAE68))(this, move);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t move, uintptr_t callback, uintptr_t object) {
		return ((T (*)(JoystickMoveHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BAC8AC))(this, move, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(JoystickMoveHandler*, uintptr_t))(Il2CppBase() + 0x4BAC8D8))(this, result);
	}

};

}
