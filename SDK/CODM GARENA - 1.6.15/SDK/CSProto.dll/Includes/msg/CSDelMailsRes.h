#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSDelMailsRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSDelMailsRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<int32_t>*> T& _indexs() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSDelMailsRes*))(Il2CppBase() + 0x51D0694))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSDelMailsRes*, int32_t))(Il2CppBase() + 0x51D069C))(this, value);
	}
	template <typename T = int32_t> T get_type() {
		return ((T (*)(CSDelMailsRes*))(Il2CppBase() + 0x51D06A4))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CSDelMailsRes*, int32_t))(Il2CppBase() + 0x51D06AC))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_indexs() {
		return ((T (*)(CSDelMailsRes*))(Il2CppBase() + 0x51D06B4))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSDelMailsRes*, bool))(Il2CppBase() + 0x51D06BC))(this, createIfMissing);
	}

};

}
