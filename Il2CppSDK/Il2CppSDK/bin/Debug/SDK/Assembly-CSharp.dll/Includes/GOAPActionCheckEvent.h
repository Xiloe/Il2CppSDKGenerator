#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionCheckEvent
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78FA4);
	}
	// Fields
	template <typename T = void*> T& Target() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& CheckingFact() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& EndOfAction() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPActionCheckEvent*, void*))(Il2CppBase() + 0x33F064))(this, owner);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPActionCheckEvent*))(Il2CppBase() + 0x33F074))(this);
	}
	template <typename T = bool> T ValidateContextPreconditions(void* current, bool planning) {
		return ((T (*)(GOAPActionCheckEvent*, void*, bool))(Il2CppBase() + 0x33F0BC))(this, current, planning);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPActionCheckEvent*))(Il2CppBase() + 0x33F1F8))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPActionCheckEvent*))(Il2CppBase() + 0x33F340))(this);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPActionCheckEvent*))(Il2CppBase() + 0x33F424))(this);
	}
	template <typename T = bool> T ValidateAction() {
		return ((T (*)(GOAPActionCheckEvent*))(Il2CppBase() + 0x33F460))(this);
	}
	template <typename T = void> T DebugLogActivate() {
		return ((T (*)(GOAPActionCheckEvent*))(Il2CppBase() + 0x33F4B4))(this);
	}
};
