#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShapeBox
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78DD8);
	}
	// Fields
	template <typename T = Il2CppVector3> T& m_Center() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& m_Extents() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& m_ExtentsScaled() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_Scale() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<void*>*> T& m_Axis() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ShapeBox*))(Il2CppBase() + 0x2337AC))(this);
	}
	template <typename T = void> T _ctor_1(Il2CppVector3 Extents) {
		return ((T (*)(ShapeBox*, Il2CppVector3))(Il2CppBase() + 0x233850))(this, Extents);
	}
	template <typename T = void> T SetPos(Il2CppVector3 Pos) {
		return ((T (*)(ShapeBox*, Il2CppVector3))(Il2CppBase() + 0x23390C))(this, Pos);
	}
	template <typename T = void> T SetRot(Il2CppQuaternion Rot) {
		return ((T (*)(ShapeBox*, Il2CppQuaternion))(Il2CppBase() + 0x233918))(this, Rot);
	}
	template <typename T = void> T SetFrame(void* Frame) {
		return ((T (*)(ShapeBox*, void*))(Il2CppBase() + 0x233D10))(this, Frame);
	}
	template <typename T = void> T SetExtents(Il2CppVector3 Extents) {
		return ((T (*)(ShapeBox*, Il2CppVector3))(Il2CppBase() + 0x234140))(this, Extents);
	}
	template <typename T = void> T SetScale(float Scale) {
		return ((T (*)(ShapeBox*, float))(Il2CppBase() + 0x2341A0))(this, Scale);
	}
	template <typename T = int32_t> T RayCast(Il2CppVector3 Origin, Il2CppVector3 Direction, Il2CppArray<void*>* Hits) {
		return ((T (*)(ShapeBox*, Il2CppVector3, Il2CppVector3, Il2CppArray<void*>*))(Il2CppBase() + 0x2341EC))(this, Origin, Direction, Hits);
	}
	template <typename T = int32_t> T SphereCast(Il2CppVector3 Origin, Il2CppVector3 Direction, float Radius, Il2CppArray<void*>* Hits) {
		return ((T (*)(ShapeBox*, Il2CppVector3, Il2CppVector3, float, Il2CppArray<void*>*))(Il2CppBase() + 0x2347F4))(this, Origin, Direction, Radius, Hits);
	}
	template <typename T = void> T SnapToBox(void* Hit) {
		return ((T (*)(ShapeBox*, void*))(Il2CppBase() + 0x234940))(this, Hit);
	}
	template <typename T = void> T UpdateBBox() {
		return ((T (*)(ShapeBox*))(Il2CppBase() + 0x234E00))(this);
	}
	template <typename T = void> T Draw(Il2CppColor Col) {
		return ((T (*)(ShapeBox*, Il2CppColor))(Il2CppBase() + 0x2350F4))(this, Col);
	}
	template <typename T = void> T Draw_1(Il2CppColor Col, Il2CppColor BoundsCol) {
		return ((T (*)(ShapeBox*, Il2CppColor, Il2CppColor))(Il2CppBase() + 0x2353A4))(this, Col, BoundsCol);
	}
};
