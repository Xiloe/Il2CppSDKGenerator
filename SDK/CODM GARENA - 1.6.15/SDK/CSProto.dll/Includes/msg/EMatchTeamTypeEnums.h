#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class EMatchTeamTypeEnums
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "EMatchTeamTypeEnums"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& MATCH_TEAMTYPE_ONE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& MATCH_TEAMTYPE_TWO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& MATCH_TEAMTYPE_FOUR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
