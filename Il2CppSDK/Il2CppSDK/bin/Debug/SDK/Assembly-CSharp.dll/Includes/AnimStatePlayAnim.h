#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimStatePlayAnim
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78838);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& EndOfStateTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& LookAtTarget() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& AnimName() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& PrevInvulnerable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor(void* anims, void* owner) {
		return ((T (*)(AnimStatePlayAnim*, void*, void*))(Il2CppBase() + 0x1CC7C8))(this, anims, owner);
	}
	template <typename T = void> T OnActivate(void* action) {
		return ((T (*)(AnimStatePlayAnim*, void*))(Il2CppBase() + 0x1CC7D0))(this, action);
	}
	template <typename T = void> T OnDeactivate() {
		return ((T (*)(AnimStatePlayAnim*))(Il2CppBase() + 0x1CC9A4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AnimStatePlayAnim*))(Il2CppBase() + 0x1CCAD8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AnimStatePlayAnim*))(Il2CppBase() + 0x1CCB38))(this);
	}
	template <typename T = bool> T HandleNewAction(void* action) {
		return ((T (*)(AnimStatePlayAnim*, void*))(Il2CppBase() + 0x1CCBA8))(this, action);
	}
	template <typename T = void> T Initialize(void* action) {
		return ((T (*)(AnimStatePlayAnim*, void*))(Il2CppBase() + 0x1CCC74))(this, action);
	}
	template <typename T = void> T HandleAnimationEvent(void* animEvent) {
		return ((T (*)(AnimStatePlayAnim*, void*))(Il2CppBase() + 0x1CD058))(this, animEvent);
	}
};
