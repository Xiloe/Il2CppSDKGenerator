#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionSuppressed
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78FD4);
	}
	// Fields
	template <typename T = float> T& TimeToEnd() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPActionSuppressed*, void*))(Il2CppBase() + 0x343B60))(this, owner);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPActionSuppressed*))(Il2CppBase() + 0x347C5C))(this);
	}
	template <typename T = void> T SetPlanWSPreconditions(void* goalState) {
		return ((T (*)(GOAPActionSuppressed*, void*))(Il2CppBase() + 0x347CA4))(this, goalState);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPActionSuppressed*))(Il2CppBase() + 0x347D28))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPActionSuppressed*))(Il2CppBase() + 0x347E98))(this);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPActionSuppressed*))(Il2CppBase() + 0x347EA0))(this);
	}
	template <typename T = bool> T ValidateAction() {
		return ((T (*)(GOAPActionSuppressed*))(Il2CppBase() + 0x347F20))(this);
	}
};
