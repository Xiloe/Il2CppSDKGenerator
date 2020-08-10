#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionTeleport
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78FC4);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPActionTeleport*, void*))(Il2CppBase() + 0x343B40))(this, owner);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPActionTeleport*))(Il2CppBase() + 0x347F28))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPActionTeleport*))(Il2CppBase() + 0x347F94))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPActionTeleport*))(Il2CppBase() + 0x348138))(this);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPActionTeleport*))(Il2CppBase() + 0x3481A8))(this);
	}
};
