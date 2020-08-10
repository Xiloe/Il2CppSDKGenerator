#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StatisticsScreen
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_StatisticsView() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_ScreenPivot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_ScreenLayout() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_SelectFriends() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_BestButton() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_FriendValueLabel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_FriendNameLabel() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(StatisticsScreen*))(Il2CppBase() + 0x263A28))(this);
	}
	template <typename T = void> T OnGUI_Init() {
		return ((T (*)(StatisticsScreen*))(Il2CppBase() + 0x263A30))(this);
	}
	template <typename T = void> T OnGUI_Show() {
		return ((T (*)(StatisticsScreen*))(Il2CppBase() + 0x263FEC))(this);
	}
	template <typename T = void> T OnGUI_Hide() {
		return ((T (*)(StatisticsScreen*))(Il2CppBase() + 0x264460))(this);
	}
	template <typename T = void> T OnGUI_Update() {
		return ((T (*)(StatisticsScreen*))(Il2CppBase() + 0x26457C))(this);
	}
	template <typename T = void> T OnGUI_Destroy() {
		return ((T (*)(StatisticsScreen*))(Il2CppBase() + 0x2645DC))(this);
	}
	template <typename T = void> T OnGUI_Enable() {
		return ((T (*)(StatisticsScreen*))(Il2CppBase() + 0x2645E4))(this);
	}
	template <typename T = void> T OnGUI_Disable() {
		return ((T (*)(StatisticsScreen*))(Il2CppBase() + 0x264624))(this);
	}
	template <typename T = void> T UpdateHeader(void* inMode, Il2CppString* inFriendName) {
		return ((T (*)(StatisticsScreen*, void*, Il2CppString*))(Il2CppBase() + 0x264304))(this, inMode, inFriendName);
	}
	template <typename T = void> T OnBack(void* inWidget) {
		return ((T (*)(StatisticsScreen*, void*))(Il2CppBase() + 0x264664))(this, inWidget);
	}
	template <typename T = void> T OnSelectFriend(void* inInstigator) {
		return ((T (*)(StatisticsScreen*, void*))(Il2CppBase() + 0x26476C))(this, inInstigator);
	}
	template <typename T = void> T SelectFriendPopupHandler(void* inPopup, void* inResult) {
		return ((T (*)(StatisticsScreen*, void*, void*))(Il2CppBase() + 0x264928))(this, inPopup, inResult);
	}
	template <typename T = void> T Delegate_SelectBest(void* inInstigator) {
		return ((T (*)(StatisticsScreen*, void*))(Il2CppBase() + 0x264BB0))(this, inInstigator);
	}
};
