#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class LobbyEarthMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "LobbyEarthMode"));
	}

	template <typename T = uintptr_t> T& ModeID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& x() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& y() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& z() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& Lock() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& UnlockLevel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
