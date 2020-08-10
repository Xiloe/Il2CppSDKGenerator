#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseListView
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(BaseListView*))(Il2CppBase() + 0x1D702C))(this);
	}
	template <typename T = void> T GUIView_Show() {
		return ((T (*)(BaseListView*))(Il2CppBase() + 0x1D86F0))(this);
	}
	template <typename T = void> T GUIView_Hide() {
		return ((T (*)(BaseListView*))(Il2CppBase() + 0x1D86F4))(this);
	}
	template <typename T = void> T GUIView_Update() {
		return ((T (*)(BaseListView*))(Il2CppBase() + 0x1D86F8))(this);
	}
};
