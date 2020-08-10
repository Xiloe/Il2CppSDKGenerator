#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionUse
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78FB4);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPActionUse*, void*))(Il2CppBase() + 0x343B10))(this, owner);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPActionUse*))(Il2CppBase() + 0x3481D8))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPActionUse*))(Il2CppBase() + 0x34823C))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPActionUse*))(Il2CppBase() + 0x348450))(this);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPActionUse*))(Il2CppBase() + 0x348528))(this);
	}
};
