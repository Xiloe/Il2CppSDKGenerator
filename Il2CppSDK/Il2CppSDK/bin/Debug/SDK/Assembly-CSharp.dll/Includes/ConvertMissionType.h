#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConvertMissionType
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void*> static T Convert(void* missionType) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x2E54CC))(0, missionType);
	}
	template <typename T = void*> static T Convert_1(void* missionType) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x2E54D4))(0, missionType);
	}
};
