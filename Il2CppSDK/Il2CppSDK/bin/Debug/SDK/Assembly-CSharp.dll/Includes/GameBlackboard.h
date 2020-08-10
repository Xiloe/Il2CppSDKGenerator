#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameBlackboard
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78EE4);
	}
	// Fields
	template <typename T = void*> T& _GameEvents() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GameBlackboard*))(Il2CppBase() + 0x327F98))(this);
	}
	template <typename T = void*> T get_GameEvents() {
		return ((T (*)(GameBlackboard*))(Il2CppBase() + 0x313354))(this);
	}
	template <typename T = int32_t> T get_NumberOfGameEvents() {
		return ((T (*)(GameBlackboard*))(Il2CppBase() + 0x328144))(this);
	}
	template <typename T = void*> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x3132D4))(0);
	}
	template <typename T = void> static T set_Instance(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x326DD4))(0, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GameBlackboard*))(Il2CppBase() + 0x328204))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GameBlackboard*))(Il2CppBase() + 0x3284C8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GameBlackboard*))(Il2CppBase() + 0x3284CC))(this);
	}
	template <typename T = void> T Save_Save() {
		return ((T (*)(GameBlackboard*))(Il2CppBase() + 0x3284D0))(this);
	}
	template <typename T = void> T Save_Load() {
		return ((T (*)(GameBlackboard*))(Il2CppBase() + 0x328710))(this);
	}
	template <typename T = void> T Save_Clear() {
		return ((T (*)(GameBlackboard*))(Il2CppBase() + 0x32895C))(this);
	}
};
