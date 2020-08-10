#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimStateGoToWithoutNavmesh
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78820);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& MaxSpeed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& AnimName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppQuaternion> T& FinalRotation() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppQuaternion> T& StartRotation() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& RotationProgress() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	// Methods
	template <typename T = void> T _ctor(void* anims, void* owner) {
		return ((T (*)(AnimStateGoToWithoutNavmesh*, void*, void*))(Il2CppBase() + 0x1C7288))(this, anims, owner);
	}
	template <typename T = void> T OnActivate(void* action) {
		return ((T (*)(AnimStateGoToWithoutNavmesh*, void*))(Il2CppBase() + 0x1C73CC))(this, action);
	}
	template <typename T = void> T OnDeactivate() {
		return ((T (*)(AnimStateGoToWithoutNavmesh*))(Il2CppBase() + 0x1C74E4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AnimStateGoToWithoutNavmesh*))(Il2CppBase() + 0x1C75B4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AnimStateGoToWithoutNavmesh*))(Il2CppBase() + 0x1C75F8))(this);
	}
	template <typename T = bool> T HandleNewAction(void* action) {
		return ((T (*)(AnimStateGoToWithoutNavmesh*, void*))(Il2CppBase() + 0x1C7B50))(this, action);
	}
	template <typename T = void> T PlayAnim(void* motion) {
		return ((T (*)(AnimStateGoToWithoutNavmesh*, void*))(Il2CppBase() + 0x1C7410))(this, motion);
	}
	template <typename T = void*> T GetMotionType() {
		return ((T (*)(AnimStateGoToWithoutNavmesh*))(Il2CppBase() + 0x1C7AF4))(this);
	}
	template <typename T = void> T Initialize(void* action) {
		return ((T (*)(AnimStateGoToWithoutNavmesh*, void*))(Il2CppBase() + 0x1C7DA0))(this, action);
	}
};
