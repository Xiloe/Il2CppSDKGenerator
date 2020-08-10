#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISlotView
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ISlotView*))(Il2CppBase() + 0x3CD054))(this);
	}
	template <typename T = void> T Show(void* id, bool locked) {
		return ((T (*)(ISlotView*, void*, bool))(Il2CppBase() + 0x0))(this, id, locked);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(ISlotView*))(Il2CppBase() + 0x0))(this);
	}
};
