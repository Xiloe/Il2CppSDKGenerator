#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Game
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78690);
	}
	// Fields
	template <typename T = void*> T& DevicePerformance() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& PlayerPersistentInfo() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& MissionResultData() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& GameplayType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& MissionType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& MissionSubtype() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& Difficulty() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& StandaloneMission() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& PlayerRankOverride() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& MoneyOverride() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& GoldOverride() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<void*>*> T& ItemsOverride() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<void*>*> T& WeaponsOverride() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<void*>*> T& WeaponUpgrades() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<void*>*> T& Upgrades() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& EnemyAutoSpawn() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& PlayerInvincible() {
		return *(T*)((uintptr_t)this + 0x4D);
	}
	template <typename T = bool> T& SimulateFPSMissions() {
		return *(T*)((uintptr_t)this + 0x4E);
	}
	template <typename T = bool> T& SaveProgress() {
		return *(T*)((uintptr_t)this + 0x4F);
	}
	template <typename T = bool> T& DeleteProgress() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& DeleteProgressConfirm() {
		return *(T*)((uintptr_t)this + 0x51);
	}
	template <typename T = int32_t> static T& m_TextID_Reward_Caption() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& m_TextID_Reward_Message() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> T& m_Advertisement() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& _CurrentLevel() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _CurrentGameZone() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& m_IsHalloween() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& m_IsChristmas() {
		return *(T*)((uintptr_t)this + 0x61);
	}
	template <typename T = bool> T& m_UseChristmasMask() {
		return *(T*)((uintptr_t)this + 0x62);
	}
	template <typename T = int32_t> T& _Score() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = void*> T& _GameState() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = void*> T& _GameType() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& LeaderBoardID() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& _CanHeal() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = void*> T& GameDifficulty() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& gpadConnectedCached() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& LastTimeGpadCheck() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = void*> T& _CurrentConfig() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& m_Focused() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T& GAMEPAD_BLACKLIST() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& loadingScreens() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& MissionCounter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = bool> T& NVidiaShiledCached() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& IsXperiaPlay() {
		return *(T*)((uintptr_t)this + 0x91);
	}
	template <typename T = bool> T& KeypadSlided() {
		return *(T*)((uintptr_t)this + 0x92);
	}
	template <typename T = void*> static T& f__am$cache2E() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = void*> static T& f__am$cache2F() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Game*))(Il2CppBase() + 0x3232C8))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x3234F4))(0);
	}
	template <typename T = void*> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x310B08))(0);
	}
	template <typename T = void> static T set_Instance(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x323634))(0, value);
	}
	template <typename T = void*> static T get_Ads() {
		return ((T (*)(void *))(Il2CppBase() + 0x3236E8))(0);
	}
	template <typename T = int32_t> static T get_MissionCounter() {
		return ((T (*)(void *))(Il2CppBase() + 0x323794))(0);
	}
	template <typename T = void> static T set_MissionCounter(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x323844))(0, value);
	}
	template <typename T = int32_t> T get_Score() {
		return ((T (*)(Game*))(Il2CppBase() + 0x3238F8))(this);
	}
	template <typename T = void> T set_Score(int32_t value) {
		return ((T (*)(Game*, int32_t))(Il2CppBase() + 0x323900))(this, value);
	}
	template <typename T = bool> T get_CanHeal() {
		return ((T (*)(Game*))(Il2CppBase() + 0x323908))(this);
	}
	template <typename T = void> T set_CanHeal(bool value) {
		return ((T (*)(Game*, bool))(Il2CppBase() + 0x323910))(this, value);
	}
	template <typename T = Il2CppString*> T get_CurrentLevel() {
		return ((T (*)(Game*))(Il2CppBase() + 0x323918))(this);
	}
	template <typename T = void> T set_CurrentLevel(Il2CppString* value) {
		return ((T (*)(Game*, Il2CppString*))(Il2CppBase() + 0x323920))(this, value);
	}
	template <typename T = int32_t> T get_CurrentGameZone() {
		return ((T (*)(Game*))(Il2CppBase() + 0x323928))(this);
	}
	template <typename T = void> T set_CurrentGameZone(int32_t value) {
		return ((T (*)(Game*, int32_t))(Il2CppBase() + 0x323930))(this, value);
	}
	template <typename T = void*> T get_GameState() {
		return ((T (*)(Game*))(Il2CppBase() + 0x323938))(this);
	}
	template <typename T = void> T set_GameState(void* value) {
		return ((T (*)(Game*, void*))(Il2CppBase() + 0x323940))(this, value);
	}
	template <typename T = void*> T get_GameType() {
		return ((T (*)(Game*))(Il2CppBase() + 0x323948))(this);
	}
	template <typename T = float> T get_DontHealTime() {
		return ((T (*)(Game*))(Il2CppBase() + 0x323950))(this);
	}
	template <typename T = float> T get_HealingModificator() {
		return ((T (*)(Game*))(Il2CppBase() + 0x32395C))(this);
	}
	template <typename T = bool> T get_IsHalloween() {
		return ((T (*)(Game*))(Il2CppBase() + 0x323968))(this);
	}
	template <typename T = bool> T get_IsChristmas() {
		return ((T (*)(Game*))(Il2CppBase() + 0x323970))(this);
	}
	template <typename T = bool> T get_UseChristmasMask() {
		return ((T (*)(Game*))(Il2CppBase() + 0x323978))(this);
	}
	template <typename T = bool> T get_NVidiaShiledCached() {
		return ((T (*)(Game*))(Il2CppBase() + 0x323980))(this);
	}
	template <typename T = void> T set_NVidiaShiledCached(bool value) {
		return ((T (*)(Game*, bool))(Il2CppBase() + 0x323988))(this, value);
	}
	template <typename T = bool> T get_IsXperiaPlay() {
		return ((T (*)(Game*))(Il2CppBase() + 0x323990))(this);
	}
	template <typename T = void> T set_IsXperiaPlay(bool value) {
		return ((T (*)(Game*, bool))(Il2CppBase() + 0x323998))(this, value);
	}
	template <typename T = bool> T get_KeypadSlided() {
		return ((T (*)(Game*))(Il2CppBase() + 0x3239A0))(this);
	}
	template <typename T = void> T set_KeypadSlided(bool value) {
		return ((T (*)(Game*, bool))(Il2CppBase() + 0x3239A8))(this, value);
	}
	template <typename T = Il2CppString*> T get_LoadingScreen() {
		return ((T (*)(Game*))(Il2CppBase() + 0x3239B0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Game*))(Il2CppBase() + 0x323C54))(this);
	}
	template <typename T = void*> T InitGameCenter() {
		return ((T (*)(Game*))(Il2CppBase() + 0x32458C))(this);
	}
	template <typename T = void> T InitFirebase() {
		return ((T (*)(Game*))(Il2CppBase() + 0x324618))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Game*))(Il2CppBase() + 0x32482C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(Game*))(Il2CppBase() + 0x324F98))(this);
	}
	template <typename T = bool> static T IsHDResolution() {
		return ((T (*)(void *))(Il2CppBase() + 0x325088))(0);
	}
	template <typename T = void> T Save_Save() {
		return ((T (*)(Game*))(Il2CppBase() + 0x3251A0))(this);
	}
	template <typename T = void> T Save_Clear() {
		return ((T (*)(Game*))(Il2CppBase() + 0x3253CC))(this);
	}
	template <typename T = void> T Save_Load() {
		return ((T (*)(Game*))(Il2CppBase() + 0x325784))(this);
	}
	template <typename T = bool> T IsResumePossible(void* gameType) {
		return ((T (*)(Game*, void*))(Il2CppBase() + 0x3258E8))(this, gameType);
	}
	template <typename T = bool> T UsePumpkins() {
		return ((T (*)(Game*))(Il2CppBase() + 0x310BB8))(this);
	}
	template <typename T = bool> T UseChristmasMasks() {
		return ((T (*)(Game*))(Il2CppBase() + 0x310CB0))(this);
	}
	template <typename T = void> T LoadMainMenu(bool inForce) {
		return ((T (*)(Game*, bool))(Il2CppBase() + 0x3259F0))(this, inForce);
	}
	template <typename T = Il2CppString*> static T get_MainMenuLevelName() {
		return ((T (*)(void *))(Il2CppBase() + 0x323BDC))(0);
	}
	template <typename T = void> T StartNewGame(void* difficulty) {
		return ((T (*)(Game*, void*))(Il2CppBase() + 0x325C94))(this, difficulty);
	}
	template <typename T = void> T StartSaleScreens() {
		return ((T (*)(Game*))(Il2CppBase() + 0x325DEC))(this);
	}
	template <typename T = void> T LoadLevel(Il2CppString* level) {
		return ((T (*)(Game*, Il2CppString*))(Il2CppBase() + 0x325DF0))(this, level);
	}
	template <typename T = void*> T LoadScene(Il2CppString* scene) {
		return ((T (*)(Game*, Il2CppString*))(Il2CppBase() + 0x325BE4))(this, scene);
	}
	template <typename T = void> T TryToCleanSomeMemory() {
		return ((T (*)(Game*))(Il2CppBase() + 0x325F10))(this);
	}
	template <typename T = void> T ClearInstances() {
		return ((T (*)(Game*))(Il2CppBase() + 0x325F38))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(Game*))(Il2CppBase() + 0x326E58))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(Game*))(Il2CppBase() + 0x327014))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Game*))(Il2CppBase() + 0x3270E0))(this);
	}
	template <typename T = void> T OnApplicationQuit() {
		return ((T (*)(Game*))(Il2CppBase() + 0x3270E8))(this);
	}
	template <typename T = Il2CppString*> static T CurrentJoystickName() {
		return ((T (*)(void *))(Il2CppBase() + 0x3270EC))(0);
	}
	template <typename T = bool> static T IsGamepadConnected() {
		return ((T (*)(void *))(Il2CppBase() + 0x327298))(0);
	}
	template <typename T = bool> T IsGamepadConnectedCached() {
		return ((T (*)(Game*))(Il2CppBase() + 0x327338))(this);
	}
	template <typename T = void> T ViewOpened(Il2CppString* message) {
		return ((T (*)(Game*, Il2CppString*))(Il2CppBase() + 0x327438))(this, message);
	}
	template <typename T = void> T ViewClosed(Il2CppString* message) {
		return ((T (*)(Game*, Il2CppString*))(Il2CppBase() + 0x32743C))(this, message);
	}
	template <typename T = void> static T AddPrizeReward(int32_t reward, void* prizeType) {
		return ((T (*)(void *, int32_t, void*))(Il2CppBase() + 0x327440))(0, reward, prizeType);
	}
	template <typename T = bool> static T DetectXperiaPlayModel() {
		return ((T (*)(void *))(Il2CppBase() + 0x3242A8))(0);
	}
	template <typename T = void> T InitAndroidConfigLink() {
		return ((T (*)(Game*))(Il2CppBase() + 0x324B08))(this);
	}
	template <typename T = void*> T CheckForPhoneSlidedStatus() {
		return ((T (*)(Game*))(Il2CppBase() + 0x324EF4))(this);
	}
	template <typename T = void> T OnApplicationFocus(bool focus) {
		return ((T (*)(Game*, bool))(Il2CppBase() + 0x3276E0))(this, focus);
	}
	template <typename T = void> T OnApplicationPause(bool pause) {
		return ((T (*)(Game*, bool))(Il2CppBase() + 0x3276E8))(this, pause);
	}
	template <typename T = void> T InitLogging() {
		return ((T (*)(Game*))(Il2CppBase() + 0x3242A4))(this);
	}
	template <typename T = void> T UpdateLogging() {
		return ((T (*)(Game*))(Il2CppBase() + 0x3270E4))(this);
	}
	template <typename T = void> static T InitFirebasem__18(void* task) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3276EC))(0, task);
	}
	template <typename T = void> static T InitFirebasem__19(void* sender, void* args) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x327910))(0, sender, args);
	}
};
