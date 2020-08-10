#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CSlot
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_ItemId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_SlotView() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_Button() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_Locked() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_Team() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CSlot*))(Il2CppBase() + 0x37B110))(this);
	}
};
