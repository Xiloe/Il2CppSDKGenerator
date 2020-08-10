#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGameZoneChild
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78F50);
	}
	// Methods
	template <typename T = bool> T IsActivatedWithGameZone() {
		return ((T (*)(IGameZoneChild*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(IGameZoneChild*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(IGameZoneChild*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(IGameZoneChild*))(Il2CppBase() + 0x0))(this);
	}
};
