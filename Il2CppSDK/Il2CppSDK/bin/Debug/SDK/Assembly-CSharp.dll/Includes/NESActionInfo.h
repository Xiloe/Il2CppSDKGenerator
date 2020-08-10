#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NESActionInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = bool> T& m_Disabled() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_Target() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_TargetComponent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_TargetAction() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_1stParam() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_Delay() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_Method() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_Delegate() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(NESActionInfo*))(Il2CppBase() + 0x40EF9C))(this);
	}
	template <typename T = bool> T get_isValid() {
		return ((T (*)(NESActionInfo*))(Il2CppBase() + 0x40EFA4))(this);
	}
};
