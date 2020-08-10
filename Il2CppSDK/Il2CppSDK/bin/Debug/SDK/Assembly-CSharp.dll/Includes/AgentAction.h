#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentAction
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& Type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& Status() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor(void* type) {
		return ((T (*)(AgentAction*, void*))(Il2CppBase() + 0x19D3D8))(this, type);
	}
	template <typename T = void*> T GetStatus() {
		return ((T (*)(AgentAction*))(Il2CppBase() + 0x19D418))(this);
	}
	template <typename T = bool> T IsActive() {
		return ((T (*)(AgentAction*))(Il2CppBase() + 0x19D420))(this);
	}
	template <typename T = bool> T IsFailed() {
		return ((T (*)(AgentAction*))(Il2CppBase() + 0x19D434))(this);
	}
	template <typename T = bool> T IsSuccess() {
		return ((T (*)(AgentAction*))(Il2CppBase() + 0x19D448))(this);
	}
	template <typename T = bool> T IsUnused() {
		return ((T (*)(AgentAction*))(Il2CppBase() + 0x19D458))(this);
	}
	template <typename T = void> T SetSuccess() {
		return ((T (*)(AgentAction*))(Il2CppBase() + 0x19D46C))(this);
	}
	template <typename T = void> T SetFailed() {
		return ((T (*)(AgentAction*))(Il2CppBase() + 0x19D478))(this);
	}
	template <typename T = void> T SetUnused() {
		return ((T (*)(AgentAction*))(Il2CppBase() + 0x19D484))(this);
	}
	template <typename T = void> T SetActive() {
		return ((T (*)(AgentAction*))(Il2CppBase() + 0x19D490))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AgentAction*))(Il2CppBase() + 0x19D414))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AgentAction*))(Il2CppBase() + 0x19D49C))(this);
	}
};
