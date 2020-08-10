#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiHUD
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78794);
	}
	// Fields
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& Initialised() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Last100msUpdate() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Last200msUpdate() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_Mission() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_PlayingCutscene() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> static T& m_PivotMain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& m_LayoutMain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& s_PivotMainName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> static T& s_LayoutMainName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = bool> static T& s_VirtualJoystickEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = bool> static T& Disabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15);
	}
	template <typename T = int32_t> static T& deadCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& hudCrosshair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = void*> static T& hudRadar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& hudWeaponSelector() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = void*> static T& hudMoveControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& hudActions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = void*> static T& hudPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& hudMessages() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = void*> static T& hudIndicators() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& hudContest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = void*> static T& hudGadgets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& hudCombatInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = void*> static T& hudArena() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = void*> static T& hudIngameBuy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = void*> static T& hudTutorial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = void*> static T& hudDebug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = Il2CppArray<void*>*> T& m_HudComponents() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& IsHidden() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x37C8B0))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x37C8B8))(0);
	}
	template <typename T = bool> T get_IsHidden() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x37C974))(this);
	}
	template <typename T = void> T set_IsHidden(bool value) {
		return ((T (*)(GuiHUD*, bool))(Il2CppBase() + 0x37C97C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x37C984))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x37D450))(this);
	}
	template <typename T = void> T Init(void* mission) {
		return ((T (*)(GuiHUD*, void*))(Il2CppBase() + 0x37D66C))(this, mission);
	}
	template <typename T = void> T SetDefaultVisibility() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x37DBA0))(this);
	}
	template <typename T = void*> T WeaponID(int32_t index) {
		return ((T (*)(GuiHUD*, int32_t))(Il2CppBase() + 0x37DDF8))(this, index);
	}
	template <typename T = void*> T ItemID(int32_t index) {
		return ((T (*)(GuiHUD*, int32_t))(Il2CppBase() + 0x37DECC))(this, index);
	}
	template <typename T = bool> T FingerIdInUse(int32_t fingerId) {
		return ((T (*)(GuiHUD*, int32_t))(Il2CppBase() + 0x37DFA0))(this, fingerId);
	}
	template <typename T = void> T ReleaseFinger(void* touch) {
		return ((T (*)(GuiHUD*, void*))(Il2CppBase() + 0x37E12C))(this, touch);
	}
	template <typename T = void> T SetWeapons(Il2CppList<void*>* weapons) {
		return ((T (*)(GuiHUD*, Il2CppList<void*>*))(Il2CppBase() + 0x37E2B4))(this, weapons);
	}
	template <typename T = void> T SetGadgets(Il2CppList<void*>* gadgets) {
		return ((T (*)(GuiHUD*, Il2CppList<void*>*))(Il2CppBase() + 0x37E3C8))(this, gadgets);
	}
	template <typename T = void> T SelectNextGadget() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x37E4DC))(this);
	}
	template <typename T = void> T SelectPrevGadget() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x37E5E8))(this);
	}
	template <typename T = int32_t> T GetSelectedGadget() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x37E6F4))(this);
	}
	template <typename T = void> T StoreControlsOrigPositions() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x37DC40))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x37F190))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x37F2D8))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x37F4D8))(this);
	}
	template <typename T = bool> T NoTouchForSec(float inactivityTime) {
		return ((T (*)(GuiHUD*, float))(Il2CppBase() + 0x37F924))(this, inactivityTime);
	}
	template <typename T = void> T EnableActionControls(bool on) {
		return ((T (*)(GuiHUD*, bool))(Il2CppBase() + 0x37FAA4))(this, on);
	}
	template <typename T = void> T EnableControlsTutorial(bool on) {
		return ((T (*)(GuiHUD*, bool))(Il2CppBase() + 0x37FC58))(this, on);
	}
	template <typename T = void> T OnCurrentWeaponChanged(void* Weapon) {
		return ((T (*)(GuiHUD*, void*))(Il2CppBase() + 0x37FE64))(this, Weapon);
	}
	template <typename T = void> T JoystickBaseShow(Il2CppVector2 center) {
		return ((T (*)(GuiHUD*, Il2CppVector2))(Il2CppBase() + 0x37FF78))(this, center);
	}
	template <typename T = void> T JoystickBaseHide() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x3800D8))(this);
	}
	template <typename T = void> T JoystickDown(Il2CppVector2 center) {
		return ((T (*)(GuiHUD*, Il2CppVector2))(Il2CppBase() + 0x380228))(this, center);
	}
	template <typename T = void> T JoystickUpdate(Il2CppVector2 center) {
		return ((T (*)(GuiHUD*, Il2CppVector2))(Il2CppBase() + 0x380388))(this, center);
	}
	template <typename T = void> T JoystickUp() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x3804E8))(this);
	}
	template <typename T = void> T SwitchToIngameMenu() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x380638))(this);
	}
	template <typename T = void> T SwitchBackFromIngameMenu() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x380960))(this);
	}
	template <typename T = void> T SwitchToFirstHelp() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x380AD0))(this);
	}
	template <typename T = void> T SwitchBackFromFirstHelp() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x37C608))(this);
	}
	template <typename T = void> T UpdateControlsPosition() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x370028))(this);
	}
	template <typename T = void> T HideAllMessages() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x380C94))(this);
	}
	template <typename T = void> T HideWeaponControls() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x380DA0))(this);
	}
	template <typename T = void> T ShowWeaponControls() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x380F10))(this);
	}
	template <typename T = void> T PlayCutsceneBegin() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x381080))(this);
	}
	template <typename T = void> T PlayCutsceneEnd() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x38108C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x381098))(this);
	}
	template <typename T = void> T HandleAction(void* a) {
		return ((T (*)(GuiHUD*, void*))(Il2CppBase() + 0x3811DC))(this, a);
	}
	template <typename T = void> T ShowAchievementNotify(Il2CppString* text) {
		return ((T (*)(GuiHUD*, Il2CppString*))(Il2CppBase() + 0x381324))(this, text);
	}
	template <typename T = void> T OnAgentHit(void* agent, void* bodyPart, bool bodyPartRemoved) {
		return ((T (*)(GuiHUD*, void*, void*, bool))(Il2CppBase() + 0x38141C))(this, agent, bodyPart, bodyPartRemoved);
	}
	template <typename T = void> T OnAgentDeath(void* agent, void* bodyPart, bool bodyPartRemoved) {
		return ((T (*)(GuiHUD*, void*, void*, bool))(Il2CppBase() + 0x381D60))(this, agent, bodyPart, bodyPartRemoved);
	}
	template <typename T = void> T OnAmmoCollected(void* weapon, int32_t ammo) {
		return ((T (*)(GuiHUD*, void*, int32_t))(Il2CppBase() + 0x3820EC))(this, weapon, ammo);
	}
	template <typename T = void> T ShowMessage(void* type, int32_t messageID, bool dontDisappear, float time) {
		return ((T (*)(GuiHUD*, void*, int32_t, bool, float))(Il2CppBase() + 0x3820F0))(this, type, messageID, dontDisappear, time);
	}
	template <typename T = void> T ShowMessage_1(void* type, Il2CppString* message, bool dontDisappear, float time) {
		return ((T (*)(GuiHUD*, void*, Il2CppString*, bool, float))(Il2CppBase() + 0x382228))(this, type, message, dontDisappear, time);
	}
	template <typename T = void> T RegisterRadarObject(void* obj, void* objType) {
		return ((T (*)(GuiHUD*, void*, void*))(Il2CppBase() + 0x382360))(this, obj, objType);
	}
	template <typename T = void> T HighlightRadarObject(void* obj, bool highlight) {
		return ((T (*)(GuiHUD*, void*, bool))(Il2CppBase() + 0x38243C))(this, obj, highlight);
	}
	template <typename T = void> T UnregisterRadarObject(void* obj, void* objType) {
		return ((T (*)(GuiHUD*, void*, void*))(Il2CppBase() + 0x382518))(this, obj, objType);
	}
	template <typename T = void> T SetMissionType(void* missionType) {
		return ((T (*)(GuiHUD*, void*))(Il2CppBase() + 0x3825F4))(this, missionType);
	}
	template <typename T = void> T SetArenaScore(int32_t score) {
		return ((T (*)(GuiHUD*, int32_t))(Il2CppBase() + 0x382708))(this, score);
	}
	template <typename T = void> T ShowArenaScore(bool show) {
		return ((T (*)(GuiHUD*, bool))(Il2CppBase() + 0x382944))(this, show);
	}
	template <typename T = void> T ShowIngameBuy(void* ingameBuy, void* closeCallback) {
		return ((T (*)(GuiHUD*, void*, void*))(Il2CppBase() + 0x382AA0))(this, ingameBuy, closeCallback);
	}
	template <typename T = void> T SimulateIngameAction() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x382B7C))(this);
	}
	template <typename T = void> T SimulateWeaponSwitch() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x382C74))(this);
	}
	template <typename T = void> T HideIngameBuy() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x382D40))(this);
	}
	template <typename T = void> T SetCounter(int32_t counter) {
		return ((T (*)(GuiHUD*, int32_t))(Il2CppBase() + 0x382E0C))(this, counter);
	}
	template <typename T = void> T ShowCounter(bool show) {
		return ((T (*)(GuiHUD*, bool))(Il2CppBase() + 0x382F20))(this, show);
	}
	template <typename T = void> T SetCounterTime(float seconds) {
		return ((T (*)(GuiHUD*, float))(Il2CppBase() + 0x383034))(this, seconds);
	}
	template <typename T = void> T ShowCarryObjectIcon(bool show) {
		return ((T (*)(GuiHUD*, bool))(Il2CppBase() + 0x383148))(this, show);
	}
	template <typename T = void> T RegisterObjectHP(void* obj) {
		return ((T (*)(GuiHUD*, void*))(Il2CppBase() + 0x38325C))(this, obj);
	}
	template <typename T = void> T UnregisterObjectHP(void* obj) {
		return ((T (*)(GuiHUD*, void*))(Il2CppBase() + 0x383330))(this, obj);
	}
	template <typename T = void> T SetObjectHP(void* obj, float HP, bool highlight) {
		return ((T (*)(GuiHUD*, void*, float, bool))(Il2CppBase() + 0x383404))(this, obj, HP, highlight);
	}
	template <typename T = void> T ShowRepairIndicator(void* obj, bool show) {
		return ((T (*)(GuiHUD*, void*, bool))(Il2CppBase() + 0x3834F4))(this, obj, show);
	}
	template <typename T = void> T ShowTutorial(int32_t index, bool show) {
		return ((T (*)(GuiHUD*, int32_t, bool))(Il2CppBase() + 0x3835D0))(this, index, show);
	}
	template <typename T = bool> T IsHudGadgetsVisible() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x38377C))(this);
	}
	template <typename T = bool> T IsHudTutorialVisible() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x383848))(this);
	}
	template <typename T = void> T HideTutorials() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x383914))(this);
	}
	template <typename T = void> T StartContest(Il2CppArray<void*>* objects, void* callback) {
		return ((T (*)(GuiHUD*, Il2CppArray<void*>*, void*))(Il2CppBase() + 0x383A38))(this, objects, callback);
	}
	template <typename T = void> T StopContest() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x383BF4))(this);
	}
	template <typename T = void*> static T HighlightObject(void* sprite) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x383DA0))(0, sprite);
	}
	template <typename T = void> T OnMissionReset() {
		return ((T (*)(GuiHUD*))(Il2CppBase() + 0x383E50))(this);
	}
};
