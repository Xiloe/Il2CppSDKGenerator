#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimFSM
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppDictionary<void*, void*>*> T& AnimStates() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& NextAnimState() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& DefaultAnimState() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& AnimEngine() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& Owner() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& CurrentAnimState() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor(void* anims, void* owner) {
		return ((T (*)(AnimFSM*, void*, void*))(Il2CppBase() + 0x1AD490))(this, anims, owner);
	}
	template <typename T = void*> T get_CurrentAnimState() {
		return ((T (*)(AnimFSM*))(Il2CppBase() + 0x1ABEFC))(this);
	}
	template <typename T = void> T set_CurrentAnimState(void* value) {
		return ((T (*)(AnimFSM*, void*))(Il2CppBase() + 0x1AD550))(this, value);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(AnimFSM*))(Il2CppBase() + 0x1AD558))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(AnimFSM*))(Il2CppBase() + 0x1AD55C))(this);
	}
	template <typename T = void> T UpdateAnimStates() {
		return ((T (*)(AnimFSM*))(Il2CppBase() + 0x1ACB00))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AnimFSM*))(Il2CppBase() + 0x1AC340))(this);
	}
	template <typename T = bool> T DoAction(void* action) {
		return ((T (*)(AnimFSM*, void*))(Il2CppBase() + 0x1AD134))(this, action);
	}
	template <typename T = void> T SwitchToNewStage(void* action) {
		return ((T (*)(AnimFSM*, void*))(Il2CppBase() + 0x1AD5C0))(this, action);
	}
};
