#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimStateContestPlayer
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7883C);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& State() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& EndOfStateTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& ContestBalance() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& animBase() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& animGood() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& animBad() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	// Methods
	template <typename T = void> T _ctor(void* anims, void* owner) {
		return ((T (*)(AnimStateContestPlayer*, void*, void*))(Il2CppBase() + 0x1B9DA0))(this, anims, owner);
	}
	template <typename T = void> T OnActivate(void* action) {
		return ((T (*)(AnimStateContestPlayer*, void*))(Il2CppBase() + 0x1B9DA8))(this, action);
	}
	template <typename T = void> T OnDeactivate() {
		return ((T (*)(AnimStateContestPlayer*))(Il2CppBase() + 0x1BA3B8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AnimStateContestPlayer*))(Il2CppBase() + 0x1BA62C))(this);
	}
	template <typename T = bool> T HandleNewAction(void* action) {
		return ((T (*)(AnimStateContestPlayer*, void*))(Il2CppBase() + 0x1BA6C0))(this, action);
	}
	template <typename T = void> T Release() {
		return ((T (*)(AnimStateContestPlayer*))(Il2CppBase() + 0x1BA82C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AnimStateContestPlayer*))(Il2CppBase() + 0x1BA874))(this);
	}
	template <typename T = void> T Initialize(void* action) {
		return ((T (*)(AnimStateContestPlayer*, void*))(Il2CppBase() + 0x1BB014))(this, action);
	}
	template <typename T = void> T TeleportEnemy(void* enemy) {
		return ((T (*)(AnimStateContestPlayer*, void*))(Il2CppBase() + 0x1BB230))(this, enemy);
	}
	template <typename T = void> T ContestStart() {
		return ((T (*)(AnimStateContestPlayer*))(Il2CppBase() + 0x1BA1FC))(this);
	}
	template <typename T = void*> T _HideWeapon(float delay) {
		return ((T (*)(AnimStateContestPlayer*, float))(Il2CppBase() + 0x1BB460))(this, delay);
	}
	template <typename T = void> T InitializeLoop() {
		return ((T (*)(AnimStateContestPlayer*))(Il2CppBase() + 0x1BA9D8))(this);
	}
	template <typename T = void> T UpdateLoop() {
		return ((T (*)(AnimStateContestPlayer*))(Il2CppBase() + 0x1BAA48))(this);
	}
	template <typename T = void> T ContestLost() {
		return ((T (*)(AnimStateContestPlayer*))(Il2CppBase() + 0x1BACE8))(this);
	}
	template <typename T = void> T ContestWon() {
		return ((T (*)(AnimStateContestPlayer*))(Il2CppBase() + 0x1BAE38))(this);
	}
	template <typename T = void> T EnableSmoothRotation(bool enable) {
		return ((T (*)(AnimStateContestPlayer*, bool))(Il2CppBase() + 0x1BA12C))(this, enable);
	}
	template <typename T = void> T StopAnims() {
		return ((T (*)(AnimStateContestPlayer*))(Il2CppBase() + 0x1BAF50))(this);
	}
};
