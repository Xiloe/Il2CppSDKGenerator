#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Mission
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78784);
	}
	// Fields
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<void*>*> T& GameZones() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<void*>*> T& ManagedGameObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& AgentsCache() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& ExplosionCache() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& AchievementID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& LeaderBoardID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_CurrentGuiState() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_MissionSuccessSound() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_MissionFailedSound() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& DisablePause() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& CurrentGameZone() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& NESController() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& m_EndOfMissionActive() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& m_GuiMissionResult() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& ProgressNum() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Mission*))(Il2CppBase() + 0x4015B0))(this);
	}
	template <typename T = bool> T get_MissionIsEnding() {
		return ((T (*)(Mission*))(Il2CppBase() + 0x4016FC))(this);
	}
	template <typename T = int32_t> T get_ProgressNum() {
		return ((T (*)(Mission*))(Il2CppBase() + 0x401704))(this);
	}
	template <typename T = void> T set_ProgressNum(int32_t value) {
		return ((T (*)(Mission*, int32_t))(Il2CppBase() + 0x40170C))(this, value);
	}
	template <typename T = int32_t> T get_GameZoneIndex() {
		return ((T (*)(Mission*))(Il2CppBase() + 0x401714))(this);
	}
	template <typename T = void*> T get_GlobalNESController() {
		return ((T (*)(Mission*))(Il2CppBase() + 0x40187C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Mission*))(Il2CppBase() + 0x401884))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Mission*))(Il2CppBase() + 0x401BB4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Mission*))(Il2CppBase() + 0x402034))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(Mission*))(Il2CppBase() + 0x402114))(this);
	}
	template <typename T = void> T WaitForLogGui() {
		return ((T (*)(Mission*))(Il2CppBase() + 0x402250))(this);
	}
	template <typename T = void*> T PrepareForStart() {
		return ((T (*)(Mission*))(Il2CppBase() + 0x4023C0))(this);
	}
	template <typename T = void> T ShowHelpFirstTime() {
		return ((T (*)(Mission*))(Il2CppBase() + 0x40246C))(this);
	}
	template <typename T = void> T SpawnPlayer() {
		return ((T (*)(Mission*))(Il2CppBase() + 0x402538))(this);
	}
	template <typename T = void*> T FadeInAudio_Corout(float fadeTime, float targetVolume) {
		return ((T (*)(Mission*, float, float))(Il2CppBase() + 0x402B8C))(this, fadeTime, targetVolume);
	}
	template <typename T = void> T Save_Save() {
		return ((T (*)(Mission*))(Il2CppBase() + 0x402C50))(this);
	}
	template <typename T = void> T Save_Load() {
		return ((T (*)(Mission*))(Il2CppBase() + 0x401F24))(this);
	}
	template <typename T = void> T LoadGui() {
		return ((T (*)(Mission*))(Il2CppBase() + 0x401F58))(this);
	}
	template <typename T = void> T StartGui() {
		return ((T (*)(Mission*))(Il2CppBase() + 0x402C84))(this);
	}
	template <typename T = void> T ChangeGuiState(void* newState) {
		return ((T (*)(Mission*, void*))(Il2CppBase() + 0x402864))(this, newState);
	}
	template <typename T = void> T EndOfMission(void* result, void* touchDelegate) {
		return ((T (*)(Mission*, void*, void*))(Il2CppBase() + 0x402F20))(this, result, touchDelegate);
	}
	template <typename T = void*> T _EndOfMission(void* result, void* touchDelegate) {
		return ((T (*)(Mission*, void*, void*))(Il2CppBase() + 0x40321C))(this, result, touchDelegate);
	}
	template <typename T = void> T RestartCheckpoint() {
		return ((T (*)(Mission*))(Il2CppBase() + 0x4032E0))(this);
	}
	template <typename T = void*> T LoadLastSave(float delay) {
		return ((T (*)(Mission*, float))(Il2CppBase() + 0x403324))(this, delay);
	}
	template <typename T = void*> T GetAgentFromCache(void* Type) {
		return ((T (*)(Mission*, void*))(Il2CppBase() + 0x40276C))(this, Type);
	}
	template <typename T = void> T ReturnAgentToCache(void* obj) {
		return ((T (*)(Mission*, void*))(Il2CppBase() + 0x4033E0))(this, obj);
	}
	template <typename T = void> T UnlockNextGameZone() {
		return ((T (*)(Mission*))(Il2CppBase() + 0x4034D8))(this);
	}
	template <typename T = void> T LockPrevGameZone() {
		return ((T (*)(Mission*))(Il2CppBase() + 0x4035F8))(this);
	}
	template <typename T = void> T OnApplicationFocus(bool focus) {
		return ((T (*)(Mission*, bool))(Il2CppBase() + 0x4036E8))(this, focus);
	}
	template <typename T = void> T OnApplicationPause(bool focus) {
		return ((T (*)(Mission*, bool))(Il2CppBase() + 0x403964))(this, focus);
	}
	template <typename T = void> T SendGameEvent(void* inGameEvent) {
		return ((T (*)(Mission*, void*))(Il2CppBase() + 0x403BE0))(this, inGameEvent);
	}
	template <typename T = void> T SendGameEvent_1(Il2CppString* inEventName, void* inState, float inDelay) {
		return ((T (*)(Mission*, Il2CppString*, void*, float))(Il2CppBase() + 0x403CF0))(this, inEventName, inState, inDelay);
	}
	template <typename T = void*> T SendGameEvent_Corutine(Il2CppString* inEventName, void* inState, float inDelay) {
		return ((T (*)(Mission*, Il2CppString*, void*, float))(Il2CppBase() + 0x403C2C))(this, inEventName, inState, inDelay);
	}
};
