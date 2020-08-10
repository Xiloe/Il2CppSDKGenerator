#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimFSMPlayer
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78804);
	}
	// Methods
	template <typename T = void> T _ctor(void* anims, void* owner) {
		return ((T (*)(AnimFSMPlayer*, void*, void*))(Il2CppBase() + 0x1AC32C))(this, anims, owner);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(AnimFSMPlayer*))(Il2CppBase() + 0x1AD6A4))(this);
	}
};
