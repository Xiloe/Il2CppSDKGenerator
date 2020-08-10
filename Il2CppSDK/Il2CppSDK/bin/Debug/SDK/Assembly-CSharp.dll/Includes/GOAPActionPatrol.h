#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionPatrol
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78FD0);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& CurrentPatrolPoint() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPActionPatrol*, void*))(Il2CppBase() + 0x343B50))(this, owner);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPActionPatrol*))(Il2CppBase() + 0x34679C))(this);
	}
	template <typename T = bool> T ValidateContextPreconditions(void* current, bool planning) {
		return ((T (*)(GOAPActionPatrol*, void*, bool))(Il2CppBase() + 0x3467E8))(this, current, planning);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPActionPatrol*))(Il2CppBase() + 0x3468B4))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPActionPatrol*))(Il2CppBase() + 0x346B34))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GOAPActionPatrol*))(Il2CppBase() + 0x346CA0))(this);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPActionPatrol*))(Il2CppBase() + 0x346CE0))(this);
	}
	template <typename T = bool> T ValidateAction() {
		return ((T (*)(GOAPActionPatrol*))(Il2CppBase() + 0x346CE8))(this);
	}
	template <typename T = void> T MoveToNextPatrolPoint() {
		return ((T (*)(GOAPActionPatrol*))(Il2CppBase() + 0x3468D4))(this);
	}
};
