#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBWeaponSkill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBWeaponSkill"));
	}

	template <typename T = uintptr_t> T& _CommonData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _HostInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_CommonData() {
		return ((T (*)(DBWeaponSkill*))(Il2CppBase() + 0x5226374))(this);
	}
	template <typename T = void> T set_CommonData(uintptr_t value) {
		return ((T (*)(DBWeaponSkill*, uintptr_t))(Il2CppBase() + 0x522637C))(this, value);
	}
	template <typename T = uintptr_t> T get_HostInfo() {
		return ((T (*)(DBWeaponSkill*))(Il2CppBase() + 0x5226384))(this);
	}
	template <typename T = void> T set_HostInfo(uintptr_t value) {
		return ((T (*)(DBWeaponSkill*, uintptr_t))(Il2CppBase() + 0x522638C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBWeaponSkill*, bool))(Il2CppBase() + 0x5226394))(this, createIfMissing);
	}

};

}
