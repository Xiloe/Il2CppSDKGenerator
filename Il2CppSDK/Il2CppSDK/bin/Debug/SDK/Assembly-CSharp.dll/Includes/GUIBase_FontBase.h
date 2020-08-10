#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GUIBaseFontBase
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GUIBaseFontBase*))(Il2CppBase() + 0x359678))(this);
	}
	template <typename T = void*> T get_fontMaterial() {
		return ((T (*)(GUIBaseFontBase*))(Il2CppBase() + 0x0))(this);
	}
};
