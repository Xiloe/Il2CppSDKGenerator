#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class BoolNoneTrue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "BoolNoneTrue"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& boolVariables() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& sendEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(BoolNoneTrue*))(Il2CppBase() + 0x4F346C8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(BoolNoneTrue*))(Il2CppBase() + 0x4F346E0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(BoolNoneTrue*))(Il2CppBase() + 0x4F347D8))(this);
	}
	template <typename T = void> T DoNoneTrue() {
		return ((T (*)(BoolNoneTrue*))(Il2CppBase() + 0x4F3470C))(this);
	}

};

}
