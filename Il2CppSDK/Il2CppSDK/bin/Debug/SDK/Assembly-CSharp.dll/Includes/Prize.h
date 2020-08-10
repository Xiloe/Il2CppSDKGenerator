#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Prize
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_PrizeType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_Icon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_Name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_IsJackpot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_Probability() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_Amount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_Item() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& coolDown() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor(void* id, void* prizeType, void* icon, int32_t name, float probability, int32_t coolDownInit, int32_t amount, void* item) {
		return ((T (*)(Prize*, void*, void*, void*, int32_t, float, int32_t, int32_t, void*))(Il2CppBase() + 0x28CD64))(this, id, prizeType, icon, name, probability, coolDownInit, amount, item);
	}
	template <typename T = void*> T get_icon() {
		return ((T (*)(Prize*))(Il2CppBase() + 0x290A58))(this);
	}
	template <typename T = int32_t> T get_name() {
		return ((T (*)(Prize*))(Il2CppBase() + 0x290A60))(this);
	}
	template <typename T = int32_t> T get_amount() {
		return ((T (*)(Prize*))(Il2CppBase() + 0x290A68))(this);
	}
	template <typename T = void*> T get_id() {
		return ((T (*)(Prize*))(Il2CppBase() + 0x28DB24))(this);
	}
	template <typename T = int32_t> T get_coolDown() {
		return ((T (*)(Prize*))(Il2CppBase() + 0x28DB2C))(this);
	}
	template <typename T = void> T set_coolDown(int32_t value) {
		return ((T (*)(Prize*, int32_t))(Il2CppBase() + 0x28E118))(this, value);
	}
	template <typename T = void> T ApplyReward() {
		return ((T (*)(Prize*))(Il2CppBase() + 0x29031C))(this);
	}
	template <typename T = float> T GetProbability() {
		return ((T (*)(Prize*))(Il2CppBase() + 0x28E900))(this);
	}
	template <typename T = void> T DecreaseCollDown() {
		return ((T (*)(Prize*))(Il2CppBase() + 0x28F77C))(this);
	}
};
