#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionDispatchProcessBranch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_DispatchProcessBranch"));
	}


	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionDispatchProcessBranch*))(Il2CppBase() + 0x4FCEAF8))(this);
	}

};

}
