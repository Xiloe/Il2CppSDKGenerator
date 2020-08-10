#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerShowAssets
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& GameObjectsList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(TriggerShowAssets*))(Il2CppBase() + 0x274EA0))(this);
	}
	template <typename T = void> T OnTriggerEnter(void* other) {
		return ((T (*)(TriggerShowAssets*, void*))(Il2CppBase() + 0x274F4C))(this, other);
	}
	template <typename T = bool> T IsInList(void* gameObject) {
		return ((T (*)(TriggerShowAssets*, void*))(Il2CppBase() + 0x2751E0))(this, gameObject);
	}
};
