#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimFSMZombieVomit
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7880C);
	}
	// Methods
	template <typename T = void> T _ctor(void* anims, void* owner) {
		return ((T (*)(AnimFSMZombieVomit*, void*, void*))(Il2CppBase() + 0x1AC334))(this, anims, owner);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(AnimFSMZombieVomit*))(Il2CppBase() + 0x1AE56C))(this);
	}
};
