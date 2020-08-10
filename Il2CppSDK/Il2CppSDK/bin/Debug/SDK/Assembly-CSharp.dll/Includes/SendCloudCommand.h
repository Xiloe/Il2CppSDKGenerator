#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SendCloudCommand
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78E64);
	}
	// Fields
	template <typename T = Il2CppString*> T& command() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor(void* inUserID, Il2CppString* inCommand, float inTimeOut) {
		return ((T (*)(SendCloudCommand*, void*, Il2CppString*, float))(Il2CppBase() + 0x22DAD8))(this, inUserID, inCommand, inTimeOut);
	}
	template <typename T = Il2CppString*> T get_command() {
		return ((T (*)(SendCloudCommand*))(Il2CppBase() + 0x22DB04))(this);
	}
	template <typename T = void> T set_command(Il2CppString* value) {
		return ((T (*)(SendCloudCommand*, Il2CppString*))(Il2CppBase() + 0x22DAFC))(this, value);
	}
	template <typename T = void*> T GetCloudAsyncOp() {
		return ((T (*)(SendCloudCommand*))(Il2CppBase() + 0x22DB0C))(this);
	}
};
