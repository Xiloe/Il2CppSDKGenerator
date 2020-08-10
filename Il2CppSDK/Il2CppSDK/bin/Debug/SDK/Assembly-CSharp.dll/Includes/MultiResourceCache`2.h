#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MultiResourceCache2
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppDictionary<void*, void*>*> T& Caches() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MultiResourceCache2*))(Il2CppBase() + 0x4391E8))(this);
	}
	template <typename T = void*> T get_Item(void* inKey) {
		return ((T (*)(MultiResourceCache2*, void*))(Il2CppBase() + 0x439258))(this, inKey);
	}
	template <typename T = void> T set_Item(void* inKey, void* value) {
		return ((T (*)(MultiResourceCache2*, void*, void*))(Il2CppBase() + 0x439290))(this, inKey, value);
	}
	template <typename T = void*> T GetWeapon(void* type) {
		return ((T (*)(MultiResourceCache2*, void*))(Il2CppBase() + 0x4392C8))(this, type);
	}
	template <typename T = void> T Return(void* type, void* inObject) {
		return ((T (*)(MultiResourceCache2*, void*, void*))(Il2CppBase() + 0x439514))(this, type, inObject);
	}
};
