#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPromotorGetAwardRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPromotorGetAwardRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _turn_to_mail() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _level() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSPromotorGetAwardRes*))(Il2CppBase() + 0x51F19C0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSPromotorGetAwardRes*, int32_t))(Il2CppBase() + 0x51F19C8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop_list() {
		return ((T (*)(CSPromotorGetAwardRes*))(Il2CppBase() + 0x51F19D0))(this);
	}
	template <typename T = bool> T get_turn_to_mail() {
		return ((T (*)(CSPromotorGetAwardRes*))(Il2CppBase() + 0x51F19D8))(this);
	}
	template <typename T = void> T set_turn_to_mail(bool value) {
		return ((T (*)(CSPromotorGetAwardRes*, bool))(Il2CppBase() + 0x51F19E0))(this, value);
	}
	template <typename T = int32_t> T get_level() {
		return ((T (*)(CSPromotorGetAwardRes*))(Il2CppBase() + 0x51F19E8))(this);
	}
	template <typename T = void> T set_level(int32_t value) {
		return ((T (*)(CSPromotorGetAwardRes*, int32_t))(Il2CppBase() + 0x51F19F0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPromotorGetAwardRes*, bool))(Il2CppBase() + 0x51F19F8))(this, createIfMissing);
	}

};

}
