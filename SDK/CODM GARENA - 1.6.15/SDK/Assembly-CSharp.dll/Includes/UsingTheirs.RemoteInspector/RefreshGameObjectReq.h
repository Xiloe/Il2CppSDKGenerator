#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UsingTheirs.RemoteInspector {

class RefreshGameObjectReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UsingTheirs.RemoteInspector", "RefreshGameObjectReq"));
	}

	template <typename T = int32_t> T& instanceId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
