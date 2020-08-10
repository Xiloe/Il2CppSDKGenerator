#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionKnockdown
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78FC0);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPActionKnockdown*, void*))(Il2CppBase() + 0x343B30))(this, owner);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPActionKnockdown*))(Il2CppBase() + 0x345470))(this);
	}
	template <typename T = bool> T ValidateContextPreconditions(void* current, bool planning) {
		return ((T (*)(GOAPActionKnockdown*, void*, bool))(Il2CppBase() + 0x3454C0))(this, current, planning);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPActionKnockdown*))(Il2CppBase() + 0x345588))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPActionKnockdown*))(Il2CppBase() + 0x345614))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GOAPActionKnockdown*))(Il2CppBase() + 0x345670))(this);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPActionKnockdown*))(Il2CppBase() + 0x345754))(this);
	}
	template <typename T = bool> T ValidateAction() {
		return ((T (*)(GOAPActionKnockdown*))(Il2CppBase() + 0x34578C))(this);
	}
	template <typename T = void> T SendAction() {
		return ((T (*)(GOAPActionKnockdown*))(Il2CppBase() + 0x345610))(this);
	}
	template <typename T = void> T SendActionKill() {
		return ((T (*)(GOAPActionKnockdown*))(Il2CppBase() + 0x3456F0))(this);
	}
};
