#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HitInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& target() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& camera() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	// Methods
	template <typename T = void> T SendMessage(Il2CppString* name) {
		return ((T (*)(HitInfo*, Il2CppString*))(Il2CppBase() + 0x932FB8))(this, name);
	}
	template <typename T = bool> static T Compare(void* lhs, void* rhs) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x932F84))(0, lhs, rhs);
	}
	template <typename T = bool> static T op_Implicit(void* exists) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x932F04))(0, exists);
	}
};
