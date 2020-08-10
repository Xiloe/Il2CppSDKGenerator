#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SiteData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& m_URL() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_Rewarded() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_FBSite() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = void*> T& m_Button() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& m_ButtonRewardedLabel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SiteData*))(Il2CppBase() + 0x3557B8))(this);
	}
};
