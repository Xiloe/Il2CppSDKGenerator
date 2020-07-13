#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GameObjectIsVisible
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GameObjectIsVisible"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& trueEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& falseEvent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GameObjectIsVisible*))(Il2CppBase() + 0x5053FA0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GameObjectIsVisible*))(Il2CppBase() + 0x5053FB8))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GameObjectIsVisible*))(Il2CppBase() + 0x505411C))(this);
	}
	template <typename T = void> T DoIsVisible() {
		return ((T (*)(GameObjectIsVisible*))(Il2CppBase() + 0x5053FE4))(this);
	}

};

}
