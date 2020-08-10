#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimFSMZombieBoss1
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78810);
	}
	// Methods
	template <typename T = void> T _ctor(void* anims, void* owner) {
		return ((T (*)(AnimFSMZombieBoss1*, void*, void*))(Il2CppBase() + 0x1AC338))(this, anims, owner);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(AnimFSMZombieBoss1*))(Il2CppBase() + 0x1ADB18))(this);
	}
};
