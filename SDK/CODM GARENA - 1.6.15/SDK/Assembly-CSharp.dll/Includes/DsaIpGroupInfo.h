#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DsaIpGroupInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DsaIpGroupInfo"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& DsaIPList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& DsaGroupID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(DsaIpGroupInfo*))(Il2CppBase() + 0x50CBC0C))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(DsaIpGroupInfo*))(Il2CppBase() + 0x50CBCB4))(this);
	}

};

}
