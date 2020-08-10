#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CustomControl
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& m_Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_WidgetDummy() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_Transform() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& m_TempOffset() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_OptionsPos() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CustomControl*))(Il2CppBase() + 0x36E79C))(this);
	}
};
