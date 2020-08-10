#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGameZoneControledObject
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T Enable() {
		return ((T (*)(IGameZoneControledObject*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(IGameZoneControledObject*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(IGameZoneControledObject*))(Il2CppBase() + 0x0))(this);
	}
};
