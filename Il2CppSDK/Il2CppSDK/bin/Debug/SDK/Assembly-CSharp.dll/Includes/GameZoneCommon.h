#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameZoneCommon
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& m_ControlledChilds() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GameZoneCommon*))(Il2CppBase() + 0x337550))(this);
	}
	template <typename T = void> T CollectChilds(bool inIncludeInactive) {
		return ((T (*)(GameZoneCommon*, bool))(Il2CppBase() + 0x335FF4))(this, inIncludeInactive);
	}
	template <typename T = void> T EnableChilds() {
		return ((T (*)(GameZoneCommon*))(Il2CppBase() + 0x3362EC))(this);
	}
	template <typename T = void> T DisableChilds() {
		return ((T (*)(GameZoneCommon*))(Il2CppBase() + 0x33664C))(this);
	}
	template <typename T = void> T ResetChilds() {
		return ((T (*)(GameZoneCommon*))(Il2CppBase() + 0x336964))(this);
	}
	template <typename T = void> T RegisterControllableObject(void* inObject) {
		return ((T (*)(GameZoneCommon*, void*))(Il2CppBase() + 0x33883C))(this, inObject);
	}
	template <typename T = void> T UnRegisterControllableObject(void* inObject) {
		return ((T (*)(GameZoneCommon*, void*))(Il2CppBase() + 0x338914))(this, inObject);
	}
};
