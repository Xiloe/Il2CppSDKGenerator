#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSendGiftRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSendGiftRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _is_check_can_send() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& _gift_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSSendGiftRes*))(Il2CppBase() + 0x51E15F0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSSendGiftRes*, int32_t))(Il2CppBase() + 0x51E15F8))(this, value);
	}
	template <typename T = bool> T get_is_check_can_send() {
		return ((T (*)(CSSendGiftRes*))(Il2CppBase() + 0x51E1600))(this);
	}
	template <typename T = void> T set_is_check_can_send(bool value) {
		return ((T (*)(CSSendGiftRes*, bool))(Il2CppBase() + 0x51E1608))(this, value);
	}
	template <typename T = uint64_t> T get_gift_id() {
		return ((T (*)(CSSendGiftRes*))(Il2CppBase() + 0x51E1610))(this);
	}
	template <typename T = void> T set_gift_id(uint64_t value) {
		return ((T (*)(CSSendGiftRes*, uint64_t))(Il2CppBase() + 0x51E1618))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSendGiftRes*, bool))(Il2CppBase() + 0x51E1628))(this, createIfMissing);
	}

};

}
