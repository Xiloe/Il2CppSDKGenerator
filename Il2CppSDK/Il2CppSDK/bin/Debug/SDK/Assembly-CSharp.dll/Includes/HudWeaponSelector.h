#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HudWeaponSelector
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79144);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> T& m_SelectWeaponDlgt() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_WeaponLayout() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_WeaponButton() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<void*>*> T& m_SelectWeapon() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<void*>*> T& m_OrigSelectWeaponPos() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_GuiSelectedWeaponIndex() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_WeaponWidget() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<void*>*> T& m_SelectionWidgets() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_WaitForEndOfWeaponChange() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<void*>*> T& m_WeaponInventory() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<void*>*> static T& s_WeaponSelectionButtonName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(HudWeaponSelector*))(Il2CppBase() + 0x3BA7D0))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x3BA86C))(0);
	}
	template <typename T = bool> T VisibleOnStart() {
		return ((T (*)(HudWeaponSelector*))(Il2CppBase() + 0x3BAAE8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(HudWeaponSelector*))(Il2CppBase() + 0x3BAAF0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HudWeaponSelector*))(Il2CppBase() + 0x3BB688))(this);
	}
	template <typename T = void> T LateUpdate(float deltaTime) {
		return ((T (*)(HudWeaponSelector*, float))(Il2CppBase() + 0x3BB9F8))(this, deltaTime);
	}
	template <typename T = void> T ShowWidgets(bool on) {
		return ((T (*)(HudWeaponSelector*, bool))(Il2CppBase() + 0x3BC170))(this, on);
	}
	template <typename T = bool> T Enable(void* layer, bool enable) {
		return ((T (*)(HudWeaponSelector*, void*, bool))(Il2CppBase() + 0x3BC468))(this, layer, enable);
	}
	template <typename T = void*> T WeaponID(int32_t index) {
		return ((T (*)(HudWeaponSelector*, int32_t))(Il2CppBase() + 0x3BC4C4))(this, index);
	}
	template <typename T = void> T OnCurrentWeaponChanged(void* Weapon) {
		return ((T (*)(HudWeaponSelector*, void*))(Il2CppBase() + 0x3BB9BC))(this, Weapon);
	}
	template <typename T = void> T SetWeapons(Il2CppList<void*>* weapons) {
		return ((T (*)(HudWeaponSelector*, Il2CppList<void*>*))(Il2CppBase() + 0x3BC6D8))(this, weapons);
	}
	template <typename T = bool> T FingerIdInUse(int32_t fingerId) {
		return ((T (*)(HudWeaponSelector*, int32_t))(Il2CppBase() + 0x3BCB04))(this, fingerId);
	}
	template <typename T = void> T StoreControlsOrigPositions() {
		return ((T (*)(HudWeaponSelector*))(Il2CppBase() + 0x3BCB30))(this);
	}
	template <typename T = void> T UpdateControlsPosition() {
		return ((T (*)(HudWeaponSelector*))(Il2CppBase() + 0x3BCC90))(this);
	}
	template <typename T = void> T HandleAction(void* a) {
		return ((T (*)(HudWeaponSelector*, void*))(Il2CppBase() + 0x3BCEF0))(this, a);
	}
	template <typename T = void> T SimulateWeaponSwitch() {
		return ((T (*)(HudWeaponSelector*))(Il2CppBase() + 0x3BD064))(this);
	}
	template <typename T = int32_t> T WeaponIndex(void* w) {
		return ((T (*)(HudWeaponSelector*, void*))(Il2CppBase() + 0x3BC508))(this, w);
	}
	template <typename T = void> T ClearWaitingOnWeaponChange() {
		return ((T (*)(HudWeaponSelector*))(Il2CppBase() + 0x3BB99C))(this);
	}
	template <typename T = void> T DisableWeaponSelection(bool disable) {
		return ((T (*)(HudWeaponSelector*, bool))(Il2CppBase() + 0x3BCFFC))(this, disable);
	}
	template <typename T = void> T WeaponButtonDelegate() {
		return ((T (*)(HudWeaponSelector*))(Il2CppBase() + 0x3BD068))(this);
	}
	template <typename T = void> T OnWeaponSelectTouchOutside() {
		return ((T (*)(HudWeaponSelector*))(Il2CppBase() + 0x3BD424))(this);
	}
	template <typename T = void> T SelectWeapon(int32_t newWeaponIdx) {
		return ((T (*)(HudWeaponSelector*, int32_t))(Il2CppBase() + 0x3BD260))(this, newWeaponIdx);
	}
	template <typename T = void> T SetWeaponHudInfo(void* Weapon, void* Widget) {
		return ((T (*)(HudWeaponSelector*, void*, void*))(Il2CppBase() + 0x3BC578))(this, Weapon, Widget);
	}
	template <typename T = void> T ShowWeaponsSprites() {
		return ((T (*)(HudWeaponSelector*))(Il2CppBase() + 0x3BC25C))(this);
	}
	template <typename T = void> T HideWeaponsSprites() {
		return ((T (*)(HudWeaponSelector*))(Il2CppBase() + 0x3BC198))(this);
	}
	template <typename T = void> T TouchDelegateWeapon1() {
		return ((T (*)(HudWeaponSelector*))(Il2CppBase() + 0x3BD428))(this);
	}
	template <typename T = void> T TouchDelegateWeapon2() {
		return ((T (*)(HudWeaponSelector*))(Il2CppBase() + 0x3BD430))(this);
	}
	template <typename T = void> T TouchDelegateWeapon3() {
		return ((T (*)(HudWeaponSelector*))(Il2CppBase() + 0x3BD438))(this);
	}
	template <typename T = void> T TouchDelegateWeapon4() {
		return ((T (*)(HudWeaponSelector*))(Il2CppBase() + 0x3BD440))(this);
	}
	template <typename T = void*> static T GetChildByName(void* btn, Il2CppString* name) {
		return ((T (*)(void *, void*, Il2CppString*))(Il2CppBase() + 0xA08EC4))(0, btn, name);
	}
	template <typename T = void> T UpdateAmmoDisplay(void* Weapon, void* Widget) {
		return ((T (*)(HudWeaponSelector*, void*, void*))(Il2CppBase() + 0x3BBB0C))(this, Weapon, Widget);
	}
	template <typename T = void*> T HighlightObject(void* widgets) {
		return ((T (*)(HudWeaponSelector*, void*))(Il2CppBase() + 0x3BD448))(this, widgets);
	}
	template <typename T = void> static T ResetHighlight(void* widgets) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3BD4F0))(0, widgets);
	}
	template <typename T = void> T UpdateAllAmmo() {
		return ((T (*)(HudWeaponSelector*))(Il2CppBase() + 0x3BBA80))(this);
	}
};
