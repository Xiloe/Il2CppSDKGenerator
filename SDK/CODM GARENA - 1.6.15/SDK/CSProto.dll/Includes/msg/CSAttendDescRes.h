#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAttendDescRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAttendDescRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _desc() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSAttendDescRes*))(Il2CppBase() + 0x51E4BBC))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSAttendDescRes*, int32_t))(Il2CppBase() + 0x51E4BC4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_desc() {
		return ((T (*)(CSAttendDescRes*))(Il2CppBase() + 0x51E4BCC))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAttendDescRes*, bool))(Il2CppBase() + 0x51E4BD4))(this, createIfMissing);
	}

};

}
