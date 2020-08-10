#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiOptions
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7897C);
	}
	// Fields
	template <typename T = float> static T& DefaultMusicVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& DefaultSubtitles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& DefaultInvertYAxis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5);
	}
	template <typename T = bool> static T& DefaultLeftHandAiming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6);
	}
	template <typename T = bool> static T& DefaultMusicOn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7);
	}
	template <typename T = void*> static T& DefaultScheme() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> static T& DefaultSensitivity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = bool> static T& DefaultShowBlood() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = float> static T& sensitivity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = float> static T& musicVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = bool> static T& subtitles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = bool> static T& invertYAxis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D);
	}
	template <typename T = bool> static T& leftHandAiming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E);
	}
	template <typename T = void*> static T& m_ControlScheme() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = float> static T& ListenerVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = int32_t> static T& graphicDetail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = bool> static T& musicOn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = bool> static T& showMogaHelp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D);
	}
	template <typename T = bool> static T& leftHandControlsNeedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E);
	}
	template <typename T = bool> static T& ShowBlood() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F);
	}
	template <typename T = void*> static T& FireUseButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& PauseButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = void*> static T& MoveStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& ReloadButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = void*> static T& AimButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& WeaponButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = Il2CppArray<void*>*> static T& GadgetButtons() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiOptions*))(Il2CppBase() + 0x38BCE8))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x38BCF0))(0);
	}
	template <typename T = int32_t> static T get_DefaultGraphicDetail() {
		return ((T (*)(void *))(Il2CppBase() + 0x38C200))(0);
	}
	template <typename T = void> static T ResetToDefaults() {
		return ((T (*)(void *))(Il2CppBase() + 0x38C2A0))(0);
	}
	template <typename T = void> static T SetNewLeftHandAiming(bool newVal) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x38C3F4))(0, newVal);
	}
	template <typename T = void> static T SwitchLeftHandAimingControls() {
		return ((T (*)(void *))(Il2CppBase() + 0x37E804))(0);
	}
	template <typename T = void> static T ApplyBloodSettings() {
		return ((T (*)(void *))(Il2CppBase() + 0x38C684))(0);
	}
	template <typename T = void> static T Save() {
		return ((T (*)(void *))(Il2CppBase() + 0x370160))(0);
	}
	template <typename T = void> static T Load() {
		return ((T (*)(void *))(Il2CppBase() + 0x38C690))(0);
	}
};
