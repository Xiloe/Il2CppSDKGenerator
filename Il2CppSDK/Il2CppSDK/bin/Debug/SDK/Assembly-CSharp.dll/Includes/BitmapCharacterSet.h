#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BitmapCharacterSet
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& MaxCharHeight() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& LineHeight() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Base() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& RenderedSize() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Width() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Height() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<void*>*> T& _CharTable() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<int32_t, void*>*> T& Characters() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(BitmapCharacterSet*))(Il2CppBase() + 0x35A418))(this);
	}
	template <typename T = bool> T get_isReady() {
		return ((T (*)(BitmapCharacterSet*))(Il2CppBase() + 0x35CC7C))(this);
	}
};
