#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimatedNumber
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78A04);
	}
	// Fields
	template <typename T = void*> T& m_Label() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& m_OrigScale() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor(void* label) {
		return ((T (*)(AnimatedNumber*, void*))(Il2CppBase() + 0x1AB9EC))(this, label);
	}
	template <typename T = Il2CppVector3> T get_OrigScale() {
		return ((T (*)(AnimatedNumber*))(Il2CppBase() + 0x1ABA5C))(this);
	}
	template <typename T = void*> T get_Label() {
		return ((T (*)(AnimatedNumber*))(Il2CppBase() + 0x1ABA70))(this);
	}
	template <typename T = void> T RestoreOrigScale() {
		return ((T (*)(AnimatedNumber*))(Il2CppBase() + 0x1ABA78))(this);
	}
};
