#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class RewardDaily
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "RewardDaily"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _reward() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_reward() {
		return ((T (*)(RewardDaily*))(Il2CppBase() + 0x5071D44))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(RewardDaily*, bool))(Il2CppBase() + 0x5071D4C))(this, createIfMissing);
	}

};

}
