#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSBRMatchConfigRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSBRMatchConfigRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _br_play_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _br_parent_play_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSBRMatchConfigRes*))(Il2CppBase() + 0x51E562C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSBRMatchConfigRes*, int32_t))(Il2CppBase() + 0x51E5634))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_br_play_list() {
		return ((T (*)(CSBRMatchConfigRes*))(Il2CppBase() + 0x51E563C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_br_parent_play_list() {
		return ((T (*)(CSBRMatchConfigRes*))(Il2CppBase() + 0x51E5644))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSBRMatchConfigRes*, bool))(Il2CppBase() + 0x51E564C))(this, createIfMissing);
	}

};

}
