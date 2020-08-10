#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HudTutorial
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79170);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> T& Tutorials() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& s_PivotMainName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& s_LayoutMainName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& s_TutorialName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(HudTutorial*))(Il2CppBase() + 0x3BA03C))(this);
	}
	template <typename T = bool> T VisibleOnStart() {
		return ((T (*)(HudTutorial*))(Il2CppBase() + 0x3BA0E0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(HudTutorial*))(Il2CppBase() + 0x3BA0E8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HudTutorial*))(Il2CppBase() + 0x3BA52C))(this);
	}
	template <typename T = void> T LateUpdate(float deltaTime) {
		return ((T (*)(HudTutorial*, float))(Il2CppBase() + 0x3BA530))(this, deltaTime);
	}
	template <typename T = void> T ShowTutorial(int32_t index, bool show) {
		return ((T (*)(HudTutorial*, int32_t, bool))(Il2CppBase() + 0x3BA534))(this, index, show);
	}
	template <typename T = void> T HideTutorials() {
		return ((T (*)(HudTutorial*))(Il2CppBase() + 0x3BA6D0))(this);
	}
	template <typename T = void> T ShowWidgets(bool on) {
		return ((T (*)(HudTutorial*, bool))(Il2CppBase() + 0x3BA748))(this, on);
	}
};
