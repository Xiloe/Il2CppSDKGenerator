#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetLoadingBackGroundConfigRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetLoadingBackGroundConfigRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _config_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _pic_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetLoadingBackGroundConfigRes*))(Il2CppBase() + 0x5217148))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetLoadingBackGroundConfigRes*, int32_t))(Il2CppBase() + 0x5217150))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_config_list() {
		return ((T (*)(CSGetLoadingBackGroundConfigRes*))(Il2CppBase() + 0x5217158))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_pic_list() {
		return ((T (*)(CSGetLoadingBackGroundConfigRes*))(Il2CppBase() + 0x5217160))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetLoadingBackGroundConfigRes*, bool))(Il2CppBase() + 0x5217168))(this, createIfMissing);
	}

};

}
