#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangeValuecAnonStorey98
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& inName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ChangeValuecAnonStorey98*))(Il2CppBase() + 0x412704))(this);
	}
	template <typename T = bool> T m__4(void* item) {
		return ((T (*)(ChangeValuecAnonStorey98*, void*))(Il2CppBase() + 0x4129A0))(this, item);
	}
};
