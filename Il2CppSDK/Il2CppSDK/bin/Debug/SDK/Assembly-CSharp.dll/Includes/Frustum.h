#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Frustum
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78EB0);
	}
	// Fields
	template <typename T = Il2CppVector3> static T& m_Pos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> static T& m_Dir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppVector3> static T& m_Up() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppVector3> static T& m_Right() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = float> static T& m_Near() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = float> static T& m_Far() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = float> static T& m_Ratio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = float> static T& m_FOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = float> static T& m_InvCosX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = float> static T& m_InvCosY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = float> static T& m_TanY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = float> static T& m_OrthoSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = void*> static T& m_ProjMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = Il2CppArray<void*>*> static T& m_ClipPlanes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = bool> static T& m_ClipPlanesValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = bool> static T& UpdateClippingPlanes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x59);
	}
	// Methods
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x320E48))(0);
	}
	template <typename T = bool> static T get_UpdateClippingPlanes() {
		return ((T (*)(void *))(Il2CppBase() + 0x320EEC))(0);
	}
	template <typename T = void> static T set_UpdateClippingPlanes(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x320F9C))(0, value);
	}
	template <typename T = void> static T Setup(void* Cam, float Far) {
		return ((T (*)(void *, void*, float))(Il2CppBase() + 0x321050))(0, Cam, Far);
	}
	template <typename T = void> static T SetupPersp(Il2CppVector3 Pos, Il2CppVector3 Dir, Il2CppVector3 Up, Il2CppVector3 Right, float Near, float Far, float Ratio, float FOV) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3, float, float, float, float))(Il2CppBase() + 0x322060))(0, Pos, Dir, Up, Right, Near, Far, Ratio, FOV);
	}
	template <typename T = void> static T SetupClippingPlanes(void* WorldToProjection) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x32194C))(0, WorldToProjection);
	}
	template <typename T = bool> static T IsInside(Il2CppVector3 Point) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x32267C))(0, Point);
	}
	template <typename T = bool> static T IsInside_1(Il2CppVector3 BoxMin, Il2CppVector3 BoxMax) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x322A08))(0, BoxMin, BoxMax);
	}
	template <typename T = bool> static T IsInside_2(Il2CppVector3 SphereCenter, float SphereRadius) {
		return ((T (*)(void *, Il2CppVector3, float))(Il2CppBase() + 0x322C68))(0, SphereCenter, SphereRadius);
	}
	template <typename T = void> static T Draw(Il2CppColor Col) {
		return ((T (*)(void *, Il2CppColor))(Il2CppBase() + 0x322E18))(0, Col);
	}
};
