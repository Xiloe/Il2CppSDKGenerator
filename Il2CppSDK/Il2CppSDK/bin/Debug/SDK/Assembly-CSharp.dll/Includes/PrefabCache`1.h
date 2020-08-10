#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrefabCache1
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Prefab() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& m_InitialCacheSize() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppList<void*>*> T& m_FreeObjects() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PrefabCache1*))(Il2CppBase() + 0x439784))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(PrefabCache1*))(Il2CppBase() + 0x4397F4))(this);
	}
	template <typename T = void*> T Get() {
		return ((T (*)(PrefabCache1*))(Il2CppBase() + 0x43988C))(this);
	}
	template <typename T = void> T Return(void* inObject) {
		return ((T (*)(PrefabCache1*, void*))(Il2CppBase() + 0x43993C))(this, inObject);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PrefabCache1*))(Il2CppBase() + 0x439B3C))(this);
	}
	template <typename T = void> T CreateNewInstance() {
		return ((T (*)(PrefabCache1*))(Il2CppBase() + 0x439B84))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(PrefabCache1*))(Il2CppBase() + 0x439D98))(this);
	}
};
