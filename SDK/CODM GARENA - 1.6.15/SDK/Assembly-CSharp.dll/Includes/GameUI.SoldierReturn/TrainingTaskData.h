#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.SoldierReturn {

class TrainingTaskData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.SoldierReturn", "TrainingTaskData"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& titleDatas() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTitleData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T GetTitleData(int32_t groupID) {
		return ((T (*)(TrainingTaskData*, int32_t))(Il2CppBase() + 0x2998394))(this, groupID);
	}

};

}
