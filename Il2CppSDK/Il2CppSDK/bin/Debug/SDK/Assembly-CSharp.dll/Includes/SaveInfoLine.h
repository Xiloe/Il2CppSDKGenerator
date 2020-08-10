#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SaveInfoLine
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppColor> T& HIGHLIGHT_COLOR() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppColor> T& DEFAULT_COLOR() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_Line() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_Name() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_LocalValue() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_CloudValue() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor(void* inLine) {
		return ((T (*)(SaveInfoLine*, void*))(Il2CppBase() + 0x1D78A8))(this, inLine);
	}
	template <typename T = Il2CppVector3> T get_spritePos() {
		return ((T (*)(SaveInfoLine*))(Il2CppBase() + 0x1D8338))(this);
	}
	template <typename T = void> T Update(int32_t inTextID, int32_t inVal1, int32_t inVal2, bool inTime) {
		return ((T (*)(SaveInfoLine*, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x1D7D20))(this, inTextID, inVal1, inVal2, inTime);
	}
	template <typename T = void> T Update_1(int32_t inTextID, int32_t inVal1, Il2CppString* inVal2, bool inTime) {
		return ((T (*)(SaveInfoLine*, int32_t, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x1D8014))(this, inTextID, inVal1, inVal2, inTime);
	}
	template <typename T = void> T Show() {
		return ((T (*)(SaveInfoLine*))(Il2CppBase() + 0x1D7C54))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(SaveInfoLine*))(Il2CppBase() + 0x1D8494))(this);
	}
	template <typename T = void> T Update_2(int32_t inTextID, Il2CppString* inVal1, Il2CppString* inVal2, int32_t inHighlight) {
		return ((T (*)(SaveInfoLine*, int32_t, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x1D8380))(this, inTextID, inVal1, inVal2, inHighlight);
	}
};
