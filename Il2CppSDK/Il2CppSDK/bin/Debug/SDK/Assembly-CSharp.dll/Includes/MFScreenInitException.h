#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MFScreenInitException
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78934);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MFScreenInitException*))(Il2CppBase() + 0x3F5A5C))(this);
	}
	template <typename T = void> T _ctor_1(Il2CppString* message) {
		return ((T (*)(MFScreenInitException*, Il2CppString*))(Il2CppBase() + 0x3F5AE4))(this, message);
	}
	template <typename T = void> T _ctor_2(Il2CppString* message, void* innerException) {
		return ((T (*)(MFScreenInitException*, Il2CppString*, void*))(Il2CppBase() + 0x3F5AEC))(this, message, innerException);
	}
	template <typename T = void> T _ctor_3(void* info, void* context) {
		return ((T (*)(MFScreenInitException*, void*, void*))(Il2CppBase() + 0x3F5AF4))(this, info, context);
	}
};
