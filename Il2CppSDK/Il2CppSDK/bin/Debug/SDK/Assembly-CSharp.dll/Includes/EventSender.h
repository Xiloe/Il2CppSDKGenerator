#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EventSender
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD795D0);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& GameEvents() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EventSender*))(Il2CppBase() + 0x312BBC))(this);
	}
	template <typename T = void> T Send() {
		return ((T (*)(EventSender*))(Il2CppBase() + 0x312C68))(this);
	}
};
