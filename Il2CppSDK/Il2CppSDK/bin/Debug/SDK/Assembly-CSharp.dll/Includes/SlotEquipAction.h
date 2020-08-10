#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SlotEquipAction
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& m_ItemID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_TeamIdx() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_SlotIdx() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_Equip() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor(void* inUserID, int32_t itemID, int32_t teamIdx, int32_t slotIdx, bool equip) {
		return ((T (*)(SlotEquipAction*, void*, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x246C48))(this, inUserID, itemID, teamIdx, slotIdx, equip);
	}
	template <typename T = void*> T GetCloudAsyncOp() {
		return ((T (*)(SlotEquipAction*))(Il2CppBase() + 0x246C88))(this);
	}
	template <typename T = void> T OnSuccess() {
		return ((T (*)(SlotEquipAction*))(Il2CppBase() + 0x246D7C))(this);
	}
};
