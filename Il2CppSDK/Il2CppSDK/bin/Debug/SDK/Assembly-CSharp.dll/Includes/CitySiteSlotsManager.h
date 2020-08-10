#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CitySiteSlotsManager
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78B64);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& m_MissionSlots() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<void*>*> T& availableSlots() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_Random() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CitySiteSlotsManager*))(Il2CppBase() + 0x2BD990))(this);
	}
	template <typename T = void> T Init(void* scene) {
		return ((T (*)(CitySiteSlotsManager*, void*))(Il2CppBase() + 0x2BDADC))(this, scene);
	}
	template <typename T = void*> T OccupyMoneySlot(Il2CppString* slotName) {
		return ((T (*)(CitySiteSlotsManager*, Il2CppString*))(Il2CppBase() + 0x2C1020))(this, slotName);
	}
	template <typename T = void*> T OccupyChopperSlot(Il2CppString* slotName) {
		return ((T (*)(CitySiteSlotsManager*, Il2CppString*))(Il2CppBase() + 0x2BEB9C))(this, slotName);
	}
	template <typename T = void*> T OccupySpecialSlot(Il2CppString* slotName) {
		return ((T (*)(CitySiteSlotsManager*, Il2CppString*))(Il2CppBase() + 0x2BDE98))(this, slotName);
	}
	template <typename T = void*> T ForceOccupySiteSlot(int32_t slotUid) {
		return ((T (*)(CitySiteSlotsManager*, int32_t))(Il2CppBase() + 0x2C0CF8))(this, slotUid);
	}
	template <typename T = void*> T OccupySiteSlot(Il2CppString* slotName, int32_t storyId, void* slotType) {
		return ((T (*)(CitySiteSlotsManager*, Il2CppString*, int32_t, void*))(Il2CppBase() + 0x2C0560))(this, slotName, storyId, slotType);
	}
	template <typename T = void> T FreeOccupiedSlot(void* slot) {
		return ((T (*)(CitySiteSlotsManager*, void*))(Il2CppBase() + 0x2BF04C))(this, slot);
	}
};
