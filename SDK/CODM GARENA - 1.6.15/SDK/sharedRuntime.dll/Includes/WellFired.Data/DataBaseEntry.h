#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired.Data {

class DataBaseEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("sharedRuntime.dll", "WellFired.Data", "DataBaseEntry"));
	}



};

}
