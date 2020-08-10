#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionPlayAnim
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78FB8);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPActionPlayAnim*, void*))(Il2CppBase() + 0x343B20))(this, owner);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPActionPlayAnim*))(Il2CppBase() + 0x346D20))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPActionPlayAnim*))(Il2CppBase() + 0x346D68))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPActionPlayAnim*))(Il2CppBase() + 0x346EFC))(this);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPActionPlayAnim*))(Il2CppBase() + 0x34705C))(this);
	}
};
