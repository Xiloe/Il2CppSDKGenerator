#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DisableBlood
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78DC4);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> static T& Objects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(DisableBlood*))(Il2CppBase() + 0x306424))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DisableBlood*))(Il2CppBase() + 0x30642C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DisableBlood*))(Il2CppBase() + 0x306544))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(DisableBlood*))(Il2CppBase() + 0x30666C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(DisableBlood*))(Il2CppBase() + 0x3068C4))(this);
	}
	template <typename T = void> static T ApplyBloodSettings() {
		return ((T (*)(void *))(Il2CppBase() + 0x306728))(0);
	}
};
