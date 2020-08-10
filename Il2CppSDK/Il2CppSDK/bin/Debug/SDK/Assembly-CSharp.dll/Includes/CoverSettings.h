#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CoverSettings
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& RightMaxUp() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& RightMaxDown() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& RightMaxRight() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& RightMaxLeft() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& LeftMaxUp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& LeftMaxDown() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& LeftMaxRight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& LeftMaxLeft() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& CenterMaxUp() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& CenterMaxDown() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& CenterMaxRight() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& CenterMaxLeft() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CoverSettings*))(Il2CppBase() + 0x1DB330))(this);
	}
};
