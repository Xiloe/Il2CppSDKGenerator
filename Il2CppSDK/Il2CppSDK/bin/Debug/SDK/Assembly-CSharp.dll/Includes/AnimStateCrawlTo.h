#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimStateCrawlTo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78848);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& AnimName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& TimeToFinishRotateAction() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& RotateAction() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor(void* anims, void* owner) {
		return ((T (*)(AnimStateCrawlTo*, void*, void*))(Il2CppBase() + 0x1BFA6C))(this, anims, owner);
	}
	template <typename T = void> T OnActivate(void* action) {
		return ((T (*)(AnimStateCrawlTo*, void*))(Il2CppBase() + 0x1BFA74))(this, action);
	}
	template <typename T = void> T OnDeactivate() {
		return ((T (*)(AnimStateCrawlTo*))(Il2CppBase() + 0x1BFAEC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AnimStateCrawlTo*))(Il2CppBase() + 0x1BFCC8))(this);
	}
	template <typename T = void*> T GetActionPoint() {
		return ((T (*)(AnimStateCrawlTo*))(Il2CppBase() + 0x1BFD24))(this);
	}
	template <typename T = void> T UpdateActionPoint() {
		return ((T (*)(AnimStateCrawlTo*))(Il2CppBase() + 0x1BFEA4))(this);
	}
	template <typename T = void> T UpdateCrawlTime() {
		return ((T (*)(AnimStateCrawlTo*))(Il2CppBase() + 0x1BFF9C))(this);
	}
	template <typename T = void> T KillMe() {
		return ((T (*)(AnimStateCrawlTo*))(Il2CppBase() + 0x1BFF0C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AnimStateCrawlTo*))(Il2CppBase() + 0x1C0048))(this);
	}
	template <typename T = bool> T HandleNewAction(void* action) {
		return ((T (*)(AnimStateCrawlTo*, void*))(Il2CppBase() + 0x1C087C))(this, action);
	}
	template <typename T = void> T PlayAnim() {
		return ((T (*)(AnimStateCrawlTo*))(Il2CppBase() + 0x1C07B8))(this);
	}
	template <typename T = void*> T GetMotionType() {
		return ((T (*)(AnimStateCrawlTo*))(Il2CppBase() + 0x1C0720))(this);
	}
	template <typename T = void*> T GetMoveType() {
		return ((T (*)(AnimStateCrawlTo*))(Il2CppBase() + 0x1C0744))(this);
	}
	template <typename T = void> T Initialize(void* action) {
		return ((T (*)(AnimStateCrawlTo*, void*))(Il2CppBase() + 0x1C0F88))(this, action);
	}
	template <typename T = float> T GetMoveSpeed(void* motion) {
		return ((T (*)(AnimStateCrawlTo*, void*))(Il2CppBase() + 0x1C0768))(this, motion);
	}
	template <typename T = void> T UpdateRotation() {
		return ((T (*)(AnimStateCrawlTo*))(Il2CppBase() + 0x1C04A4))(this);
	}
};
