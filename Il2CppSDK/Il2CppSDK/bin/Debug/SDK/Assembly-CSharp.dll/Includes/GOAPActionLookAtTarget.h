#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionLookAtTarget
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78FA0);
	}
	// Fields
	template <typename T = Il2CppVector3> T& TargetDir() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& TargetPos() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& MaxActionTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPActionLookAtTarget*, void*))(Il2CppBase() + 0x343AE0))(this, owner);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPActionLookAtTarget*))(Il2CppBase() + 0x3457C4))(this);
	}
	template <typename T = bool> T ValidateContextPreconditions(void* current, bool planning) {
		return ((T (*)(GOAPActionLookAtTarget*, void*, bool))(Il2CppBase() + 0x34580C))(this, current, planning);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GOAPActionLookAtTarget*))(Il2CppBase() + 0x345D94))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPActionLookAtTarget*))(Il2CppBase() + 0x345D98))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPActionLookAtTarget*))(Il2CppBase() + 0x345E9C))(this);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPActionLookAtTarget*))(Il2CppBase() + 0x345EA8))(this);
	}
	template <typename T = bool> T ValidateAction() {
		return ((T (*)(GOAPActionLookAtTarget*))(Il2CppBase() + 0x345FA0))(this);
	}
};
