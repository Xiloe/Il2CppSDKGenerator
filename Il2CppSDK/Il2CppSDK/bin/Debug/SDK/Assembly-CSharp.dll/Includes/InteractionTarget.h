#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InteractionTarget
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& InteractionStates() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& Enabled() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(InteractionTarget*))(Il2CppBase() + 0x3C8C88))(this);
	}
	template <typename T = Il2CppList<void*>*> T get_States() {
		return ((T (*)(InteractionTarget*))(Il2CppBase() + 0x3C8D34))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(InteractionTarget*))(Il2CppBase() + 0x3C8D3C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(InteractionTarget*))(Il2CppBase() + 0x3C9070))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(InteractionTarget*))(Il2CppBase() + 0x3C9108))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(InteractionTarget*))(Il2CppBase() + 0x3C9628))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(InteractionTarget*))(Il2CppBase() + 0x3C9B48))(this);
	}
};
