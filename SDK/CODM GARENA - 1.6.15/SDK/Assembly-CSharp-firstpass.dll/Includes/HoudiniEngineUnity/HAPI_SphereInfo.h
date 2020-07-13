#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HAPISphereInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HAPI_SphereInfo"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& center() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& radius() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
