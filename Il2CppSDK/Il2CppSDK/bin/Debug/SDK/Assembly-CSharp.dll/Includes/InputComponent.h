#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InputComponent
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79334);
	}
	// Fields
	template <typename T = int32_t> static T& MaxTouches() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<void*>*> T& TouchEvents() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<void*>*> T& Receivers() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(InputComponent*))(Il2CppBase() + 0x3C3B64))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C3C44))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(InputComponent*))(Il2CppBase() + 0x3C3CC8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(InputComponent*))(Il2CppBase() + 0x3C3D7C))(this);
	}
	template <typename T = void> T TouchBegin(void* touch) {
		return ((T (*)(InputComponent*, void*))(Il2CppBase() + 0x3C4094))(this, touch);
	}
	template <typename T = void> T TouchEnd(void* touch) {
		return ((T (*)(InputComponent*, void*))(Il2CppBase() + 0x3C44C4))(this, touch);
	}
	template <typename T = void> T TouchUpdate(void* touch) {
		return ((T (*)(InputComponent*, void*))(Il2CppBase() + 0x3C42B8))(this, touch);
	}
	template <typename T = void> T SendToReceivers(void* touch) {
		return ((T (*)(InputComponent*, void*))(Il2CppBase() + 0x3C473C))(this, touch);
	}
	template <typename T = void> T AddReceiver(void* inputReceiver) {
		return ((T (*)(InputComponent*, void*))(Il2CppBase() + 0x3C48D0))(this, inputReceiver);
	}
};
