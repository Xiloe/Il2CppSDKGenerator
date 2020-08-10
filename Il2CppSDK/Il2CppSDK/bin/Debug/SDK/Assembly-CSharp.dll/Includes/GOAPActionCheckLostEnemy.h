#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionCheckLostEnemy
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78FA8);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& Target() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& CheckingFact() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& Path() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& FinalPos() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& EndOfAction() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPActionCheckLostEnemy*, void*))(Il2CppBase() + 0x33F834))(this, owner);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPActionCheckLostEnemy*))(Il2CppBase() + 0x33F844))(this);
	}
	template <typename T = bool> T ValidateContextPreconditions(void* current, bool planning) {
		return ((T (*)(GOAPActionCheckLostEnemy*, void*, bool))(Il2CppBase() + 0x33F928))(this, current, planning);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPActionCheckLostEnemy*))(Il2CppBase() + 0x33FBA0))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPActionCheckLostEnemy*))(Il2CppBase() + 0x33FD50))(this);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPActionCheckLostEnemy*))(Il2CppBase() + 0x33FF40))(this);
	}
	template <typename T = bool> T ValidateAction() {
		return ((T (*)(GOAPActionCheckLostEnemy*))(Il2CppBase() + 0x33FFA4))(this);
	}
};
