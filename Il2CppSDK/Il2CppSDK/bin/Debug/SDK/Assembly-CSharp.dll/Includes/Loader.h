#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Loader
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79394);
	}
	// Fields
	template <typename T = void*> T& m_LabelStyle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_ButtonFontStyle() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_BackGroundStyle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_ScreenTimeout() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_State() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppRect> T& m_ActiveScreen() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppRect> T& mDefaultButtonPositionRect() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& mDowloadInterrupted() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& m_FirstLevel() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_DownloadInProggres() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& NextDataCheckTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> static T& m_LineTextOffsetBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& m_LineTextOffsetEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& m_IntroText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& m_DataDownloadErrorText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> static T& m_InvalidDataErrorText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& m_UnsupportedDeviceText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppString*> static T& m_NoAndroidDeviceText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppString*> static T& m_NoStorageDeviceText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppString*> static T& m_NoNetworkText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppString*> static T& m_PermissionsDenied() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppString*> static T& m_ExitText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Loader*))(Il2CppBase() + 0x3D61A0))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D622C))(0);
	}
	template <typename T = void*> T get_State() {
		return ((T (*)(Loader*))(Il2CppBase() + 0x3D63D4))(this);
	}
	template <typename T = void> T set_State(void* value) {
		return ((T (*)(Loader*, void*))(Il2CppBase() + 0x3D63DC))(this, value);
	}
	template <typename T = Il2CppString*> static T get_introText() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D63E4))(0);
	}
	template <typename T = Il2CppString*> static T get_dataDownloadErrorText() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D64F4))(0);
	}
	template <typename T = Il2CppString*> static T get_dataErrorText() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D6608))(0);
	}
	template <typename T = Il2CppString*> static T get_unsupportedDeviceText() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D671C))(0);
	}
	template <typename T = Il2CppString*> static T get_noAndroidDeviceText() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D6830))(0);
	}
	template <typename T = Il2CppString*> static T get_noStorageDeviceText() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D6944))(0);
	}
	template <typename T = Il2CppString*> static T get_noNetworkText() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D6A58))(0);
	}
	template <typename T = Il2CppString*> static T get_permissionsDeniedText() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D6B6C))(0);
	}
	template <typename T = Il2CppString*> static T get_exitText() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D6C80))(0);
	}
	template <typename T = void*> T Start() {
		return ((T (*)(Loader*))(Il2CppBase() + 0x3D6D94))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Loader*))(Il2CppBase() + 0x3D6E40))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(Loader*))(Il2CppBase() + 0x3D72CC))(this);
	}
	template <typename T = void> T DrawQuad(Il2CppRect position, Il2CppColor color) {
		return ((T (*)(Loader*, Il2CppRect, Il2CppColor))(Il2CppBase() + 0x3D88A8))(this, position, color);
	}
	template <typename T = void> T Gui_ConfirmDownloadDialog(int32_t inWidth, int32_t inHeight) {
		return ((T (*)(Loader*, int32_t, int32_t))(Il2CppBase() + 0x3D78E0))(this, inWidth, inHeight);
	}
	template <typename T = void> T Gui_ShowErrorDialog(int32_t inWidth, int32_t inHeight, Il2CppString* inErrorlabel) {
		return ((T (*)(Loader*, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x3D7CBC))(this, inWidth, inHeight, inErrorlabel);
	}
	template <typename T = void> T Gui_ExitDialog(int32_t inWidth, int32_t inHeight) {
		return ((T (*)(Loader*, int32_t, int32_t))(Il2CppBase() + 0x3D80A8))(this, inWidth, inHeight);
	}
	template <typename T = bool> T PressedConfirmButton() {
		return ((T (*)(Loader*))(Il2CppBase() + 0x3D8A90))(this);
	}
	template <typename T = bool> T PressedDeclineButton() {
		return ((T (*)(Loader*))(Il2CppBase() + 0x3D712C))(this);
	}
	template <typename T = bool> T IsStoragePermissionRequired() {
		return ((T (*)(Loader*))(Il2CppBase() + 0x3D8CA0))(this);
	}
	template <typename T = void*> T GetDataFileStatus() {
		return ((T (*)(Loader*))(Il2CppBase() + 0x3D6F60))(this);
	}
	template <typename T = void> T DownloadData() {
		return ((T (*)(Loader*))(Il2CppBase() + 0x3D8BD0))(this);
	}
	template <typename T = void> T DataDownloaded(bool inWithEmpty) {
		return ((T (*)(Loader*, bool))(Il2CppBase() + 0x3D70DC))(this, inWithEmpty);
	}
	template <typename T = void*> T LoadScene(Il2CppString* scene, bool inWithEmpty) {
		return ((T (*)(Loader*, Il2CppString*, bool))(Il2CppBase() + 0x3D8F58))(this, scene, inWithEmpty);
	}
	template <typename T = void> T InitButtonStyle(void* labelStyle, int32_t surroundingQuadH, int32_t surroundingQuadW) {
		return ((T (*)(Loader*, void*, int32_t, int32_t))(Il2CppBase() + 0x3D7860))(this, labelStyle, surroundingQuadH, surroundingQuadW);
	}
};
