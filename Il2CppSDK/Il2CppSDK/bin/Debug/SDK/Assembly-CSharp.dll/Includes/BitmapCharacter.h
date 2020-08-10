#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BitmapCharacter
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& Char() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& X() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Y() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Width() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Height() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& XOffset() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& YOffset() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& XAdvance() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<void*>*> T& KerningList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(BitmapCharacter*))(Il2CppBase() + 0x35BE40))(this);
	}
};
