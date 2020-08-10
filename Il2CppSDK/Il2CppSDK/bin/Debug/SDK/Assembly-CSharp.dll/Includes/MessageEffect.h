#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MessageEffect
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Platform() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_Background() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_Text() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_TextW() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& m_BckOrigPos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& m_TextOrigPos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_Timer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_BckTimer() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor(void* background, void* text, void* pivotMessages) {
		return ((T (*)(MessageEffect*, void*, void*, void*))(Il2CppBase() + 0x3B42E4))(this, background, text, pivotMessages);
	}
	template <typename T = void> T Show(Il2CppString* text) {
		return ((T (*)(MessageEffect*, Il2CppString*))(Il2CppBase() + 0x3B4FAC))(this, text);
	}
	template <typename T = void> T Update(float time) {
		return ((T (*)(MessageEffect*, float))(Il2CppBase() + 0x3B48E8))(this, time);
	}
	template <typename T = void> T UpdateBackground(float time) {
		return ((T (*)(MessageEffect*, float))(Il2CppBase() + 0x3B54A8))(this, time);
	}
	template <typename T = void> T UpdateText(float time) {
		return ((T (*)(MessageEffect*, float))(Il2CppBase() + 0x3B56E8))(this, time);
	}
};
