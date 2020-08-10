#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TestGob
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(TestGob*))(Il2CppBase() + 0x26B298))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(TestGob*))(Il2CppBase() + 0x26B2A0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TestGob*))(Il2CppBase() + 0x26B2A4))(this);
	}
	template <typename T = void> T SpawnGob(Il2CppVector2 gobNormPos) {
		return ((T (*)(TestGob*, Il2CppVector2))(Il2CppBase() + 0x26B2A8))(this, gobNormPos);
	}
	template <typename T = void> T ConfigureDropletsForGobs() {
		return ((T (*)(TestGob*))(Il2CppBase() + 0x26B2AC))(this);
	}
	template <typename T = void> T ConfigureDropletsForDroplets() {
		return ((T (*)(TestGob*))(Il2CppBase() + 0x26B2B0))(this);
	}
	template <typename T = void> T GetOriginalWaterDropletsParams() {
		return ((T (*)(TestGob*))(Il2CppBase() + 0x26B2B4))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(TestGob*))(Il2CppBase() + 0x26B2B8))(this);
	}
};
