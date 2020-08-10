#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionShielderCritInjury
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPActionShielderCritInjury*, void*))(Il2CppBase() + 0x34708C))(this, owner);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPActionShielderCritInjury*))(Il2CppBase() + 0x34709C))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPActionShielderCritInjury*))(Il2CppBase() + 0x3470E4))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPActionShielderCritInjury*))(Il2CppBase() + 0x34721C))(this);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPActionShielderCritInjury*))(Il2CppBase() + 0x34737C))(this);
	}
};
