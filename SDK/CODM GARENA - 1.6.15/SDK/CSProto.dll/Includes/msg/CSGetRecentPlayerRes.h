#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetRecentPlayerRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetRecentPlayerRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _recent_player() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetRecentPlayerRes*))(Il2CppBase() + 0x5217ECC))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetRecentPlayerRes*, int32_t))(Il2CppBase() + 0x5217ED4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_recent_player() {
		return ((T (*)(CSGetRecentPlayerRes*))(Il2CppBase() + 0x5217EDC))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetRecentPlayerRes*, bool))(Il2CppBase() + 0x5217EE4))(this, createIfMissing);
	}

};

}
