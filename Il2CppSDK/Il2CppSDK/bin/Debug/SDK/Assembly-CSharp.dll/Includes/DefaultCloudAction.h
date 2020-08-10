#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DefaultCloudAction
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* inUserID, float inTimeOut) {
		return ((T (*)(DefaultCloudAction*, void*, float))(Il2CppBase() + 0x300C30))(this, inUserID, inTimeOut);
	}
	template <typename T = void*> T PPIManager_Update() {
		return ((T (*)(DefaultCloudAction*))(Il2CppBase() + 0x300C38))(this);
	}
	template <typename T = void*> T GetCloudAsyncOp() {
		return ((T (*)(DefaultCloudAction*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnSuccess() {
		return ((T (*)(DefaultCloudAction*))(Il2CppBase() + 0x300E2C))(this);
	}
	template <typename T = void> T OnFailed() {
		return ((T (*)(DefaultCloudAction*))(Il2CppBase() + 0x300E30))(this);
	}
};
