#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CitySiteSlot
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_EnableSinceStoryId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& m_SlotName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_UID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_Occupied() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CitySiteSlot*))(Il2CppBase() + 0x2C1040))(this);
	}
	template <typename T = void> T OccupySlot() {
		return ((T (*)(CitySiteSlot*))(Il2CppBase() + 0x2C1114))(this);
	}
	template <typename T = void> T FreeSlot() {
		return ((T (*)(CitySiteSlot*))(Il2CppBase() + 0x2C1120))(this);
	}
	template <typename T = Il2CppVector3> T GetPos() {
		return ((T (*)(CitySiteSlot*))(Il2CppBase() + 0x2BDEB8))(this);
	}
	template <typename T = bool> T get_occupied() {
		return ((T (*)(CitySiteSlot*))(Il2CppBase() + 0x2C112C))(this);
	}
};
