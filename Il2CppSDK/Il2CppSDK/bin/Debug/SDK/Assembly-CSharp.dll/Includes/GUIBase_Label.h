#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GUIBaseLabel
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& m_TextID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_TextIDGenerated() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& m_Text() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& m_TextDyn() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& m_TextGenerated() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& m_FontName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_FontXXX() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_AnchorPoint() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_AnchorPointGen() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_Alignment() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& m_AlignmentGen() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& m_Widget() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_LineSpace2() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_LineSpaceGenerated() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector2> T& m_LineSize() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_RegenerationNeeded() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& m_UseFontExGen() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GUIBaseLabel*))(Il2CppBase() + 0x35CD34))(this);
	}
	template <typename T = Il2CppString*> T get_text() {
		return ((T (*)(GUIBaseLabel*))(Il2CppBase() + 0x35CE34))(this);
	}
	template <typename T = bool> T get_isValid() {
		return ((T (*)(GUIBaseLabel*))(Il2CppBase() + 0x35CE5C))(this);
	}
	template <typename T = Il2CppVector2> T get_textSize() {
		return ((T (*)(GUIBaseLabel*))(Il2CppBase() + 0x35D064))(this);
	}
	template <typename T = Il2CppVector2> T get_lineSize() {
		return ((T (*)(GUIBaseLabel*))(Il2CppBase() + 0x35D570))(this);
	}
	template <typename T = float> T get_lineSpace() {
		return ((T (*)(GUIBaseLabel*))(Il2CppBase() + 0x35D584))(this);
	}
	template <typename T = void*> T get_alignment() {
		return ((T (*)(GUIBaseLabel*))(Il2CppBase() + 0x35D59C))(this);
	}
	template <typename T = void*> T get_Widget() {
		return ((T (*)(GUIBaseLabel*))(Il2CppBase() + 0x35D5A4))(this);
	}
	template <typename T = bool> T get_useFontEx() {
		return ((T (*)(GUIBaseLabel*))(Il2CppBase() + 0x35D5AC))(this);
	}
	template <typename T = void*> T get_font() {
		return ((T (*)(GUIBaseLabel*))(Il2CppBase() + 0x35CF90))(this);
	}
	template <typename T = void*> T get_fontTexture() {
		return ((T (*)(GUIBaseLabel*))(Il2CppBase() + 0x35D690))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GUIBaseLabel*))(Il2CppBase() + 0x35D8E4))(this);
	}
	template <typename T = bool> T Callback(void* type) {
		return ((T (*)(GUIBaseLabel*, void*))(Il2CppBase() + 0x35DAB4))(this, type);
	}
	template <typename T = void> T RegenerateSprites() {
		return ((T (*)(GUIBaseLabel*))(Il2CppBase() + 0x35DB54))(this);
	}
	template <typename T = void> T SetNewText(Il2CppString* inText) {
		return ((T (*)(GUIBaseLabel*, Il2CppString*))(Il2CppBase() + 0x355DE8))(this, inText);
	}
	template <typename T = void> T SetNewText_1(int32_t inTextID) {
		return ((T (*)(GUIBaseLabel*, int32_t))(Il2CppBase() + 0x356C90))(this, inTextID);
	}
	template <typename T = Il2CppString*> T GetText() {
		return ((T (*)(GUIBaseLabel*))(Il2CppBase() + 0x35E9D4))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(GUIBaseLabel*))(Il2CppBase() + 0x35E8E4))(this);
	}
	template <typename T = bool> static T IsMultiline(Il2CppString* inText) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x35E81C))(0, inText);
	}
	template <typename T = float> static T GetCurentTextLineWidth(Il2CppString* inText, int32_t inStartIndex, void* inFont) {
		return ((T (*)(void *, Il2CppString*, int32_t, void*))(Il2CppBase() + 0x35EA24))(0, inText, inStartIndex, inFont);
	}
	template <typename T = float> static T GetLineWidth(Il2CppString* subString, void* inFont) {
		return ((T (*)(void *, Il2CppString*, void*))(Il2CppBase() + 0x35EAAC))(0, subString, inFont);
	}
	template <typename T = Il2CppVector2> T GetTextSize() {
		return ((T (*)(GUIBaseLabel*))(Il2CppBase() + 0x35D074))(this);
	}
	template <typename T = bool> T IsDataRegenerationNeaded() {
		return ((T (*)(GUIBaseLabel*))(Il2CppBase() + 0x35E528))(this);
	}
	template <typename T = bool> T GenerateRunTimeData() {
		return ((T (*)(GUIBaseLabel*))(Il2CppBase() + 0x35E530))(this);
	}
	template <typename T = Il2CppVector3> T GetLeftUpPos(Il2CppVector3 inRefPoint) {
		return ((T (*)(GUIBaseLabel*, Il2CppVector3))(Il2CppBase() + 0x35E7B4))(this, inRefPoint);
	}
	template <typename T = Il2CppVector3> T GetLeftUpPos_1(void* inWidget) {
		return ((T (*)(GUIBaseLabel*, void*))(Il2CppBase() + 0x35EF10))(this, inWidget);
	}
	template <typename T = Il2CppVector3> T GetLeftUpPos_2(void* inWidget, Il2CppVector3 inRefPoint, Il2CppVector3 inScale) {
		return ((T (*)(GUIBaseLabel*, void*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x35EC9C))(this, inWidget, inRefPoint, inScale);
	}
	template <typename T = Il2CppVector3> static T SetupCursorForTextAlign(Il2CppVector3 inCursor, Il2CppString* inText, int32_t inStartIndex, void* inAlignment, void* inFont, float inLineBegin, float inMaxlineWidth, float inScale) {
		return ((T (*)(void *, Il2CppVector3, Il2CppString*, int32_t, void*, void*, float, float, float))(Il2CppBase() + 0x35E85C))(0, inCursor, inText, inStartIndex, inAlignment, inFont, inLineBegin, inMaxlineWidth, inScale);
	}
	template <typename T = void> T OnLanguageChanged(Il2CppString* inNewLanguage) {
		return ((T (*)(GUIBaseLabel*, Il2CppString*))(Il2CppBase() + 0x35EFAC))(this, inNewLanguage);
	}
	template <typename T = void> T ChangeFont(void* inNewFont) {
		return ((T (*)(GUIBaseLabel*, void*))(Il2CppBase() + 0x35F12C))(this, inNewFont);
	}
	template <typename T = void*> T GenerateRandomText_Coroutine(int32_t inMinSize, int32_t inMaxSize) {
		return ((T (*)(GUIBaseLabel*, int32_t, int32_t))(Il2CppBase() + 0x35F1BC))(this, inMinSize, inMaxSize);
	}
};
