#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GiftListType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GiftListType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& GIFT_LIST_ASK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& GIFT_LIST_GIFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& GIFT_LIST_HISTORY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
