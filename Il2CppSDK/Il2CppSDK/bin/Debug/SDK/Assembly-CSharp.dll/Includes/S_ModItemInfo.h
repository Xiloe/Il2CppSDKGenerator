#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SModItemInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& m_GUID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& m_Key() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppString*> T& m_Val() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor(int32_t guid, Il2CppString* key, Il2CppString* val) {
		return ((T (*)(SModItemInfo*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2D16F8))(this, guid, key, val);
	}
};
