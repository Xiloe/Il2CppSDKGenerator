#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RoomInvitationReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomInvitationReport"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(RoomInvitationReport*))(Il2CppBase() + 0x495201C))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs(uintptr_t gameMode, uintptr_t source, bool isAccept, bool isBlockFiveMinutes) {
		return ((T (*)(RoomInvitationReport*, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x4952094))(this, gameMode, source, isAccept, isBlockFiveMinutes);
	}

};

}
