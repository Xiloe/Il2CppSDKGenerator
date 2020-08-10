#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerStatisticsView
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PlayerStatisticsView*))(Il2CppBase() + 0x207268))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PlayerStatisticsView*))(Il2CppBase() + 0x207270))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PlayerStatisticsView*))(Il2CppBase() + 0x207274))(this);
	}
};
