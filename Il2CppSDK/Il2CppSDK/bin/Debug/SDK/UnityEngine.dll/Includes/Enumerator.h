#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Enumerator
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Outer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_CurrentIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor(void* outer) {
		return ((T (*)(Enumerator*, void*))(Il2CppBase() + 0x8EB020))(this, outer);
	}
	template <typename T = void*> T get_Current() {
		return ((T (*)(Enumerator*))(Il2CppBase() + 0x8EB268))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Enumerator*))(Il2CppBase() + 0x8EB298))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(Enumerator*))(Il2CppBase() + 0x8EB2E0))(this);
	}
};
