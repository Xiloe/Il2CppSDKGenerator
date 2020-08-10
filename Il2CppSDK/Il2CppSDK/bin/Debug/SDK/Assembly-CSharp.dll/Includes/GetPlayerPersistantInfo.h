#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetPlayerPersistantInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* inUserID, float inTimeOut) {
		return ((T (*)(GetPlayerPersistantInfo*, void*, float))(Il2CppBase() + 0x33986C))(this, inUserID, inTimeOut);
	}
};
