#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PickupManager
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD787C4);
	}
	// Fields
	template <typename T = void*> static T& m_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<void*>*> T& m_Cache() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<void*>*> T& m_Pickups() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<void*>*> T& m_AutoCollectZones() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<void*, void*>*> T& m_WeaponsData() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_CollLayerMask() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_AmmoInLevel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_Time2DropAmmo() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_MoneyDropRequests() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_AutoCollecting() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_AutoCollectZonesChanged() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = float> T& m_MoneyTimeLimit() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_MoneyRequestsMin() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& m_MoneyRequestsMax() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_AmmoDropRatioMin() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_AmmoDropRatioMax() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PickupManager*))(Il2CppBase() + 0x1F1458))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1F1538))(0);
	}
	template <typename T = void*> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1F0DF0))(0);
	}
	template <typename T = bool> T get_CollectAutomatically() {
		return ((T (*)(PickupManager*))(Il2CppBase() + 0x1F153C))(this);
	}
	template <typename T = void> T set_CollectAutomatically(bool value) {
		return ((T (*)(PickupManager*, bool))(Il2CppBase() + 0x1F1544))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PickupManager*))(Il2CppBase() + 0x1F154C))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(PickupManager*))(Il2CppBase() + 0x1F1924))(this);
	}
	template <typename T = bool> T DropPickup(void* DropEvent, void* Id, Il2CppVector3 Pos) {
		return ((T (*)(PickupManager*, void*, void*, Il2CppVector3))(Il2CppBase() + 0x1F1A40))(this, DropEvent, Id, Pos);
	}
	template <typename T = void*> T SpawnAmmo(void* DropEvent) {
		return ((T (*)(PickupManager*, void*))(Il2CppBase() + 0x1F1DF8))(this, DropEvent);
	}
	template <typename T = void*> T SpawnMoney(void* DropEvent) {
		return ((T (*)(PickupManager*, void*))(Il2CppBase() + 0x1F28D8))(this, DropEvent);
	}
	template <typename T = void> T CollectPickups(void* Comp, float Distance) {
		return ((T (*)(PickupManager*, void*, float))(Il2CppBase() + 0x1F2D04))(this, Comp, Distance);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PickupManager*))(Il2CppBase() + 0x1F2F5C))(this);
	}
	template <typename T = void> T OnEndOfMission() {
		return ((T (*)(PickupManager*))(Il2CppBase() + 0x1F3198))(this);
	}
	template <typename T = void> T RegisterAutoCollectZone(void* Zone) {
		return ((T (*)(PickupManager*, void*))(Il2CppBase() + 0x1F0EA0))(this, Zone);
	}
	template <typename T = void> T UnregisterAutoCollectZone(void* Zone) {
		return ((T (*)(PickupManager*, void*))(Il2CppBase() + 0x1F1050))(this, Zone);
	}
	template <typename T = void> T UpdatePickupsAutoCollectStatus() {
		return ((T (*)(PickupManager*))(Il2CppBase() + 0x1F3194))(this);
	}
	template <typename T = bool> T IsInAutoCollectZone(Il2CppVector3 Pos) {
		return ((T (*)(PickupManager*, Il2CppVector3))(Il2CppBase() + 0x1F2A7C))(this, Pos);
	}
};
