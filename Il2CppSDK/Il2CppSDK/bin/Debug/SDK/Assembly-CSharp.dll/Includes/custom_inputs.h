#pragma once
#include <Il2Cpp/Il2Cpp.h>

class custominputs
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78D3C);
	}
	// Fields
	template <typename T = void*> static T& s_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& m_OnHideDelegate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& menuOn() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& inputManagerLogo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<void*>*> T& DescriptionString() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<void*>*> T& inputK() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& Boxes_Y() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& BoxesMargin_Y() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& BoxesHeight() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& BoxesMargin_X() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& DescriptionSize() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& buttonSize() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& DescriptionBox_X() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& InputBox1_X() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& DescriptionBox_X2() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& InputBox1_X2() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& resetbuttonLocY() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& resetbuttonSizeX() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& resetbuttonHeight() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& resetbuttonX() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& closebuttonX() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& Title_Y() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& screenMarginX() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& screenMarginY() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& allowDuplicates() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& inputButtonIndex() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<void*>*> T& tempjoy1() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppArray<void*>*> T& tempjoy2() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppArray<void*>*> T& isInput() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<void*>*> T& isInputDown() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<void*>*> T& isInputUp() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = void*> T& OurSkin() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = void*> T& OurSkin_Korean() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& sTitle() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& sAction() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppString*> T& sButton() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& sDefaults() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppString*> T& sDone() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppArray<void*>*> T& sDescription() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppString*> static T& sKeyGpadName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& sKeyGpadKeys() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& sKeyGpadAxis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> static T& sKeyGpadKeyLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& sKeyLastSaveSlot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppArray<void*>*> static T& JoyAxis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppArray<void*>*> static T& EmptyDefaults() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppArray<void*>*> static T& X360Default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppArray<void*>*> static T& PS3Default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppArray<void*>*> static T& LogitechDualDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppArray<void*>*> static T& LogitechF710Default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = Il2CppArray<void*>*> static T& WikiPadControllerDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppArray<void*>*> static T& MogaProHIDDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = Il2CppArray<void*>*> static T& NVidiaShieldDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = Il2CppString*> static T& s_NvidiaShield1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = Il2CppString*> static T& s_NvidiaShield2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = Il2CppArray<void*>*> T& supportedGpads() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(custominputs*))(Il2CppBase() + 0x2E5B68))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E5F04))(0);
	}
	template <typename T = void*> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EA1DC))(0);
	}
	template <typename T = void> T InitTexts() {
		return ((T (*)(custominputs*))(Il2CppBase() + 0x2EA720))(this);
	}
	template <typename T = bool> static T IsNVidiaShield() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EA960))(0);
	}
	template <typename T = void> T Start() {
		return ((T (*)(custominputs*))(Il2CppBase() + 0x2EAADC))(this);
	}
	template <typename T = bool> T IsMenuOn() {
		return ((T (*)(custominputs*))(Il2CppBase() + 0x2EAAE8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(custominputs*))(Il2CppBase() + 0x2EA440))(this);
	}
	template <typename T = void> T LoadConfig() {
		return ((T (*)(custominputs*))(Il2CppBase() + 0x2EAAF0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(custominputs*))(Il2CppBase() + 0x2EC374))(this);
	}
	template <typename T = void> T ShowConfig() {
		return ((T (*)(custominputs*))(Il2CppBase() + 0x2ECC74))(this);
	}
	template <typename T = void> T CloseAndSaveConfig() {
		return ((T (*)(custominputs*))(Il2CppBase() + 0x2ECC98))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(custominputs*))(Il2CppBase() + 0x2ED224))(this);
	}
	template <typename T = void> T inputSetBools() {
		return ((T (*)(custominputs*))(Il2CppBase() + 0x2EC540))(this);
	}
	template <typename T = void> T saveInputs(int32_t Slot) {
		return ((T (*)(custominputs*, int32_t))(Il2CppBase() + 0x2ECE5C))(this, Slot);
	}
	template <typename T = int32_t> T FindSaveSlot(Il2CppString* gpadName) {
		return ((T (*)(custominputs*, Il2CppString*))(Il2CppBase() + 0x2ECD74))(this, gpadName);
	}
	template <typename T = void> T Save(int32_t Slot, Il2CppString* gpadName, Il2CppString* KeyCodes, Il2CppString* JoysticInput, int32_t KeyLength) {
		return ((T (*)(custominputs*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x2EDE98))(this, Slot, gpadName, KeyCodes, JoysticInput, KeyLength);
	}
	template <typename T = bool> T Load(Il2CppString* KeyCodes_loadstring, Il2CppString* Joystick_loadstring) {
		return ((T (*)(custominputs*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2EE0CC))(this, KeyCodes_loadstring, Joystick_loadstring);
	}
	template <typename T = void> T DeleteConfigKeys(int32_t Slot) {
		return ((T (*)(custominputs*, int32_t))(Il2CppBase() + 0x2EBF88))(this, Slot);
	}
	template <typename T = bool> T HasStoredConfig(Il2CppString* gpadName) {
		return ((T (*)(custominputs*, Il2CppString*))(Il2CppBase() + 0x2EB5A0))(this, gpadName);
	}
	template <typename T = int32_t> T StoredConfigIndex(Il2CppString* gpadName) {
		return ((T (*)(custominputs*, Il2CppString*))(Il2CppBase() + 0x2EB5C0))(this, gpadName);
	}
	template <typename T = bool> T HasDefaultConfig(Il2CppString* gpadName) {
		return ((T (*)(custominputs*, Il2CppString*))(Il2CppBase() + 0x2EC194))(this, gpadName);
	}
	template <typename T = void> T SetDefaultConfig(Il2CppString* gpadName) {
		return ((T (*)(custominputs*, Il2CppString*))(Il2CppBase() + 0x2EC21C))(this, gpadName);
	}
	template <typename T = void> T SetDefaults(Il2CppArray<void*>* defaults) {
		return ((T (*)(custominputs*, Il2CppArray<void*>*))(Il2CppBase() + 0x2EB070))(this, defaults);
	}
	template <typename T = bool> T loadConfig(int32_t Slot) {
		return ((T (*)(custominputs*, int32_t))(Il2CppBase() + 0x2EB834))(this, Slot);
	}
	template <typename T = void> T drawButtons1() {
		return ((T (*)(custominputs*))(Il2CppBase() + 0x2ED234))(this);
	}
	template <typename T = Il2CppString*> T GetButtonLabel(int32_t btnIndex) {
		return ((T (*)(custominputs*, int32_t))(Il2CppBase() + 0x2EE93C))(this, btnIndex);
	}
	template <typename T = Il2CppString*> T GetAxisName(int32_t btnIndex) {
		return ((T (*)(custominputs*, int32_t))(Il2CppBase() + 0x2EED18))(this, btnIndex);
	}
	template <typename T = void> T DetectInputSetup() {
		return ((T (*)(custominputs*))(Il2CppBase() + 0x2EEC5C))(this);
	}
	template <typename T = void*> T GetPressedInput() {
		return ((T (*)(custominputs*))(Il2CppBase() + 0x2EEEA0))(this);
	}
	template <typename T = void> T checDoubles(void* testkey, int32_t o, int32_t p) {
		return ((T (*)(custominputs*, void*, int32_t, int32_t))(Il2CppBase() + 0x2EF1F8))(this, testkey, o, p);
	}
	template <typename T = void> T checDoubleAxis(void* testAxis, int32_t o, int32_t p) {
		return ((T (*)(custominputs*, void*, int32_t, int32_t))(Il2CppBase() + 0x2EF354))(this, testAxis, o, p);
	}
	template <typename T = void> T ResetToDefaults() {
		return ((T (*)(custominputs*))(Il2CppBase() + 0x2EE80C))(this);
	}
};
