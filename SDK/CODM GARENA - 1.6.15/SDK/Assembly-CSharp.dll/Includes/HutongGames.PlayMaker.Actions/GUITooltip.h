#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GUITooltip
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GUITooltip"));
	}

	template <typename T = uintptr_t> T& storeTooltip() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GUITooltip*))(Il2CppBase() + 0x4F085AC))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(GUITooltip*))(Il2CppBase() + 0x4F085B8))(this);
	}

};

}
