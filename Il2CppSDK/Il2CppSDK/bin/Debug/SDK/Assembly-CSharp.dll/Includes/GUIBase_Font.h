#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GUIBaseFont
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD790A4);
	}
	// Fields
	template <typename T = void*> T& m_FontDscr() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_Material() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GUIBaseFont*))(Il2CppBase() + 0x359670))(this);
	}
	template <typename T = void*> T get_fontMaterial() {
		return ((T (*)(GUIBaseFont*))(Il2CppBase() + 0x359680))(this);
	}
	template <typename T = float> T GetCharWidth(int32_t cIdx) {
		return ((T (*)(GUIBaseFont*, int32_t))(Il2CppBase() + 0x359688))(this, cIdx);
	}
	template <typename T = float> T GetCharHeight(int32_t cIdx) {
		return ((T (*)(GUIBaseFont*, int32_t))(Il2CppBase() + 0x359880))(this, cIdx);
	}
	template <typename T = bool> T GetCharDscr(int32_t cIdx, void** width, void* inTexPos, void* inTexSize) {
		return ((T (*)(GUIBaseFont*, int32_t, void**, void*, void*))(Il2CppBase() + 0x359A50))(this, cIdx, width, inTexPos, inTexSize);
	}
	template <typename T = bool> T GetTextSize(Il2CppString* inText, void** inSize, bool inTreatSpecialChars) {
		return ((T (*)(GUIBaseFont*, Il2CppString*, void**, bool))(Il2CppBase() + 0x359C7C))(this, inText, inSize, inTreatSpecialChars);
	}
};
