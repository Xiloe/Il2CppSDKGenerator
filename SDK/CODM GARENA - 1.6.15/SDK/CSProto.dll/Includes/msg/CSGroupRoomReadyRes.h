#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomReadyRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomReadyRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _is_ready() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGroupRoomReadyRes*))(Il2CppBase() + 0x51DEFF4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGroupRoomReadyRes*, int32_t))(Il2CppBase() + 0x51DEFFC))(this, value);
	}
	template <typename T = bool> T get_is_ready() {
		return ((T (*)(CSGroupRoomReadyRes*))(Il2CppBase() + 0x51DF004))(this);
	}
	template <typename T = void> T set_is_ready(bool value) {
		return ((T (*)(CSGroupRoomReadyRes*, bool))(Il2CppBase() + 0x51DF00C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomReadyRes*, bool))(Il2CppBase() + 0x51DF014))(this, createIfMissing);
	}

};

}
