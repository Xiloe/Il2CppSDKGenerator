#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LuckyBoxShop
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LuckyBoxShop"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _box_list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_box_list() {
		return ((T (*)(LuckyBoxShop*))(Il2CppBase() + 0x4EA432C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LuckyBoxShop*, bool))(Il2CppBase() + 0x4EA4334))(this, createIfMissing);
	}

};

}
