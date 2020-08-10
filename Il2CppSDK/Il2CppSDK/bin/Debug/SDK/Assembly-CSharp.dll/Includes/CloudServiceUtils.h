#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CloudServiceUtils
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& m_ProductId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_ProductPassword() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& m_AdminPasswordHash() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& m_StrKey() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& m_StrVal() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& m_StrMsg() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CloudServiceUtils*))(Il2CppBase() + 0x2D3868))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(CloudServiceUtils*))(Il2CppBase() + 0x2D3994))(this);
	}
	template <typename T = void> T AsyncOpFinished(void* res) {
		return ((T (*)(CloudServiceUtils*, void*))(Il2CppBase() + 0x2D3E54))(this, res);
	}
};
