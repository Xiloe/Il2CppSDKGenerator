#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimFSMZombieNormal
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78808);
	}
	// Methods
	template <typename T = void> T _ctor(void* anims, void* owner) {
		return ((T (*)(AnimFSMZombieNormal*, void*, void*))(Il2CppBase() + 0x1AC330))(this, anims, owner);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(AnimFSMZombieNormal*))(Il2CppBase() + 0x1AE1FC))(this);
	}
};
