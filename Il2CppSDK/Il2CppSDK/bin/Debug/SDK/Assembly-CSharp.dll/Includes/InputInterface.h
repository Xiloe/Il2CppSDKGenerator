#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InputInterface
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7933C);
	}
	// Methods
	template <typename T = void> T ReceiveInput(void* iEvent) {
		return ((T (*)(InputInterface*, void*))(Il2CppBase() + 0x0))(this, iEvent);
	}
};
