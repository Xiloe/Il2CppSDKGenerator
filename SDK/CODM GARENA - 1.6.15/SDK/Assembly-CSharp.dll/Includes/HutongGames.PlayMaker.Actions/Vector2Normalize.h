#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Vector2Normalize
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Vector2Normalize"));
	}

	template <typename T = uintptr_t> T& vector2Variable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Vector2Normalize*))(Il2CppBase() + 0x4F1C85C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(Vector2Normalize*))(Il2CppBase() + 0x4F1C86C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(Vector2Normalize*))(Il2CppBase() + 0x4F1C8F4))(this);
	}

};

}
