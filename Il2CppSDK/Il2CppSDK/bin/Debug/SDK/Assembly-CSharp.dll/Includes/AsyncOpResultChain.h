#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AsyncOpResultChain
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& m_PendingOps() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_Finished() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_Listener() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor(void* listener) {
		return ((T (*)(AsyncOpResultChain*, void*))(Il2CppBase() + 0x2D14FC))(this, listener);
	}
	template <typename T = void> T Finished() {
		return ((T (*)(AsyncOpResultChain*))(Il2CppBase() + 0x2D15B0))(this);
	}
};
