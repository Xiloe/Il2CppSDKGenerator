#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PVEInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PVEInfo"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& ZombieKillCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& BossKillCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CompleteTimes() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& QuickFinishName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& QuickFinsihTimes() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetInfo() {
		return ((T (*)(PVEInfo*))(Il2CppBase() + 0x1CF52C8))(this);
	}

};

}
