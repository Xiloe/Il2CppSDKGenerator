#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MissionBlackBoard
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD794BC);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& EnemiesTransform() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& LastAttackTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MissionBlackBoard*))(Il2CppBase() + 0x405B68))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x405B70))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MissionBlackBoard*))(Il2CppBase() + 0x405B74))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(MissionBlackBoard*))(Il2CppBase() + 0x405C28))(this);
	}
};
