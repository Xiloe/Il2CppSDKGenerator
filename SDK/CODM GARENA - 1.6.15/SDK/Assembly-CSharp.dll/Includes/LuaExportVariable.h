#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LuaExportVariable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LuaExportVariable"));
	}

	template <typename T = Il2CppString*> T& szTag() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& szName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& eType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
