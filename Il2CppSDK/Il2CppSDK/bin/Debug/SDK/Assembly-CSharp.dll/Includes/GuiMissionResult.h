#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiMissionResult
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79194);
	}
	// Fields
	template <typename T = void*> T& m_PivotMissionResult() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_LayoutMissionResult() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_MissionResultText() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_MissionResultText2() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_MissionResultBackground2() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_OnMissionResultDelegate() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_ArenaWave() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_ArenaScore() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> static T& s_PivotMissionResultName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& s_LayoutMissionResultName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& s_MissionResultText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& s_MissionResultText2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> static T& s_MissionResultBackground2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiMissionResult*))(Il2CppBase() + 0x3893C8))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x3893D0))(0);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuiMissionResult*))(Il2CppBase() + 0x3894D0))(this);
	}
	template <typename T = void> T ShowMissionResult(void* result, void* touchDelegate) {
		return ((T (*)(GuiMissionResult*, void*, void*))(Il2CppBase() + 0x38987C))(this, result, touchDelegate);
	}
	template <typename T = void> T HideMissionResult() {
		return ((T (*)(GuiMissionResult*))(Il2CppBase() + 0x389BF0))(this);
	}
	template <typename T = void> T SetArenaScore(int32_t wave, int32_t score) {
		return ((T (*)(GuiMissionResult*, int32_t, int32_t))(Il2CppBase() + 0x389CF0))(this, wave, score);
	}
	template <typename T = void> T OnMissionSuccessTouch() {
		return ((T (*)(GuiMissionResult*))(Il2CppBase() + 0x389CFC))(this);
	}
};
