#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AISkillSpawnSpot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AISkillSpawnSpot"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindSpot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChildSpots() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T FindSpot(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4A1E4D8))(0, name);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> static T GetChildSpots(Il2CppString* parentName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4A1E73C))(0, parentName);
	}

};

}
