#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HalloweenAdvertDlg
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Dialog() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& m_OrigPos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(HalloweenAdvertDlg*))(Il2CppBase() + 0x29CC18))(this);
	}
	template <typename T = void> T Init(void* pivot) {
		return ((T (*)(HalloweenAdvertDlg*, void*))(Il2CppBase() + 0x2A222C))(this, pivot);
	}
	template <typename T = void> T Show(void* close) {
		return ((T (*)(HalloweenAdvertDlg*, void*))(Il2CppBase() + 0x2A3450))(this, close);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(HalloweenAdvertDlg*))(Il2CppBase() + 0x2A3588))(this);
	}
};
