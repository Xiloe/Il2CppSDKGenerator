#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSQaccComplaintRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSQaccComplaintRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _remain_complaint_times_today() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSQaccComplaintRes*))(Il2CppBase() + 0x51DFFBC))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSQaccComplaintRes*, int32_t))(Il2CppBase() + 0x51DFFC4))(this, value);
	}
	template <typename T = int32_t> T get_remain_complaint_times_today() {
		return ((T (*)(CSQaccComplaintRes*))(Il2CppBase() + 0x51DFFCC))(this);
	}
	template <typename T = void> T set_remain_complaint_times_today(int32_t value) {
		return ((T (*)(CSQaccComplaintRes*, int32_t))(Il2CppBase() + 0x51DFFD4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSQaccComplaintRes*, bool))(Il2CppBase() + 0x51DFFDC))(this, createIfMissing);
	}

};

}
