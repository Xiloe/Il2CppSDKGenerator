#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TextLine
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& m_StartIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_EndIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector2> T& m_Size() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& m_Offset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_EndOfParagraph() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_NumOfSpaces() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_SpaceWidth() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(TextLine*))(Il2CppBase() + 0x369248))(this);
	}
};
