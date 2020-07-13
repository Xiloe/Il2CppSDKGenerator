#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class GuildLocationConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "GuildLocationConfig"));
	}

	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& LOCID_Province() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LOCID_City() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(GuildLocationConfig*))(Il2CppBase() + 0x37626F0))(this);
	}
	template <typename T = int32_t> T get_Index() {
		return ((T (*)(GuildLocationConfig*))(Il2CppBase() + 0x3762790))(this);
	}
	template <typename T = void> T set_Index(int32_t value) {
		return ((T (*)(GuildLocationConfig*, int32_t))(Il2CppBase() + 0x3762798))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Province() {
		return ((T (*)(GuildLocationConfig*))(Il2CppBase() + 0x37627A0))(this);
	}
	template <typename T = void> T set_LOCID_Province(Il2CppString* value) {
		return ((T (*)(GuildLocationConfig*, Il2CppString*))(Il2CppBase() + 0x37627A8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Province() {
		return ((T (*)(GuildLocationConfig*))(Il2CppBase() + 0x37627B0))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_City() {
		return ((T (*)(GuildLocationConfig*))(Il2CppBase() + 0x37627C0))(this);
	}
	template <typename T = void> T set_LOCID_City(Il2CppString* value) {
		return ((T (*)(GuildLocationConfig*, Il2CppString*))(Il2CppBase() + 0x37627C8))(this, value);
	}
	template <typename T = Il2CppString*> T get_City() {
		return ((T (*)(GuildLocationConfig*))(Il2CppBase() + 0x37627D0))(this);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(GuildLocationConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x37627E0))(this, bytes, position);
	}

};

}
