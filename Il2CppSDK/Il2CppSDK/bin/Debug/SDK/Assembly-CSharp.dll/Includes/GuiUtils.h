#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiUtils
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void*> static T PrepareLabel(void* Layout, Il2CppString* Name, Il2CppString* Text) {
		return ((T (*)(void *, void*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x39CDAC))(0, Layout, Name, Text);
	}
	template <typename T = void*> static T PrepareButton(void* Layout, Il2CppString* Name, void* Touched, void* Released) {
		return ((T (*)(void *, void*, Il2CppString*, void*, void*))(Il2CppBase() + 0x39CEA0))(0, Layout, Name, Touched, Released);
	}
	template <typename T = void*> static T PrepareTextArea(void* Layout, Il2CppString* Name, Il2CppString* Text) {
		return ((T (*)(void *, void*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x39CFA8))(0, Layout, Name, Text);
	}
};
