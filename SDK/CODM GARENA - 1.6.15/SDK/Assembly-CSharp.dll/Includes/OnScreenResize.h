#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnScreenResize
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnScreenResize"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(OnScreenResize*))(Il2CppBase() + 0x39BABB4))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnScreenResize*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39C46B4))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnScreenResize*, uintptr_t))(Il2CppBase() + 0x39C46E0))(this, result);
	}

};

}
