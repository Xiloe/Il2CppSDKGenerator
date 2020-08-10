#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimStateGoTo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78844);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& MaxSpeed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& AnimNameMove() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& AnimNameAP() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& TimeToFinishRotateAction() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& RotateAction() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& actionPointData() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	// Methods
	template <typename T = void> T _ctor(void* anims, void* owner) {
		return ((T (*)(AnimStateGoTo*, void*, void*))(Il2CppBase() + 0x1C3250))(this, anims, owner);
	}
	template <typename T = void> T Initialize(void* action) {
		return ((T (*)(AnimStateGoTo*, void*))(Il2CppBase() + 0x1C3320))(this, action);
	}
	template <typename T = void> T OnActivate(void* action) {
		return ((T (*)(AnimStateGoTo*, void*))(Il2CppBase() + 0x1C374C))(this, action);
	}
	template <typename T = void> T OnDeactivate() {
		return ((T (*)(AnimStateGoTo*))(Il2CppBase() + 0x1C3818))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AnimStateGoTo*))(Il2CppBase() + 0x1C3F94))(this);
	}
	template <typename T = bool> T GetActionPoint() {
		return ((T (*)(AnimStateGoTo*))(Il2CppBase() + 0x1C3FF8))(this);
	}
	template <typename T = void> T StartActionPoint() {
		return ((T (*)(AnimStateGoTo*))(Il2CppBase() + 0x1C4474))(this);
	}
	template <typename T = void> T UpdateActionPoint() {
		return ((T (*)(AnimStateGoTo*))(Il2CppBase() + 0x1C4CE0))(this);
	}
	template <typename T = void> T StopActionPoint(bool force) {
		return ((T (*)(AnimStateGoTo*, bool))(Il2CppBase() + 0x1C3A40))(this, force);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AnimStateGoTo*))(Il2CppBase() + 0x1C538C))(this);
	}
	template <typename T = bool> T HandleNewAction(void* action) {
		return ((T (*)(AnimStateGoTo*, void*))(Il2CppBase() + 0x1C697C))(this, action);
	}
	template <typename T = void> T PlayAnim(float speedMult) {
		return ((T (*)(AnimStateGoTo*, float))(Il2CppBase() + 0x1C63C4))(this, speedMult);
	}
	template <typename T = void*> T GetMotionType() {
		return ((T (*)(AnimStateGoTo*))(Il2CppBase() + 0x1C4398))(this);
	}
	template <typename T = void*> T GetMoveType() {
		return ((T (*)(AnimStateGoTo*))(Il2CppBase() + 0x1C6124))(this);
	}
	template <typename T = float> T GetMoveSpeed(void* motion) {
		return ((T (*)(AnimStateGoTo*, void*))(Il2CppBase() + 0x1C36E0))(this, motion);
	}
	template <typename T = void> T UpdateRotation() {
		return ((T (*)(AnimStateGoTo*))(Il2CppBase() + 0x1C5E38))(this);
	}
};
