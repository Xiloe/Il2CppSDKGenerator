#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CasinoSlotMachine
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_SpinWin() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_SpinLost() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_RewardCallback() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<void*>*> T& m_LeftSlots() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<void*>*> T& m_CenterSlots() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<void*>*> T& m_RightSlots() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_SlotMachineAnim() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_WinAnim() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_CameraAnim() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_CameraAnimationRun() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<void*>*> T& m_BlurSlots() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_BusyTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_RewardTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_WinAnimTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CasinoSlotMachine*))(Il2CppBase() + 0x2929BC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CasinoSlotMachine*))(Il2CppBase() + 0x28D3F0))(this);
	}
	template <typename T = bool> T IsBusy() {
		return ((T (*)(CasinoSlotMachine*))(Il2CppBase() + 0x28E1EC))(this);
	}
	template <typename T = void> T SpinRandomSymbol(bool win) {
		return ((T (*)(CasinoSlotMachine*, bool))(Il2CppBase() + 0x292AF0))(this, win);
	}
	template <typename T = void> T Spin(void* symbol, bool win) {
		return ((T (*)(CasinoSlotMachine*, void*, bool))(Il2CppBase() + 0x28FA7C))(this, symbol, win);
	}
	template <typename T = void*> T ControlSpin(void* symbol, bool win) {
		return ((T (*)(CasinoSlotMachine*, void*, bool))(Il2CppBase() + 0x292B28))(this, symbol, win);
	}
	template <typename T = void> T SetMachineState(void* symbol, bool win) {
		return ((T (*)(CasinoSlotMachine*, void*, bool))(Il2CppBase() + 0x292BEC))(this, symbol, win);
	}
	template <typename T = void> T SetRandomMachineState() {
		return ((T (*)(CasinoSlotMachine*))(Il2CppBase() + 0x292ABC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CasinoSlotMachine*))(Il2CppBase() + 0x293044))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CasinoSlotMachine*))(Il2CppBase() + 0x293C00))(this);
	}
};
