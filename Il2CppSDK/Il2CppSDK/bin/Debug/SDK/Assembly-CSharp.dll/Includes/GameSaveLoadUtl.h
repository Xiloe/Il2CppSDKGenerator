#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameSaveLoadUtl
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GameSaveLoadUtl*))(Il2CppBase() + 0x335C2C))(this);
	}
	template <typename T = void*> static T OpenReadPlayerData() {
		return ((T (*)(void *))(Il2CppBase() + 0x32494C))(0);
	}
	template <typename T = void*> static T OpenReadGameData() {
		return ((T (*)(void *))(Il2CppBase() + 0x3243D0))(0);
	}
	template <typename T = bool> static T SavePlayerData(void* dataFile) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x335C34))(0, dataFile);
	}
	template <typename T = bool> static T SaveGameData(void* dataFile) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x32A62C))(0, dataFile);
	}
	template <typename T = void> static T DeletePlayerData() {
		return ((T (*)(void *))(Il2CppBase() + 0x335DA0))(0);
	}
	template <typename T = void> static T DeleteGameData() {
		return ((T (*)(void *))(Il2CppBase() + 0x335E30))(0);
	}
};
