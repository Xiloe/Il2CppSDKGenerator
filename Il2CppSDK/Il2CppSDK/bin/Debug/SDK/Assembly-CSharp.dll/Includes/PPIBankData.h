#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PPIBankData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79664);
	}
	// Fields
	template <typename T = Il2CppList<Il2CppString*>*> T& FacebookSites() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& TwitterSites() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PPIBankData*))(Il2CppBase() + 0x207140))(this);
	}
};
