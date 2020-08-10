#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IngameBuy
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_BaseCostInMoneyBags() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_WavesToEnableFirstTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_ColldownWaves() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_MappingChange() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_Enabled() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_TriggerActivated() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& m_AngleOK() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = bool> T& m_ImmediateAngleOK() {
		return *(T*)((uintptr_t)this + 0x27);
	}
	template <typename T = bool> T& m_Visible() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_TimeAngleOK() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_CooldownKills() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_StartCooldownKills() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<void*>*> T& m_Icons() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<void*>*> T& m_Powerups() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& m_ActualPowerup() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& m_NESController() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_Description() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<void*>*> T& TextIds() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(IngameBuy*))(Il2CppBase() + 0x3C18C0))(this);
	}
	template <typename T = void> T WaveStart(int32_t wave) {
		return ((T (*)(IngameBuy*, int32_t))(Il2CppBase() + 0x3C19EC))(this, wave);
	}
	template <typename T = void> T WaveFinished(int32_t wave) {
		return ((T (*)(IngameBuy*, int32_t))(Il2CppBase() + 0x3C19F0))(this, wave);
	}
	template <typename T = int32_t> T Description() {
		return ((T (*)(IngameBuy*))(Il2CppBase() + 0x3B3290))(this);
	}
	template <typename T = int32_t> T GetAdditionalDescription() {
		return ((T (*)(IngameBuy*))(Il2CppBase() + 0x3B3298))(this);
	}
	template <typename T = void*> T GetIcon() {
		return ((T (*)(IngameBuy*))(Il2CppBase() + 0x3B31BC))(this);
	}
	template <typename T = void*> T IsBuyPossible() {
		return ((T (*)(IngameBuy*))(Il2CppBase() + 0x3B2ACC))(this);
	}
	template <typename T = int32_t> T GetCost() {
		return ((T (*)(IngameBuy*))(Il2CppBase() + 0x3B2B30))(this);
	}
	template <typename T = int32_t> T GetPPIMoney() {
		return ((T (*)(IngameBuy*))(Il2CppBase() + 0x3B30CC))(this);
	}
	template <typename T = void> T EnableIngameBuy(bool enable) {
		return ((T (*)(IngameBuy*, bool))(Il2CppBase() + 0x3C1B20))(this, enable);
	}
	template <typename T = bool> T NothingToBuy() {
		return ((T (*)(IngameBuy*))(Il2CppBase() + 0x3C1BF0))(this);
	}
	template <typename T = void> T LoadNewIcon(Il2CppString* name) {
		return ((T (*)(IngameBuy*, Il2CppString*))(Il2CppBase() + 0x3C1C24))(this, name);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(IngameBuy*))(Il2CppBase() + 0x3C1E58))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(IngameBuy*))(Il2CppBase() + 0x3C2764))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(IngameBuy*))(Il2CppBase() + 0x3C2854))(this);
	}
	template <typename T = void> T SetCoolDown(float enemiesToKill) {
		return ((T (*)(IngameBuy*, float))(Il2CppBase() + 0x3C25B4))(this, enemiesToKill);
	}
	template <typename T = void> T ApplyBuyCost() {
		return ((T (*)(IngameBuy*))(Il2CppBase() + 0x3C2858))(this);
	}
	template <typename T = void> T IngameBuyFinished(bool buyPressed) {
		return ((T (*)(IngameBuy*, bool))(Il2CppBase() + 0x3C2958))(this, buyPressed);
	}
	template <typename T = void> T DialogStateChanged() {
		return ((T (*)(IngameBuy*))(Il2CppBase() + 0x3C311C))(this);
	}
	template <typename T = void> T Enable(bool on) {
		return ((T (*)(IngameBuy*, bool))(Il2CppBase() + 0x3C3114))(this, on);
	}
	template <typename T = void> T OnTriggerEnter(void* other) {
		return ((T (*)(IngameBuy*, void*))(Il2CppBase() + 0x3C32E8))(this, other);
	}
	template <typename T = void> T OnTriggerExit(void* other) {
		return ((T (*)(IngameBuy*, void*))(Il2CppBase() + 0x3C3460))(this, other);
	}
	template <typename T = bool> T IsBusy() {
		return ((T (*)(IngameBuy*))(Il2CppBase() + 0x3C19F4))(this);
	}
	template <typename T = float> T CoolDownProgress() {
		return ((T (*)(IngameBuy*))(Il2CppBase() + 0x3C35D8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(IngameBuy*))(Il2CppBase() + 0x3C36D8))(this);
	}
};
