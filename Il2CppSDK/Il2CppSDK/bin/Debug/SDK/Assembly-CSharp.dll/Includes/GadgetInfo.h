#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GadgetInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_GadgetButton() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_GadgetImage() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_GadgetCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& m_OrigPos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_Instances() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GadgetInfo*))(Il2CppBase() + 0x3AB798))(this);
	}
};
