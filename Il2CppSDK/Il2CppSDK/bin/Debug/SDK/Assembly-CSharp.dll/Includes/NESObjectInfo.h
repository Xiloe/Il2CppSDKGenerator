#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NESObjectInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_InObject() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<void*>*> T& m_Events() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(NESObjectInfo*))(Il2CppBase() + 0x412BC8))(this);
	}
	template <typename T = bool> T get_isValid() {
		return ((T (*)(NESObjectInfo*))(Il2CppBase() + 0x412C74))(this);
	}
};
