#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ContestElement
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& TrueIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& Button() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& Indicator() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& SuccessIndicator() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& FailIndicator() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& Parent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& ContestState() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& TouchTimeLimit() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& TimeFromStart() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<void*>*> T& visibility() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& ShouldBePressed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& Active() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ContestElement*))(Il2CppBase() + 0x3A5D14))(this);
	}
	template <typename T = bool> T get_ShouldBePressed() {
		return ((T (*)(ContestElement*))(Il2CppBase() + 0x3A730C))(this);
	}
	template <typename T = void> T set_ShouldBePressed(bool value) {
		return ((T (*)(ContestElement*, bool))(Il2CppBase() + 0x3A70A8))(this, value);
	}
	template <typename T = float> T get_TimeLimit() {
		return ((T (*)(ContestElement*))(Il2CppBase() + 0x3A7DC4))(this);
	}
	template <typename T = bool> T get_Active() {
		return ((T (*)(ContestElement*))(Il2CppBase() + 0x3A62E8))(this);
	}
	template <typename T = void> T set_Active(bool value) {
		return ((T (*)(ContestElement*, bool))(Il2CppBase() + 0x3A70A0))(this, value);
	}
	template <typename T = void> T SaveVisibilityState() {
		return ((T (*)(ContestElement*))(Il2CppBase() + 0x3A7AE4))(this);
	}
	template <typename T = void> T RestoreVisibilityState() {
		return ((T (*)(ContestElement*))(Il2CppBase() + 0x3A7C30))(this);
	}
};
