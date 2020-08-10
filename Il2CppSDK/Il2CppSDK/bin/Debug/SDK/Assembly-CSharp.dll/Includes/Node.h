#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Node
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> T& forward() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& element() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor(void* element, int32_t level) {
		return ((T (*)(Node*, void*, int32_t))(Il2CppBase() + 0x3DC9C4))(this, element, level);
	}
	template <typename T = void*> T get_Item(int32_t index) {
		return ((T (*)(Node*, int32_t))(Il2CppBase() + 0x3DD010))(this, index);
	}
	template <typename T = void> T set_Item(int32_t index, void* value) {
		return ((T (*)(Node*, int32_t, void*))(Il2CppBase() + 0x3DD05C))(this, index, value);
	}
	template <typename T = void*> T get_Element() {
		return ((T (*)(Node*))(Il2CppBase() + 0x3DD054))(this);
	}
};
