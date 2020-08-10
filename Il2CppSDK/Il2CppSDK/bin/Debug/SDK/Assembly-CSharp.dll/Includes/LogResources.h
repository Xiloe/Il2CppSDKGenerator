#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LogResources
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& m_Delay() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(LogResources*))(Il2CppBase() + 0x3DC5C4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(LogResources*))(Il2CppBase() + 0x3DC5D4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LogResources*))(Il2CppBase() + 0x3DC660))(this);
	}
	template <typename T = void> T Do() {
		return ((T (*)(LogResources*))(Il2CppBase() + 0x3DC664))(this);
	}
	template <typename T = void> static T LogObjects() {
		return ((T (*)(void *))(Il2CppBase() + 0x3DC780))(0);
	}
	template <typename T = void> static T LogComponents(void* ComponentType, bool ActiveOnly, bool IncludingPrefabs) {
		return ((T (*)(void *, void*, bool, bool))(Il2CppBase() + 0x3DC874))(0, ComponentType, ActiveOnly, IncludingPrefabs);
	}
	template <typename T = void> static T LogTextures() {
		return ((T (*)(void *))(Il2CppBase() + 0x3DC668))(0);
	}
};
