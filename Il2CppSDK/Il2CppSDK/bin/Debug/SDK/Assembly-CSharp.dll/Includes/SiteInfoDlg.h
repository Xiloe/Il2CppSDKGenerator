#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SiteInfoDlg
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Dialog() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_Description() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& m_OrigPos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SiteInfoDlg*))(Il2CppBase() + 0x29CC30))(this);
	}
	template <typename T = void> T Init(void* pivot) {
		return ((T (*)(SiteInfoDlg*, void*))(Il2CppBase() + 0x2A24D8))(this, pivot);
	}
	template <typename T = void> T Show(void* close, int32_t text) {
		return ((T (*)(SiteInfoDlg*, void*, int32_t))(Il2CppBase() + 0x29EB90))(this, close, text);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(SiteInfoDlg*))(Il2CppBase() + 0x2A64D4))(this);
	}
};
