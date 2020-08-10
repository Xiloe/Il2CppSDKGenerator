#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Item1
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_UID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& m_Widget() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& m_ItemGui() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* id, void* w, void* itemGui) {
		return ((T (*)(Item1*, void*, void*, void*))(Il2CppBase() + 0x436010))(this, id, w, itemGui);
	}
	template <typename T = int32_t> T CompareTo(void* other) {
		return ((T (*)(Item1*, void*))(Il2CppBase() + 0x436058))(this, other);
	}
};
