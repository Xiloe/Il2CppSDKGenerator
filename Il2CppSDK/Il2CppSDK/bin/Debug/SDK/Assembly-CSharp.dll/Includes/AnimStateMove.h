#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimStateMove
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78824);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& MaxSpeed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor(void* anims, void* owner) {
		return ((T (*)(AnimStateMove*, void*, void*))(Il2CppBase() + 0x1CB014))(this, anims, owner);
	}
	template <typename T = void> T OnActivate(void* action) {
		return ((T (*)(AnimStateMove*, void*))(Il2CppBase() + 0x1CB01C))(this, action);
	}
	template <typename T = void> T OnDeactivate() {
		return ((T (*)(AnimStateMove*))(Il2CppBase() + 0x1CB024))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AnimStateMove*))(Il2CppBase() + 0x1CB44C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AnimStateMove*))(Il2CppBase() + 0x1CB490))(this);
	}
	template <typename T = bool> T HandleNewAction(void* action) {
		return ((T (*)(AnimStateMove*, void*))(Il2CppBase() + 0x1CBFF8))(this, action);
	}
	template <typename T = void> T PlayMoveAnim(bool force) {
		return ((T (*)(AnimStateMove*, bool))(Il2CppBase() + 0x1CBB14))(this, force);
	}
	template <typename T = void> T PlayStrafeAnim() {
		return ((T (*)(AnimStateMove*))(Il2CppBase() + 0x1CBD18))(this);
	}
	template <typename T = void> T StopStrafeAnim(bool justOne, void* whichOne) {
		return ((T (*)(AnimStateMove*, bool, void*))(Il2CppBase() + 0x1CB150))(this, justOne, whichOne);
	}
	template <typename T = void*> T GetMoveType() {
		return ((T (*)(AnimStateMove*))(Il2CppBase() + 0x1CC508))(this);
	}
	template <typename T = void*> T GetMotionType() {
		return ((T (*)(AnimStateMove*))(Il2CppBase() + 0x1CC464))(this);
	}
	template <typename T = void> T Initialize(void* action) {
		return ((T (*)(AnimStateMove*, void*))(Il2CppBase() + 0x1CC6F0))(this, action);
	}
};
