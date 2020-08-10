#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimStateInjury
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7882C);
	}
	// Fields
	template <typename T = float> T& MoveTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& CurrentMoveTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& PositionOK() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& Impuls() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& EndOfStateTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& PlayAnimTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	// Methods
	template <typename T = void> T _ctor(void* anims, void* owner) {
		return ((T (*)(AnimStateInjury*, void*, void*))(Il2CppBase() + 0x1C935C))(this, anims, owner);
	}
	template <typename T = void> T OnActivate(void* action) {
		return ((T (*)(AnimStateInjury*, void*))(Il2CppBase() + 0x1C9364))(this, action);
	}
	template <typename T = void> T OnDeactivate() {
		return ((T (*)(AnimStateInjury*))(Il2CppBase() + 0x1C9400))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AnimStateInjury*))(Il2CppBase() + 0x1C94B4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AnimStateInjury*))(Il2CppBase() + 0x1C94F8))(this);
	}
	template <typename T = bool> T HandleNewAction(void* action) {
		return ((T (*)(AnimStateInjury*, void*))(Il2CppBase() + 0x1C9724))(this, action);
	}
	template <typename T = void> T Initialize(void* action) {
		return ((T (*)(AnimStateInjury*, void*))(Il2CppBase() + 0x1C9850))(this, action);
	}
};
