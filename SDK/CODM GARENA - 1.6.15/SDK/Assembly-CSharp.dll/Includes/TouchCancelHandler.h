#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TouchCancelHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TouchCancelHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t gesture) {
		return ((T (*)(TouchCancelHandler*, uintptr_t))(Il2CppBase() + 0x4BBB5EC))(this, gesture);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t gesture, uintptr_t callback, uintptr_t object) {
		return ((T (*)(TouchCancelHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBEE10))(this, gesture, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(TouchCancelHandler*, uintptr_t))(Il2CppBase() + 0x4BBEE3C))(this, result);
	}

};

}
