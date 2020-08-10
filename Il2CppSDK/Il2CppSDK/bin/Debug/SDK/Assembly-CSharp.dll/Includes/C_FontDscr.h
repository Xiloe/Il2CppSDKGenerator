#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CFontDscr
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> T& m_CharTable() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_CharMaxWidth() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_IsInitialized() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_CharLookUpTable() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CFontDscr*))(Il2CppBase() + 0x359FF4))(this);
	}
	template <typename T = void> T SetCharMaxWidth(int32_t maxWidth) {
		return ((T (*)(CFontDscr*, int32_t))(Il2CppBase() + 0x35A014))(this, maxWidth);
	}
	template <typename T = void> T AddChar(int32_t cIdx, float width, float cx, float cy, float cw, float ch) {
		return ((T (*)(CFontDscr*, int32_t, float, float, float, float, float))(Il2CppBase() + 0x35A01C))(this, cIdx, width, cx, cy, cw, ch);
	}
	template <typename T = float> T GetCharWidth(int32_t cIdx) {
		return ((T (*)(CFontDscr*, int32_t))(Il2CppBase() + 0x3596B0))(this, cIdx);
	}
	template <typename T = float> T GetCharHeight(int32_t cIdx) {
		return ((T (*)(CFontDscr*, int32_t))(Il2CppBase() + 0x3598A8))(this, cIdx);
	}
	template <typename T = bool> T GetCharDscr(int32_t cIdx, void** width, void* inTexPos, void* inTexSize) {
		return ((T (*)(CFontDscr*, int32_t, void**, void*, void*))(Il2CppBase() + 0x359A88))(this, cIdx, width, inTexPos, inTexSize);
	}
	template <typename T = bool> T GetTextSize(Il2CppString* inText, void** outSize, bool inTreatSpecialChars, char inMissingChar) {
		return ((T (*)(CFontDscr*, Il2CppString*, void**, bool, char))(Il2CppBase() + 0x359CB8))(this, inText, outSize, inTreatSpecialChars, inMissingChar);
	}
	template <typename T = bool> T Initialize() {
		return ((T (*)(CFontDscr*))(Il2CppBase() + 0x35A1A4))(this);
	}
};
