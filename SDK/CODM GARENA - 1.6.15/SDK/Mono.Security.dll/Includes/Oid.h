#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Oid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "", "Oid"));
	}



};

}
