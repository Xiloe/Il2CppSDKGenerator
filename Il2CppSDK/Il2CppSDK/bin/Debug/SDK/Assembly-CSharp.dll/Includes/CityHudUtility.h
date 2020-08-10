#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CityHudUtility
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78AF4);
	}
	// Fields
	template <typename T = float> T& xLeft() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& xRight() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& yTop() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& yBottom() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& screenCamPos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& screenUp() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& screenBottom() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& screenLeft() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& screenRight() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CityHudUtility*))(Il2CppBase() + 0x2ABE38))(this);
	}
	template <typename T = void> T InitResolution() {
		return ((T (*)(CityHudUtility*))(Il2CppBase() + 0x2ABE40))(this);
	}
	template <typename T = float> T GetScreenBottom() {
		return ((T (*)(CityHudUtility*))(Il2CppBase() + 0x2ABF60))(this);
	}
	template <typename T = bool> T FindIntersectionWithScreen(Il2CppVector3 iconScreenPos, void** intersect) {
		return ((T (*)(CityHudUtility*, Il2CppVector3, void**))(Il2CppBase() + 0x2ABF84))(this, iconScreenPos, intersect);
	}
};
