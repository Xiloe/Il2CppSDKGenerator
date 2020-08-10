#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NESController
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = bool> T& m_EnableLogging() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_UseDelegatesIfCan() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = Il2CppList<void*>*> T& m_GameLogicInteractions() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_ActiveEvents() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(NESController*))(Il2CppBase() + 0x40FC8C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(NESController*))(Il2CppBase() + 0x40FD40))(this);
	}
	template <typename T = void> T SendGameEvent(void* inFrom, Il2CppString* inEvent) {
		return ((T (*)(NESController*, void*, Il2CppString*))(Il2CppBase() + 0x40FD4C))(this, inFrom, inEvent);
	}
	template <typename T = void*> T InvokeAction_Corutine(void* inActionInfo) {
		return ((T (*)(NESController*, void*))(Il2CppBase() + 0x410670))(this, inActionInfo);
	}
	template <typename T = void> T InvokeAction(void* inActionInfo) {
		return ((T (*)(NESController*, void*))(Il2CppBase() + 0x410728))(this, inActionInfo);
	}
	template <typename T = void*> T GetGameLogicEventInfo(void* inComponent, Il2CppString* inEvent) {
		return ((T (*)(NESController*, void*, Il2CppString*))(Il2CppBase() + 0x41010C))(this, inComponent, inEvent);
	}
};
