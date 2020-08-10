#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetPlayerPersistantInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78EEC);
	}
	// Methods
	template <typename T = void> T _ctor(void* inUserID, Il2CppString* inPPInfo, float inTimeOut) {
		return ((T (*)(SetPlayerPersistantInfo*, void*, Il2CppString*, float))(Il2CppBase() + 0x2330A4))(this, inUserID, inPPInfo, inTimeOut);
	}
};
