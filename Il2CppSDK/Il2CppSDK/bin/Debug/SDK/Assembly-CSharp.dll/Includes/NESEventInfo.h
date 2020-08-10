#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NESEventInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_InComponent() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_Event() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<void*>*> T& m_Actions() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(NESEventInfo*))(Il2CppBase() + 0x4119EC))(this);
	}
	template <typename T = bool> T get_isValid() {
		return ((T (*)(NESEventInfo*))(Il2CppBase() + 0x411A98))(this);
	}
};
