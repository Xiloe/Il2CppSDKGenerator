#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimStateUseItem
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78840);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& EndOfStateTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& ThrowTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& AnimName() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& Hand() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& State() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor(void* anims, void* owner) {
		return ((T (*)(AnimStateUseItem*, void*, void*))(Il2CppBase() + 0x1CDF14))(this, anims, owner);
	}
	template <typename T = void> T OnActivate(void* action) {
		return ((T (*)(AnimStateUseItem*, void*))(Il2CppBase() + 0x1CDF1C))(this, action);
	}
	template <typename T = void> T OnDeactivate() {
		return ((T (*)(AnimStateUseItem*))(Il2CppBase() + 0x1CE014))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AnimStateUseItem*))(Il2CppBase() + 0x1CE094))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AnimStateUseItem*))(Il2CppBase() + 0x1CE130))(this);
	}
	template <typename T = bool> T HandleNewAction(void* action) {
		return ((T (*)(AnimStateUseItem*, void*))(Il2CppBase() + 0x1CEC18))(this, action);
	}
	template <typename T = void> T Initialize(void* action) {
		return ((T (*)(AnimStateUseItem*, void*))(Il2CppBase() + 0x1CECE4))(this, action);
	}
	template <typename T = void> T InitDisarm() {
		return ((T (*)(AnimStateUseItem*))(Il2CppBase() + 0x1CEDB8))(this);
	}
	template <typename T = void> T InitUse() {
		return ((T (*)(AnimStateUseItem*))(Il2CppBase() + 0x1CE608))(this);
	}
	template <typename T = void> T InitArm() {
		return ((T (*)(AnimStateUseItem*))(Il2CppBase() + 0x1CE994))(this);
	}
};
