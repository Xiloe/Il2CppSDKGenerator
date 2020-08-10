#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DebugUtils
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(DebugUtils*))(Il2CppBase() + 0x300194))(this);
	}
	template <typename T = void> static T Assert(bool Condition) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x30019C))(0, Condition);
	}
	template <typename T = Il2CppString*> static T GetFullName(void* Obj) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x30023C))(0, Obj);
	}
	template <typename T = void> static T GetMethodCallerInfo(void** File, void** Method, void** Line, int32_t StackOffset) {
		return ((T (*)(void *, void**, void**, void**, int32_t))(Il2CppBase() + 0x30042C))(0, File, Method, Line, StackOffset);
	}
	template <typename T = void> static T DumpCallstack() {
		return ((T (*)(void *))(Il2CppBase() + 0x3005FC))(0);
	}
	template <typename T = Il2CppString*> static T GetRandomString(int32_t Size, Il2CppString* AvailibleChars) {
		return ((T (*)(void *, int32_t, Il2CppString*))(Il2CppBase() + 0x300B04))(0, Size, AvailibleChars);
	}
};
