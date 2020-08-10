#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GUIBaseFontEx
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79084);
	}
	// Fields
	template <typename T = void*> T& m_CharSet() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_Material() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_FontDescriptionFile() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_CorrectionFontSizeScale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> static T& m_ErrorFontHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& m_ErrorFontBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_MissingChars() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_Initialized() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GUIBaseFontEx*))(Il2CppBase() + 0x35A344))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x35A4EC))(0);
	}
	template <typename T = void*> T get_fontMaterial() {
		return ((T (*)(GUIBaseFontEx*))(Il2CppBase() + 0x35A588))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GUIBaseFontEx*))(Il2CppBase() + 0x35A590))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GUIBaseFontEx*))(Il2CppBase() + 0x35A6D4))(this);
	}
	template <typename T = bool> T ProcessFontDescriptionAsset() {
		return ((T (*)(GUIBaseFontEx*))(Il2CppBase() + 0x35A800))(this);
	}
	template <typename T = void> T ParseFNTFile(void* inReader) {
		return ((T (*)(GUIBaseFontEx*, void*))(Il2CppBase() + 0x35A9A0))(this, inReader);
	}
	template <typename T = bool> T GetCharDescription(int32_t inCharacter, void** outWidth, void** outSprite, void** outTexUV, bool inNormalizeTextCoord, bool inFliped, bool inFixHeightForGUI) {
		return ((T (*)(GUIBaseFontEx*, int32_t, void**, void**, void**, bool, bool, bool))(Il2CppBase() + 0x35BEF4))(this, inCharacter, outWidth, outSprite, outTexUV, inNormalizeTextCoord, inFliped, inFixHeightForGUI);
	}
	template <typename T = bool> T GetCharDescriptionNew(int32_t inCharacter, void** outWidth, void** outSprite, void** outTexUV) {
		return ((T (*)(GUIBaseFontEx*, int32_t, void**, void**, void**))(Il2CppBase() + 0x35C50C))(this, inCharacter, outWidth, outSprite, outTexUV);
	}
	template <typename T = bool> T GetCharDescriptionNew_1(int32_t inCharacter, void** outWidth, void** outSprite, void** outTexUV, bool inNormalizeTextCoord, bool inFliped) {
		return ((T (*)(GUIBaseFontEx*, int32_t, void**, void**, void**, bool, bool))(Il2CppBase() + 0x35C538))(this, inCharacter, outWidth, outSprite, outTexUV, inNormalizeTextCoord, inFliped);
	}
	template <typename T = float> T GetFontHeight() {
		return ((T (*)(GUIBaseFontEx*))(Il2CppBase() + 0x35C848))(this);
	}
	template <typename T = float> T GetFontBase() {
		return ((T (*)(GUIBaseFontEx*))(Il2CppBase() + 0x35C974))(this);
	}
	template <typename T = float> T GetCharWidth(int32_t inCharacter) {
		return ((T (*)(GUIBaseFontEx*, int32_t))(Il2CppBase() + 0x35CA98))(this, inCharacter);
	}
	template <typename T = Il2CppVector2> T GetTextSize(Il2CppString* inText) {
		return ((T (*)(GUIBaseFontEx*, Il2CppString*))(Il2CppBase() + 0x35CAEC))(this, inText);
	}
	template <typename T = void*> T GetCharacterInfo(int32_t inCharacter) {
		return ((T (*)(GUIBaseFontEx*, int32_t))(Il2CppBase() + 0x35C3A4))(this, inCharacter);
	}
	template <typename T = void> T ReloadCharDescriptionFile() {
		return ((T (*)(GUIBaseFontEx*))(Il2CppBase() + 0x35A594))(this);
	}
	template <typename T = bool> T Initialize() {
		return ((T (*)(GUIBaseFontEx*))(Il2CppBase() + 0x35C22C))(this);
	}
};
