#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Line
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& x1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& y1() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& x2() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& y2() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T Shorten(float byPixels) {
		return ((T (*)(Line*, float))(Il2CppBase() + 0x298F60))(this, byPixels);
	}
};
