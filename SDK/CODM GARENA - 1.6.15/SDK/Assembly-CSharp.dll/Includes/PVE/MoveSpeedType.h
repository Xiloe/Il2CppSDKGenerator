#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class MoveSpeedType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "MoveSpeedType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Run() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Walk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Sprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
