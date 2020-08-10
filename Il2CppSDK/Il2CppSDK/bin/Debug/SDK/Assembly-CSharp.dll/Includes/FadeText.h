#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FadeText
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Label() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_Background() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& m_Text() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_DelayTimer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_Timer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_Alpha() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_AlphaWeight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_Hold() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& FadeIn() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& FadeOut() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor(void* label, void* background, float fadeIn, float fadeOut, float alphaWeight, Il2CppColor textColor) {
		return ((T (*)(FadeText*, void*, void*, float, float, float, Il2CppColor))(Il2CppBase() + 0x3B4230))(this, label, background, fadeIn, fadeOut, alphaWeight, textColor);
	}
	template <typename T = bool> T IsActive() {
		return ((T (*)(FadeText*))(Il2CppBase() + 0x3B5290))(this);
	}
	template <typename T = void> T CopyFrom(void* otherText) {
		return ((T (*)(FadeText*, void*))(Il2CppBase() + 0x3B4DFC))(this, otherText);
	}
	template <typename T = void> T ShowMessage(Il2CppString* msg, float time, float showDelay) {
		return ((T (*)(FadeText*, Il2CppString*, float, float))(Il2CppBase() + 0x3B4C74))(this, msg, time, showDelay);
	}
	template <typename T = void> T Update(float time) {
		return ((T (*)(FadeText*, float))(Il2CppBase() + 0x3B45AC))(this, time);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(FadeText*))(Il2CppBase() + 0x3B52A8))(this);
	}
	template <typename T = void> T SetAlpha() {
		return ((T (*)(FadeText*))(Il2CppBase() + 0x3B53A8))(this);
	}
};
