#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionContest
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78F98);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPActionContest*, void*))(Il2CppBase() + 0x340030))(this, owner);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPActionContest*))(Il2CppBase() + 0x340040))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPActionContest*))(Il2CppBase() + 0x340130))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GOAPActionContest*))(Il2CppBase() + 0x34077C))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPActionContest*))(Il2CppBase() + 0x340820))(this);
	}
	template <typename T = void> T CreateAgentActionContest(void* enemy) {
		return ((T (*)(GOAPActionContest*, void*))(Il2CppBase() + 0x34062C))(this, enemy);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPActionContest*))(Il2CppBase() + 0x3409AC))(this);
	}
	template <typename T = bool> T ValidateAction() {
		return ((T (*)(GOAPActionContest*))(Il2CppBase() + 0x340A04))(this);
	}
	template <typename T = bool> T ValidateContextPreconditions(void* current, bool planning) {
		return ((T (*)(GOAPActionContest*, void*, bool))(Il2CppBase() + 0x340A3C))(this, current, planning);
	}
};
