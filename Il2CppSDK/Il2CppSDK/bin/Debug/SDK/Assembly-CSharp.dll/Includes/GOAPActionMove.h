#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionMove
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78F80);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& FinalPos() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPActionMove*, void*))(Il2CppBase() + 0x343AA0))(this, owner);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPActionMove*))(Il2CppBase() + 0x345FF0))(this);
	}
	template <typename T = bool> T ValidateContextPreconditions(void* current, bool planning) {
		return ((T (*)(GOAPActionMove*, void*, bool))(Il2CppBase() + 0x34603C))(this, current, planning);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GOAPActionMove*))(Il2CppBase() + 0x3460B8))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPActionMove*))(Il2CppBase() + 0x3462A0))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPActionMove*))(Il2CppBase() + 0x3463D8))(this);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPActionMove*))(Il2CppBase() + 0x346538))(this);
	}
	template <typename T = bool> T ValidateAction() {
		return ((T (*)(GOAPActionMove*))(Il2CppBase() + 0x346620))(this);
	}
};
