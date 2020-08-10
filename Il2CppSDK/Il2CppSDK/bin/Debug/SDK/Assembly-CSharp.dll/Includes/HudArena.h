#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HudArena
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79168);
	}
	// Fields
	template <typename T = void*> T& m_Arena() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_ShowArena() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_Score() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_ScoreVal() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& s_PivotMainName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& s_LayoutMainName() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& s_ArenaParent() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(HudArena*))(Il2CppBase() + 0x37D39C))(this);
	}
	template <typename T = bool> T VisibleOnStart() {
		return ((T (*)(HudArena*))(Il2CppBase() + 0x3A1880))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(HudArena*))(Il2CppBase() + 0x3A1940))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HudArena*))(Il2CppBase() + 0x3A1C28))(this);
	}
	template <typename T = void> T LateUpdate(float deltaTime) {
		return ((T (*)(HudArena*, float))(Il2CppBase() + 0x3A1C2C))(this, deltaTime);
	}
	template <typename T = void> T ShowWidgets(bool on) {
		return ((T (*)(HudArena*, bool))(Il2CppBase() + 0x3A1C50))(this, on);
	}
	template <typename T = void> T SetScore(int32_t val) {
		return ((T (*)(HudArena*, int32_t))(Il2CppBase() + 0x382818))(this, val);
	}
	template <typename T = void> T ShowArena(bool show) {
		return ((T (*)(HudArena*, bool))(Il2CppBase() + 0x382A54))(this, show);
	}
	template <typename T = void*> T GetChildByName(void* widget, Il2CppString* name) {
		return ((T (*)(HudArena*, void*, Il2CppString*))(Il2CppBase() + 0xA08C64))(this, widget, name);
	}
};
