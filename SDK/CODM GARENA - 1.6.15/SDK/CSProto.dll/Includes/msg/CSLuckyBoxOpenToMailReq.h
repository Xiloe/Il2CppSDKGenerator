#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLuckyBoxOpenToMailReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLuckyBoxOpenToMailReq"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _lucky_box_list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_lucky_box_list() {
		return ((T (*)(CSLuckyBoxOpenToMailReq*))(Il2CppBase() + 0x51EF8FC))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLuckyBoxOpenToMailReq*, bool))(Il2CppBase() + 0x51EF904))(this, createIfMissing);
	}

};

}
