#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GUIBaseTextArea
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& m_TextID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& m_Text() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_Alignment() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_LineSpace() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& m_FontName() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector2> T& m_TextScale() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_RegenerateSprites() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_Widget() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_Font() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GUIBaseTextArea*))(Il2CppBase() + 0x367410))(this);
	}
	template <typename T = void*> T get_Widget() {
		return ((T (*)(GUIBaseTextArea*))(Il2CppBase() + 0x3674C8))(this);
	}
	template <typename T = Il2CppString*> T get_text() {
		return ((T (*)(GUIBaseTextArea*))(Il2CppBase() + 0x3674D0))(this);
	}
	template <typename T = float> T get_lineSpace() {
		return ((T (*)(GUIBaseTextArea*))(Il2CppBase() + 0x3674D8))(this);
	}
	template <typename T = void*> T get_alignment() {
		return ((T (*)(GUIBaseTextArea*))(Il2CppBase() + 0x3674E0))(this);
	}
	template <typename T = void*> T get_font() {
		return ((T (*)(GUIBaseTextArea*))(Il2CppBase() + 0x3674E8))(this);
	}
	template <typename T = void*> T get_fontTexture() {
		return ((T (*)(GUIBaseTextArea*))(Il2CppBase() + 0x3674F0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GUIBaseTextArea*))(Il2CppBase() + 0x36772C))(this);
	}
	template <typename T = bool> T Callback(void* type) {
		return ((T (*)(GUIBaseTextArea*, void*))(Il2CppBase() + 0x36796C))(this, type);
	}
	template <typename T = void> T RegenerateSprites() {
		return ((T (*)(GUIBaseTextArea*))(Il2CppBase() + 0x367DD4))(this);
	}
	template <typename T = void> T SetNewText(Il2CppString* inText) {
		return ((T (*)(GUIBaseTextArea*, Il2CppString*))(Il2CppBase() + 0x368FE0))(this, inText);
	}
	template <typename T = void> T SetNewText_1(int32_t inTextID) {
		return ((T (*)(GUIBaseTextArea*, int32_t))(Il2CppBase() + 0x3690AC))(this, inTextID);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(GUIBaseTextArea*))(Il2CppBase() + 0x369180))(this);
	}
	template <typename T = Il2CppList<void*>*> static T GetLines(Il2CppString* inText, void* inFont, void* inAlignment, float inMaxlineWidth, Il2CppVector3 inScale, float inLineSpacePct) {
		return ((T (*)(void *, Il2CppString*, void*, void*, float, Il2CppVector3, float))(Il2CppBase() + 0x36871C))(0, inText, inFont, inAlignment, inMaxlineWidth, inScale, inLineSpacePct);
	}
	template <typename T = int32_t> static T TrimSpaces(Il2CppString* inText, void* inLine, float inSpaceWidth) {
		return ((T (*)(void *, Il2CppString*, void*, float))(Il2CppBase() + 0x36929C))(0, inText, inLine, inSpaceWidth);
	}
	template <typename T = void> T OnLanguageChanged(Il2CppString* inNewLanguage) {
		return ((T (*)(GUIBaseTextArea*, Il2CppString*))(Il2CppBase() + 0x3693A8))(this, inNewLanguage);
	}
};
