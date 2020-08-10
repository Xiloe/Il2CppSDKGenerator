#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnFriendSelect
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(OnFriendSelect*, void*, void*))(Il2CppBase() + 0x31F5F4))(this, object, method);
	}
	template <typename T = void> T Invoke(Il2CppString* inFriendName) {
		return ((T (*)(OnFriendSelect*, Il2CppString*))(Il2CppBase() + 0x31FC1C))(this, inFriendName);
	}
	template <typename T = void*> T BeginInvoke(Il2CppString* inFriendName, void* callback, void* object) {
		return ((T (*)(OnFriendSelect*, Il2CppString*, void*, void*))(Il2CppBase() + 0x31FEE0))(this, inFriendName, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(OnFriendSelect*, void*))(Il2CppBase() + 0x31FF0C))(this, result);
	}
};
