#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class RPC
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "RPC"));
	}



};

}
