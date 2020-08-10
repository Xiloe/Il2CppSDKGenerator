#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Transition
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& m_From() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_To() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_BeginTime() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_Duration() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(float From, float To, float Duration) {
		return ((T (*)(Transition*, float, float, float))(Il2CppBase() + 0x436114))(this, From, To, Duration);
	}
	template <typename T = float> T GetTransition() {
		return ((T (*)(Transition*))(Il2CppBase() + 0x436174))(this);
	}
	template <typename T = bool> T IsDone() {
		return ((T (*)(Transition*))(Il2CppBase() + 0x436278))(this);
	}
};
