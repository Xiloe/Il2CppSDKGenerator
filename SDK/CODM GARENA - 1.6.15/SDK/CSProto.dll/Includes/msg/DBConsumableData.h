#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBConsumableData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBConsumableData"));
	}

	template <typename T = uintptr_t> T& _CommonData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_CommonData() {
		return ((T (*)(DBConsumableData*))(Il2CppBase() + 0x51B7A78))(this);
	}
	template <typename T = void> T set_CommonData(uintptr_t value) {
		return ((T (*)(DBConsumableData*, uintptr_t))(Il2CppBase() + 0x51B7A80))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBConsumableData*, bool))(Il2CppBase() + 0x51B7A88))(this, createIfMissing);
	}

};

}
