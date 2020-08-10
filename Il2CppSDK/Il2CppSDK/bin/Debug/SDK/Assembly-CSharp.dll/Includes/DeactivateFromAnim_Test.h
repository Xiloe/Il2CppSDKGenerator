#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DeactivateFromAnimTest
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(DeactivateFromAnimTest*))(Il2CppBase() + 0x2F6664))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DeactivateFromAnimTest*))(Il2CppBase() + 0x2F666C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DeactivateFromAnimTest*))(Il2CppBase() + 0x2F6670))(this);
	}
	template <typename T = void> T OnBecameInvisible() {
		return ((T (*)(DeactivateFromAnimTest*))(Il2CppBase() + 0x2F6674))(this);
	}
	template <typename T = void> T OnBecameVisible() {
		return ((T (*)(DeactivateFromAnimTest*))(Il2CppBase() + 0x2F6730))(this);
	}
	template <typename T = void> T DeactivateFromAnim() {
		return ((T (*)(DeactivateFromAnimTest*))(Il2CppBase() + 0x2F67EC))(this);
	}
};
