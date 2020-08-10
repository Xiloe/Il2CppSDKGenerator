#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionFallback
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78F9C);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& FinalPos() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& DangerousEnemy() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPActionFallback*, void*))(Il2CppBase() + 0x343AD0))(this, owner);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPActionFallback*))(Il2CppBase() + 0x343B80))(this);
	}
	template <typename T = void> T SetPlanWSPreconditions(void* goalState) {
		return ((T (*)(GOAPActionFallback*, void*))(Il2CppBase() + 0x343BC8))(this, goalState);
	}
	template <typename T = bool> T ValidateContextPreconditions(void* current, bool planning) {
		return ((T (*)(GOAPActionFallback*, void*, bool))(Il2CppBase() + 0x343C4C))(this, current, planning);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GOAPActionFallback*))(Il2CppBase() + 0x343E64))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPActionFallback*))(Il2CppBase() + 0x343EFC))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPActionFallback*))(Il2CppBase() + 0x3440B0))(this);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPActionFallback*))(Il2CppBase() + 0x344254))(this);
	}
	template <typename T = bool> T ValidateAction() {
		return ((T (*)(GOAPActionFallback*))(Il2CppBase() + 0x34428C))(this);
	}
};
