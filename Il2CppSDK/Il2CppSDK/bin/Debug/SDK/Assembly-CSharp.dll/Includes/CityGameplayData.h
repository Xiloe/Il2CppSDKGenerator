#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CityGameplayData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78A30);
	}
	// Fields
	template <typename T = void*> static T& m_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& m_MissionFlowData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_MissionGraphicData() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_StoryFlowData() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CityGameplayData*))(Il2CppBase() + 0x298FB4))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x298FBC))(0);
	}
	template <typename T = void*> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x298FC0))(0);
	}
	template <typename T = void*> T get_missionFlowData() {
		return ((T (*)(CityGameplayData*))(Il2CppBase() + 0x2991DC))(this);
	}
	template <typename T = void*> T get_missionGraphicData() {
		return ((T (*)(CityGameplayData*))(Il2CppBase() + 0x2991E4))(this);
	}
	template <typename T = void*> T get_storyFlowData() {
		return ((T (*)(CityGameplayData*))(Il2CppBase() + 0x2991EC))(this);
	}
	template <typename T = void> static T CreateInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x2990E4))(0);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CityGameplayData*))(Il2CppBase() + 0x2991F4))(this);
	}
};
