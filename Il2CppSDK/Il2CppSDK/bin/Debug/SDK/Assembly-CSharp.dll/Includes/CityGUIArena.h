#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CityGUIArena
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78B08);
	}
	// Fields
	template <typename T = void*> T& m_ArenaStart() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_ArenaResult() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_Pivot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CityGUIArena*))(Il2CppBase() + 0x29953C))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(CityGUIArena*))(Il2CppBase() + 0x29972C))(this);
	}
	template <typename T = void> T ShowArenaStart(void* arena, void* close, void* arenaInfo) {
		return ((T (*)(CityGUIArena*, void*, void*, void*))(Il2CppBase() + 0x299734))(this, arena, close, arenaInfo);
	}
	template <typename T = void> T ArenaStartDisableControls() {
		return ((T (*)(CityGUIArena*))(Il2CppBase() + 0x29A230))(this);
	}
	template <typename T = void> T HideArenaStart() {
		return ((T (*)(CityGUIArena*))(Il2CppBase() + 0x29A28C))(this);
	}
	template <typename T = void> T ShowArenaResult(void* close, void* arenaInfo) {
		return ((T (*)(CityGUIArena*, void*, void*))(Il2CppBase() + 0x29A2E4))(this, close, arenaInfo);
	}
	template <typename T = void> T HideArenaResult() {
		return ((T (*)(CityGUIArena*))(Il2CppBase() + 0x29A9D8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CityGUIArena*))(Il2CppBase() + 0x299614))(this);
	}
	template <typename T = void> T DestroyInternal() {
		return ((T (*)(CityGUIArena*))(Il2CppBase() + 0x299730))(this);
	}
	template <typename T = void*> static T GetChildByName(void* widget, Il2CppString* name) {
		return ((T (*)(void *, void*, Il2CppString*))(Il2CppBase() + 0xA079CC))(0, widget, name);
	}
};
