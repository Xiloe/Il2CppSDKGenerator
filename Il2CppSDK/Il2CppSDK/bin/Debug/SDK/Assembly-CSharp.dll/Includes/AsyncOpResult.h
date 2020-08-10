#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AsyncOpResult
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = bool> T& m_Res() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_Finished() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = Il2CppString*> T& m_ResultDesc() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& m_DbgId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_UserData() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& m_Password() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<void*>*> T& m_Listeners() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor(Il2CppString* password, void* listener) {
		return ((T (*)(AsyncOpResult*, Il2CppString*, void*))(Il2CppBase() + 0x2C5660))(this, password, listener);
	}
	template <typename T = void> T Finished() {
		return ((T (*)(AsyncOpResult*))(Il2CppBase() + 0x2CAAAC))(this);
	}
};
