#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TLogBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TLogBase"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(TLogBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(TLogBase*))(Il2CppBase() + 0x4948284))(this);
	}

};

}
