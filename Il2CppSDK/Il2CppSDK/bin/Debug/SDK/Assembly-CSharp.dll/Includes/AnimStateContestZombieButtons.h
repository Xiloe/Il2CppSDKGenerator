#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimStateContestZombieButtons
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78858);
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
	template <typename T = bool> T& NavMeshUpdatePos() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& animBase() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& animGood() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& animBad() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& SpeechLoop() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& EnemyComponent() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	// Methods
	template <typename T = void> T _ctor(void* anims, void* owner) {
		return ((T (*)(AnimStateContestZombieButtons*, void*, void*))(Il2CppBase() + 0x1BB714))(this, anims, owner);
	}
	template <typename T = void> T OnActivate(void* action) {
		return ((T (*)(AnimStateContestZombieButtons*, void*))(Il2CppBase() + 0x1BB724))(this, action);
	}
	template <typename T = void> T OnDeactivate() {
		return ((T (*)(AnimStateContestZombieButtons*))(Il2CppBase() + 0x1BBB54))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AnimStateContestZombieButtons*))(Il2CppBase() + 0x1BBCC0))(this);
	}
	template <typename T = bool> T HandleNewAction(void* action) {
		return ((T (*)(AnimStateContestZombieButtons*, void*))(Il2CppBase() + 0x1BBD04))(this, action);
	}
	template <typename T = void> T Release() {
		return ((T (*)(AnimStateContestZombieButtons*))(Il2CppBase() + 0x1BBFEC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AnimStateContestZombieButtons*))(Il2CppBase() + 0x1BC034))(this);
	}
	template <typename T = void*> T _SetFPVLayer(bool fpvOn, float delay) {
		return ((T (*)(AnimStateContestZombieButtons*, bool, float))(Il2CppBase() + 0x1BC94C))(this, fpvOn, delay);
	}
	template <typename T = void> T Initialize(void* action) {
		return ((T (*)(AnimStateContestZombieButtons*, void*))(Il2CppBase() + 0x1BCA14))(this, action);
	}
	template <typename T = void> T ContestStart() {
		return ((T (*)(AnimStateContestZombieButtons*))(Il2CppBase() + 0x1BB968))(this);
	}
	template <typename T = void> T InitializeLoop() {
		return ((T (*)(AnimStateContestZombieButtons*))(Il2CppBase() + 0x1BC1EC))(this);
	}
	template <typename T = void> T OnButtonHit(void* contestObject, void* result) {
		return ((T (*)(AnimStateContestZombieButtons*, void*, void*))(Il2CppBase() + 0x1BCF08))(this, contestObject, result);
	}
	template <typename T = void> T UpdateLoop() {
		return ((T (*)(AnimStateContestZombieButtons*))(Il2CppBase() + 0x1BC434))(this);
	}
	template <typename T = void> T ContestLost() {
		return ((T (*)(AnimStateContestZombieButtons*))(Il2CppBase() + 0x1BC6AC))(this);
	}
	template <typename T = void> T ContestWon() {
		return ((T (*)(AnimStateContestZombieButtons*))(Il2CppBase() + 0x1BC760))(this);
	}
	template <typename T = void> T Finish(bool enableCollisions, bool callRelease) {
		return ((T (*)(AnimStateContestZombieButtons*, bool, bool))(Il2CppBase() + 0x1BBE7C))(this, enableCollisions, callRelease);
	}
	template <typename T = void> T StopAnims() {
		return ((T (*)(AnimStateContestZombieButtons*))(Il2CppBase() + 0x1BD010))(this);
	}
};
