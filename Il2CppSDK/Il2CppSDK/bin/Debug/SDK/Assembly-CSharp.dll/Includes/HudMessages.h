#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HudMessages
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79154);
	}
	// Fields
	template <typename T = void*> T& m_PivotMessages() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_ConsoleLayout() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_EffectLayout() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<void*>*> T& m_ConsoleRows() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<void*>*> T& m_MessageEffects() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_Objective() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_Objective2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_ObjectiveSmall() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_ObjectiveLayout() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& s_PivotMessages() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& s_Console() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& s_Objective() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& s_Effects() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(HudMessages*))(Il2CppBase() + 0x3B33C0))(this);
	}
	template <typename T = bool> T VisibleOnStart() {
		return ((T (*)(HudMessages*))(Il2CppBase() + 0x3B3484))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(HudMessages*))(Il2CppBase() + 0x3B348C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HudMessages*))(Il2CppBase() + 0x3B449C))(this);
	}
	template <typename T = void> T LateUpdate(float deltaTime) {
		return ((T (*)(HudMessages*, float))(Il2CppBase() + 0x3B44A0))(this, deltaTime);
	}
	template <typename T = void> T ShowWidgets(bool on) {
		return ((T (*)(HudMessages*, bool))(Il2CppBase() + 0x3B490C))(this, on);
	}
	template <typename T = void> T ShowMessage(void* type, int32_t messageID, bool dontDisappear, float time) {
		return ((T (*)(HudMessages*, void*, int32_t, bool, float))(Il2CppBase() + 0x3B4A1C))(this, type, messageID, dontDisappear, time);
	}
	template <typename T = void> T ShowMessage_1(void* type, Il2CppString* message, bool dontDisappear, float time) {
		return ((T (*)(HudMessages*, void*, Il2CppString*, bool, float))(Il2CppBase() + 0x3B4A90))(this, type, message, dontDisappear, time);
	}
	template <typename T = void> T ShowMessageEffect(void* type, Il2CppString* text) {
		return ((T (*)(HudMessages*, void*, Il2CppString*))(Il2CppBase() + 0x3B4F54))(this, type, text);
	}
	template <typename T = void> T HideAllMessages() {
		return ((T (*)(HudMessages*))(Il2CppBase() + 0x3B5120))(this);
	}
};
