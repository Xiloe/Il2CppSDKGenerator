#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ScaleTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ScaleTime"));
	}

	template <typename T = uintptr_t> T& timeScale() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& adjustFixedDeltaTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ScaleTime*))(Il2CppBase() + 0x4FACF60))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ScaleTime*))(Il2CppBase() + 0x4FACFA0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(ScaleTime*))(Il2CppBase() + 0x4FAD054))(this);
	}
	template <typename T = void> T DoTimeScale() {
		return ((T (*)(ScaleTime*))(Il2CppBase() + 0x4FACFCC))(this);
	}

};

}
