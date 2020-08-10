#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArenaStart
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Dialog() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_ArenaDelegate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& m_OrigPos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ArenaStart*))(Il2CppBase() + 0x299604))(this);
	}
	template <typename T = void> T Init(void* pivot) {
		return ((T (*)(ArenaStart*, void*))(Il2CppBase() + 0x29AA30))(this, pivot);
	}
	template <typename T = void> T Show(void* arena, void* close, void* arenaInfo) {
		return ((T (*)(ArenaStart*, void*, void*, void*))(Il2CppBase() + 0x299764))(this, arena, close, arenaInfo);
	}
	template <typename T = void> T DisableControls(bool disable) {
		return ((T (*)(ArenaStart*, bool))(Il2CppBase() + 0x29A25C))(this, disable);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(ArenaStart*))(Il2CppBase() + 0x29C6E8))(this);
	}
	template <typename T = void> T ArenaButton1() {
		return ((T (*)(ArenaStart*))(Il2CppBase() + 0x29C818))(this);
	}
	template <typename T = void> T ArenaButton2() {
		return ((T (*)(ArenaStart*))(Il2CppBase() + 0x29C848))(this);
	}
	template <typename T = void> T ArenaButton3() {
		return ((T (*)(ArenaStart*))(Il2CppBase() + 0x29C878))(this);
	}
	template <typename T = void> T ArenaButton4() {
		return ((T (*)(ArenaStart*))(Il2CppBase() + 0x29C8A8))(this);
	}
};
