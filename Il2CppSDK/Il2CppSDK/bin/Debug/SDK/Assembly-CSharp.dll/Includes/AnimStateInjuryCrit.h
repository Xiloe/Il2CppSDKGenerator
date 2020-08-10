#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimStateInjuryCrit
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& MoveTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& CurrentMoveTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& Impuls() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& EndOfStateTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	// Methods
	template <typename T = void> T _ctor(void* anims, void* owner) {
		return ((T (*)(AnimStateInjuryCrit*, void*, void*))(Il2CppBase() + 0x1C9B6C))(this, anims, owner);
	}
	template <typename T = void> T OnActivate(void* action) {
		return ((T (*)(AnimStateInjuryCrit*, void*))(Il2CppBase() + 0x1C9B74))(this, action);
	}
	template <typename T = void> T OnDeactivate() {
		return ((T (*)(AnimStateInjuryCrit*))(Il2CppBase() + 0x1C9C60))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AnimStateInjuryCrit*))(Il2CppBase() + 0x1C9CD8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AnimStateInjuryCrit*))(Il2CppBase() + 0x1C9D1C))(this);
	}
	template <typename T = bool> T HandleNewAction(void* action) {
		return ((T (*)(AnimStateInjuryCrit*, void*))(Il2CppBase() + 0x1C9D8C))(this, action);
	}
	template <typename T = void> T Initialize(void* action) {
		return ((T (*)(AnimStateInjuryCrit*, void*))(Il2CppBase() + 0x1C9EC8))(this, action);
	}
};
