#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IScrollItem
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(IScrollItem*))(Il2CppBase() + 0x3CD04C))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(IScrollItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(IScrollItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T UpdateItemInfo() {
		return ((T (*)(IScrollItem*))(Il2CppBase() + 0x0))(this);
	}
};
