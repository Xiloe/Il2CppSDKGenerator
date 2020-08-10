#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimStateContestZombieRhythm
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
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
	template <typename T = void*> T& EnemyComponent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& RhythmDef() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& RhythmTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& CurrentBeat() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<void*>*> T& BeatSuccess() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& eye() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& BeatSuccessful() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& Playing() {
		return *(T*)((uintptr_t)this + 0x51);
	}
	template <typename T = bool> T& ButtonActive() {
		return *(T*)((uintptr_t)this + 0x52);
	}
	// Methods
	template <typename T = void> T _ctor(void* anims, void* owner) {
		return ((T (*)(AnimStateContestZombieRhythm*, void*, void*))(Il2CppBase() + 0x1BD284))(this, anims, owner);
	}
	template <typename T = void> T OnActivate(void* action) {
		return ((T (*)(AnimStateContestZombieRhythm*, void*))(Il2CppBase() + 0x1BD33C))(this, action);
	}
	template <typename T = void> T OnDeactivate() {
		return ((T (*)(AnimStateContestZombieRhythm*))(Il2CppBase() + 0x1BD84C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AnimStateContestZombieRhythm*))(Il2CppBase() + 0x1BDA3C))(this);
	}
	template <typename T = bool> T HandleNewAction(void* action) {
		return ((T (*)(AnimStateContestZombieRhythm*, void*))(Il2CppBase() + 0x1BDA80))(this, action);
	}
	template <typename T = void> T Release() {
		return ((T (*)(AnimStateContestZombieRhythm*))(Il2CppBase() + 0x1BDC44))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AnimStateContestZombieRhythm*))(Il2CppBase() + 0x1BDC8C))(this);
	}
	template <typename T = void*> T _SetFPVLayer(bool fpvOn, float delay) {
		return ((T (*)(AnimStateContestZombieRhythm*, bool, float))(Il2CppBase() + 0x1BE48C))(this, fpvOn, delay);
	}
	template <typename T = void> T Initialize(void* action) {
		return ((T (*)(AnimStateContestZombieRhythm*, void*))(Il2CppBase() + 0x1BE554))(this, action);
	}
	template <typename T = void> T ContestStart() {
		return ((T (*)(AnimStateContestZombieRhythm*))(Il2CppBase() + 0x1BD660))(this);
	}
	template <typename T = void> T InitializeLoop() {
		return ((T (*)(AnimStateContestZombieRhythm*))(Il2CppBase() + 0x1BDE44))(this);
	}
	template <typename T = void> T UpdateLoop() {
		return ((T (*)(AnimStateContestZombieRhythm*))(Il2CppBase() + 0x1BDEBC))(this);
	}
	template <typename T = void> T ContestLost() {
		return ((T (*)(AnimStateContestZombieRhythm*))(Il2CppBase() + 0x1BE144))(this);
	}
	template <typename T = void> T ContestWon() {
		return ((T (*)(AnimStateContestZombieRhythm*))(Il2CppBase() + 0x1BE1F8))(this);
	}
	template <typename T = void> T Finish(bool enableCollisions, bool callRelease) {
		return ((T (*)(AnimStateContestZombieRhythm*, bool, bool))(Il2CppBase() + 0x1BE3E0))(this, enableCollisions, callRelease);
	}
	template <typename T = float> T CalcRating(void** numHit) {
		return ((T (*)(AnimStateContestZombieRhythm*, void**))(Il2CppBase() + 0x1BF27C))(this, numHit);
	}
	template <typename T = Il2CppString*> T DbgGetBeatsString() {
		return ((T (*)(AnimStateContestZombieRhythm*))(Il2CppBase() + 0x1BF36C))(this);
	}
	template <typename T = void> T ResetBeatSuccess() {
		return ((T (*)(AnimStateContestZombieRhythm*))(Il2CppBase() + 0x1BF530))(this);
	}
	template <typename T = void> T StartRhythm() {
		return ((T (*)(AnimStateContestZombieRhythm*))(Il2CppBase() + 0x1BEC94))(this);
	}
	template <typename T = void> T StopRhythm() {
		return ((T (*)(AnimStateContestZombieRhythm*))(Il2CppBase() + 0x1BDBF8))(this);
	}
	template <typename T = void> T UpdateRhythm() {
		return ((T (*)(AnimStateContestZombieRhythm*))(Il2CppBase() + 0x1BED10))(this);
	}
	template <typename T = void> T OnButtonHit(void* contestObject, bool result) {
		return ((T (*)(AnimStateContestZombieRhythm*, void*, bool))(Il2CppBase() + 0x1BF870))(this, contestObject, result);
	}
	template <typename T = void> T BeatSucceeded(int32_t beat) {
		return ((T (*)(AnimStateContestZombieRhythm*, int32_t))(Il2CppBase() + 0x1BF594))(this, beat);
	}
	template <typename T = void> T BeatFailed(int32_t beat) {
		return ((T (*)(AnimStateContestZombieRhythm*, int32_t))(Il2CppBase() + 0x1BF828))(this, beat);
	}
	template <typename T = void> T StopAnims() {
		return ((T (*)(AnimStateContestZombieRhythm*))(Il2CppBase() + 0x1BF1B8))(this);
	}
};
