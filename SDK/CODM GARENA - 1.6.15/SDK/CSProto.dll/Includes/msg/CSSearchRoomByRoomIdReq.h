#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSearchRoomByRoomIdReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSearchRoomByRoomIdReq"));
	}

	template <typename T = uint32_t> T& _team_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_team_id() {
		return ((T (*)(CSSearchRoomByRoomIdReq*))(Il2CppBase() + 0x51E1218))(this);
	}
	template <typename T = void> T set_team_id(uint32_t value) {
		return ((T (*)(CSSearchRoomByRoomIdReq*, uint32_t))(Il2CppBase() + 0x51E1220))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSearchRoomByRoomIdReq*, bool))(Il2CppBase() + 0x51E1228))(this, createIfMissing);
	}

};

}
