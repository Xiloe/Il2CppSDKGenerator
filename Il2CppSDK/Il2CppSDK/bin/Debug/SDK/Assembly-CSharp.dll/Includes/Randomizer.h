#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Randomizer
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppList<Il2CppString*>*> T& m_List1() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& m_List2() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& m_Current() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Randomizer*))(Il2CppBase() + 0x1AF158))(this);
	}
	template <typename T = void> T Add(Il2CppString* s) {
		return ((T (*)(Randomizer*, Il2CppString*))(Il2CppBase() + 0x1AF224))(this, s);
	}
	template <typename T = Il2CppString*> T Get() {
		return ((T (*)(Randomizer*))(Il2CppBase() + 0x1AF2C4))(this);
	}
};
