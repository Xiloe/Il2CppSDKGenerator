#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MAXPLAYERCOUNTINZOMBIE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MAX_PLAYER_COUNT_IN_ZOMBIE"));
	}

	template <typename T = int32_t> static T& VALUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
