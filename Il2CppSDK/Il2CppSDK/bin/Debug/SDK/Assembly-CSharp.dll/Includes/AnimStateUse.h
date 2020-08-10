#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimStateUse
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78828);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& InterObj() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppQuaternion> T& FinalRotation() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppQuaternion> T& StartRotation() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& StartPosition() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& FinalPosition() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& MoveTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& CurrentMoveTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& PositionOK() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& State() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	// Methods
	template <typename T = void> T _ctor(void* anims, void* owner) {
		return ((T (*)(AnimStateUse*, void*, void*))(Il2CppBase() + 0x1CD384))(this, anims, owner);
	}
	template <typename T = void> T OnActivate(void* action) {
		return ((T (*)(AnimStateUse*, void*))(Il2CppBase() + 0x1CD38C))(this, action);
	}
	template <typename T = void> T OnDeactivate() {
		return ((T (*)(AnimStateUse*))(Il2CppBase() + 0x1CD484))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AnimStateUse*))(Il2CppBase() + 0x1CD4FC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AnimStateUse*))(Il2CppBase() + 0x1CD540))(this);
	}
	template <typename T = void> T Release() {
		return ((T (*)(AnimStateUse*))(Il2CppBase() + 0x1CD9C0))(this);
	}
	template <typename T = bool> T HandleNewAction(void* action) {
		return ((T (*)(AnimStateUse*, void*))(Il2CppBase() + 0x1CDA00))(this, action);
	}
	template <typename T = void> T PlayAnim() {
		return ((T (*)(AnimStateUse*))(Il2CppBase() + 0x1CD858))(this);
	}
	template <typename T = void> T Initialize(void* action) {
		return ((T (*)(AnimStateUse*, void*))(Il2CppBase() + 0x1CDACC))(this, action);
	}
};
