#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoneyInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Parent() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_Number() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& CurrentMoney() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& FinalMoney() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_Progress() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor(void* layout, int32_t moneyInit) {
		return ((T (*)(MoneyInfo*, void*, int32_t))(Il2CppBase() + 0x3AE2A4))(this, layout, moneyInit);
	}
	template <typename T = void> T Enable(bool enable) {
		return ((T (*)(MoneyInfo*, bool))(Il2CppBase() + 0x3AFD00))(this, enable);
	}
	template <typename T = void> T MoneyChanges() {
		return ((T (*)(MoneyInfo*))(Il2CppBase() + 0x3B19FC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(MoneyInfo*))(Il2CppBase() + 0x3AF5F8))(this);
	}
};
